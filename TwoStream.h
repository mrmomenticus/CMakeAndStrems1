#include <sstream>
#include <iostream>
#include <regex>
class TwoStream
{
	std::string m_twostring;
public:
	void setTwoString(std::string twostring) { m_twostring = twostring; }
    void threadExecution();
};

