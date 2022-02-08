#include "TestProg1.h"
void TestProg1::fillingOneStream(std::vector <char>& buffer, OneStream &onestream) {
    std::unique_lock<std::mutex> locker(m1);
    onestream.inputValue();
    std::string i = onestream.getOneString();
    std::copy(i.begin(), i.end(), std::back_inserter(buffer));
    k = 1;
};
void TestProg1::fillngTwoStream(std::vector <char> &buffer, TwoStream& twostream) {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::unique_lock<std::mutex> locker(m1);
    cv.wait(locker, [&]() {return k == 1; });
    std::string i(buffer.begin(), buffer.end());
    twostream.setTwoString(i);
    buffer.clear();
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
    twostream.test();
    

}
