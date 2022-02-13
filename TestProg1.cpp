
#include "TestProg1.h"
void TestProg1::broadcast(std::string twostring) {
    int sock= socket(AF_INET, SOCK_STREAM, 0);

    if(sock < 0)
    {
        std::cout << "Не получилось создать сокет\n";
        exit(1);
    }

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(3425);
    addr.sin_addr.s_addr = inet_addr( "127.0.0.1" );
    if(connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        std::cout << "Не получилось связать\n";
        exit(2);
    }

    int send_result = send(sock, twostring.c_str(), BUFFER_SIZE, 0);
    if(send_result <= 0)
        std::cout << "не получилось передать данные" << std::endl;
    std::cout << "Данные переданны"<<std::endl;
    close(sock);

};
void TestProg1::fillingOneStream(std::vector <char>& buffer, OneStream &onestream) {
        std::unique_lock<std::mutex> locker(m1);
        cv.wait(locker, [&]() { return l == 0; });
        onestream.inputValue();
        std::string i = onestream.getOneString();
        std::copy(i.begin(), i.end(), std::back_inserter(buffer));
        l = 1;
};
void TestProg1::fillngTwoStream(std::vector <char> &buffer, TwoStream& twostream) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::unique_lock<std::mutex> locker(m1);
        cv.wait(locker, [&]() { return l == 1; });
        std::string i(buffer.begin(), buffer.end());
        twostream.setTwoString(i);
        buffer.clear();
        twostream.threadExecution();
        broadcast(twostream.getTwoString());
        l = 0;
}


int main()
{
    setlocale(LC_ALL, "RUS");
    TestProg1 prog;
    OneStream onestream;
    TwoStream twostream;
    std::vector<char> buffer;
    while(1) {
        std::thread t1([&]() { prog.fillingOneStream(buffer, onestream); });
        std::thread t2([&]() { prog.fillngTwoStream(buffer, twostream); });
        t1.join();
        t2.join();
    }



}
