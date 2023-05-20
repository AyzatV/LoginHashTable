#pragma once
#include <vector>
#include "hash_table.h"

class Chat
{
public:
	Chat();
	void reg(std::string login, std::string password);
	void log(std::string login, std::string password);

private:
	HashTable htable;
};