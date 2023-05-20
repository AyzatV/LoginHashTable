#include "hash_table.h"

HashTable::HashTable()
{
	count = 0;
	array = new Pair[MEM_SIZE];
}

HashTable::~HashTable()
{
	delete[] array;
}

bool HashTable::add(std::string key, std::string value)
{
	auto index = hash_func(key);
	auto result = (array[index].status == PairStatus::free);
	if (result)
	{
		array[index].status = PairStatus::engaged;
		array[index].hash_key = index;
		array[index].value = value;
	}
	return result;
}

void HashTable::del(std::string key, std::string value)
{
	auto index = find(key, value);
	if (index != -1)
	{
		array[index].status = PairStatus::free;
		array[index].hash_key = -1;
		array[index].value = std::string{};
	}
}

int HashTable::find(std::string key, std::string value)
{
	int result = -1;
	auto index = hash_func(key);
	if (array[index].status == PairStatus::engaged && array[index].value == value) result = index;
	return result;
}

int HashTable::hash_func(std::string key)
{
	int sum = 0;
	for (int i = 0; i < key.size(); i++) { sum += (i + 1) * key[i]; }
	double a = 0.7 * sum;
	return int(MEM_SIZE * (a - int(a)));
}


