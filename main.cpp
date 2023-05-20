#include "chat.h"
#include <Windows.h>

int main()
{
	// поддержка ввода-вывода на кириллице
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Chat chat;
	std::string login;
	std::string password;

	while (login!="q")
	{
		std::cout << "Для регистрации введите логин: ";
		std::cin >> login;
		std::cout << std::endl << "введите пароль: ";
		std::cin >> password;
		chat.reg(login, password);

		std::cout << "Для входа в систему введите логин: ";
		std::cin >> login;
		std::cout << std::endl << "введите пароль: ";
		std::cin >> password;
		chat.log(login, password);
	}
	std::cin.get();
	std::cin.get();
	return 0;
}