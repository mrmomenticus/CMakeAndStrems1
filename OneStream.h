#pragma once
#include <string>
#include <vector>
class OneStream
{
	std::string m_inputString;
	bool inputValidation(std::string inputString);
	void quantityCheck();
	void sortAndReplacement();
public:
	OneStream(std::string inputString) : m_inputString(inputString) {
	}
	void inputValue();
	std::vector<char> bufferFilling(std::vector<char> buffer) {};
};

