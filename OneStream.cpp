#include "OneStream.h"

//Данный метод проверяет на ввод цифр
//-all_of проверяет заданное свойство для каждого элемента и возвращает true,
//когда каждый элемент в диапазоне удовлетворяет указанному свойству
//-isspace проверяет если пользователь ввел только пробел
//isdigit проверяет то что символ цифра

bool OneStream::inputValidation(std::string inputString) { 
	return std::all_of(m_inputString.begin(), m_inputString.end(), [](int ch) {
		return (std::isdigit(ch));
		});
};
bool comp(int a, int b) { return (a > b); }
void OneStream::sortAndReplacement() {
	std::sort(m_inputString.begin(), m_inputString.end(), comp);
	/*std::replace_if(m_inputString.begin(), m_inputString.end(), [](const char* c) {return *c == '31'; }, "KB");*/ //попроовать потом реализовать через это
	for (char& c : m_inputString) {
		if (c == 50 || c == 52 || c == 54 || c == 56 || c == 58) {
			m_inputString.replace(m_inputString.find(c), 1, "KB");
		}
	};
}
void OneStream::quantityCheck() {//проверка на длинну строки, если слишком длинная , то строка очищается и пользователь вводит еще раз
	if (m_inputString.size() > 64) {
		std::cout << "Строка слишком длинная! ";
		m_inputString.clear();
		inputValue();
	}
}
void OneStream::inputValue() { //отвечает за ввод значений
	do {
		std::cout << "Введите цифры: ";
		std::getline(std::cin, m_inputString);
	} while (!inputValidation(m_inputString));
	quantityCheck();
	sortAndReplacement();
	bufferclass.filling(m_inputString);
	std::cout << m_inputString;
	
}
