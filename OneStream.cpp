#include "OneStream.h"
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
//������ ����� ��������� �� ���� ����
//-all_of ��������� �������� �������� ��� ������� �������� � ���������� true,
//����� ������ ������� � ��������� ������������� ���������� ��������
//-isspace ��������� ���� ������������ ���� ������ ������
//isdigit ��������� �� ��� ������ �����
bool OneStream::inputValidation(std::string inputString) { 
	return std::all_of(m_inputString.begin(), m_inputString.end(), [](int ch) {
		return (std::isdigit(ch) || std::isspace(ch));
		});
};
void OneStream::quantityCheck() {//�������� �� ������ ������, ���� ������� ������� , �� ������ ��������� � ������������ ������ ��� ���
	if (m_inputString.size() > 64) {
		std::cout << "������ ������� �������! ";
		m_inputString.clear();
		inputValue();
	}
}
void OneStream::inputValue() { //�������� �� ���� ��������
	do {
		std::cout << "������� �����: ";
		std::getline(std::cin, m_inputString);
	} while (!inputValidation(m_inputString));
	quantityCheck();
}