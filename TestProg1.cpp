
#include "TestProg1.h"
void TestProg1::broadcast(std::string twostring) {
    char message[64];
    std::for_each(twostring.begin(), twostring.end(), [twostring, &message](char c){
        for(int i = 0; i < twostring.size(); i++){
            message[i] = c;
        };
    });
    int sock;
    struct sockaddr_in addr;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0)
    {
        perror("socket");
        exit(1);
    }

    addr.sin_family = AF_INET;
    addr.sin_port = htons(3425); // или любой другой порт...
    addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    if(connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        perror("connect");
        exit(2);
    }

    send(sock, message, sizeof(message), 0);
    std::cout << "Данные переданны";
    close(sock);

};
void TestProg1::fillingOneStream(std::vector <char>& buffer, OneStream &onestream) {
    std::unique_lock<std::mutex> locker(m1);
    onestream.inputValue();
    std::string i = onestream.getOneString();
    std::copy(i.begin(), i.end(), std::back_inserter(buffer));
};
void TestProg1::fillngTwoStream(std::vector <char> &buffer, TwoStream& twostream) {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::unique_lock<std::mutex> locker(m1);
    std::string i(buffer.begin(), buffer.end());
    twostream.setTwoString(i);
    buffer.clear();
    broadcast(twostream.getTwoString());
}


int main()
{
    setlocale(LC_ALL, "RUS");
    TestProg1 prog;
    OneStream onestream;
    TwoStream twostream;
    std::vector<char> buffer;
    std::thread t1([&]() {prog.fillingOneStream(buffer, onestream);});
    std::thread t2([&]() {prog.fillngTwoStream(buffer, twostream);});
    t1.join();
    t2.join();
    //twostream.threadExecution();


}
