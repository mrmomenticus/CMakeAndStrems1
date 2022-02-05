#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include <algorithm>
#include "BufferClass.h"
class OneStream
{
	std::string m_inputString;
	bool inputValidation(std::string inputString);
	void quantityCheck();
	void sortAndReplacement();
	BufferClass bufferclass;
public:
	void inputValue();
	
};


