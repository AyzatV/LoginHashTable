#include "chat.h"

Chat::Chat() {}

void Chat::reg(std::string login, std::string password)
{
	std::string info;
	if (htable.add(password, login)) info = "�� ������� ����������������";
	else info = "����������� � ������ ������� �� �������, ���������� ������ ������";
	std::cout << std::endl << info << std::endl;
}

void Chat::log(std::string login, std::string password)
{
	std::string info;
	if (htable.find(password, login) == -1) info = "������������ � ������ ������� � ������� �� ���������������";
	else info = "�� ������� ����� � �������";
	std::cout << std::endl << info << std::endl;
}

