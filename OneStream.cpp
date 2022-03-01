#include "OneStream.h"


bool OneStream::inputValidation(std::string inputString) { 
	return std::all_of(m_inputString.begin(), m_inputString.end(), [](int ch) {
		return (std::isdigit(ch));
		});
};
bool comp(int a, int b) { return (a > b); }
void OneStream::sortString() {
	std::sort(m_inputString.begin(), m_inputString.end(), comp);
};
void OneStream::replacement() {
	//std::replace_if(m_inputString.begin(), m_inputString.end(), [](const char* c) {return *c == '31'; }, "KB");
    std::string r;
    r.reserve(m_inputString.size());
    for(char c : m_inputString) {
        if (c == 50 || c == 52 || c == 54 || c == 56 || c == 58) {
            r += "KB";
        } else {
            r += c;
        }
    }
    m_inputString.swap(r);
}
void OneStream::quantityCheck() {
	if (m_inputString.size() > BUFFER_SIZE) {
		std::cout << "Слишком много значений! ";
		m_inputString.clear();
		inputValue();
	}
}

void OneStream::inputValue() {
	do {
		std::cout << "Введите число: ";
		std::getline(std::cin, m_inputString);
	} while (!inputValidation(m_inputString));
	quantityCheck();
	sortString();
	replacement();
}

