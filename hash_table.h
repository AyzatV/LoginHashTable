#pragma once
#include <iostream>

#define MEM_SIZE 100

// ��� �������
class HashTable
{
public:

    HashTable();
    ~HashTable();
    bool add(std::string key, std::string value);
    void del(std::string key, std::string value);
    int find(std::string key, std::string value);  // ���������� hash_value (������)

private:

    enum class PairStatus {
        free,
        engaged
    };

    // ���� ����-��������
    struct Pair
    {
        std::string value;
        int hash_key;
        PairStatus status;

        Pair() : value(std::string{}), hash_key(-1), status(PairStatus::free) {}

    };

    int hash_func(std::string key);

    Pair* array;
    int count;
};