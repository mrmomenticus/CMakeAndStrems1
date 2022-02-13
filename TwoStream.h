#include <sstream>
#include <iostream>
#include <regex>
class TwoStream
{
	std::string m_twostring;
    std::string sum;
public:
	void setTwoString(std::string twostring) { m_twostring = twostring; }
    void threadExecution();
    std::string getTwoString() { return sum; }
};

