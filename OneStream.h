#pragma once
#include <string>
class OneStream
{
	std::string m_inputString;
	bool inputValidation(std::string inputString);
	void quantityCheck();
public:
	OneStream(std::string inputString) : m_inputString(inputString) {
	}
	void inputValue();
	
};

