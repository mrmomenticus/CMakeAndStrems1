#include <iostream>
#include <thread>
#include <mutex>
#include <sstream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <cstdlib>
#include <bits/socket.h>
#include "OneStream.h"
#include "TwoStream.h"
class TestProg1 {
	std::mutex m1;
public:
	std::string inputString;
	void fillingOneStream(std::vector <char>& buffer, OneStream& onestream);
	void fillngTwoStream(std::vector <char>& buffer, TwoStream& twostream);
    void broadcast(std::string m_twoString);
};
