#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <string_view>

#define BUFFER_SIZE 64

class OneStream
{

	std::string m_inputString;
	bool inputValidation(std::string inputString);
	void quantityCheck();
	void replacement();
	void sortString();
public:
	void inputValue();
	std::string getOneString() { return m_inputString; }
};


