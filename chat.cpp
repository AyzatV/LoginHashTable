#include "chat.h"

Chat::Chat() {}

void Chat::reg(std::string login, std::string password)
{
	std::string info;
	if (htable.add(password, login)) info = "¬ы успешно зарегистрированы";
	else info = "–егистраци€ с данным паролем не удалась, попробуйте другой пароль";
	std::cout << std::endl << info << std::endl;
}

void Chat::log(std::string login, std::string password)
{
	std::string info;
	if (htable.find(password, login) == -1) info = "ѕользователь с такими логином и паролем не зарегистрирован";
	else info = "¬ы успешно вошли в систему";
	std::cout << std::endl << info << std::endl;
}

