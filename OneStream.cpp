#include "OneStream.h"
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
//Данный метод проверяет на ввод цифр
//-all_of проверяет заданное свойство для каждого элемента и возвращает true,
//когда каждый элемент в диапазоне удовлетворяет указанному свойству
//-isspace проверяет если пользователь ввел только пробел
//isdigit проверяет то что символ число
bool OneStream::inputValidation(std::string inputString) { 
	return std::all_of(m_inputString.begin(), m_inputString.end(), [](int ch) {
		return (std::isdigit(ch) || std::isspace(ch));
		});
};
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
}