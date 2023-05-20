#include "chat.h"
#include <Windows.h>

int main()
{
	// ��������� �����-������ �� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Chat chat;
	std::string login;
	std::string password;

	while (login!="q")
	{
		std::cout << "��� ����������� ������� �����: ";
		std::cin >> login;
		std::cout << std::endl << "������� ������: ";
		std::cin >> password;
		chat.reg(login, password);

		std::cout << "��� ����� � ������� ������� �����: ";
		std::cin >> login;
		std::cout << std::endl << "������� ������: ";
		std::cin >> password;
		chat.log(login, password);
	}
	std::cin.get();
	std::cin.get();
	return 0;
}