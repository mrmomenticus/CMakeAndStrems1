#include <iostream>
#include <thread>
#include <mutex>
#include <sstream>
#include <string>
#include "OneStream.h"
#include "TwoStream.h"
class TestProg1 {
	std::mutex m1;
	std::condition_variable cv;
	int k = 0;
public:
	std::string inputString;
	void fillingOneStream(std::vector <char>& buffer, OneStream& onestream);
	void fillngTwoStream(std::vector <char>& buffer, TwoStream& twostream);
	
};