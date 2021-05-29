// modAlphaCipher.h
#pragma once
#include <algorithm>
#include <cctype>
#include <codecvt>
#include <iostream>
#include <locale>
#include <map>
#include <string>
#include <vector>
using namespace std;

class modAlphaCipher
{
private:
    int newkey; // количество столбцов таблицы
public:
    modAlphaCipher() = delete;
    modAlphaCipher(const int& key)
        : newkey(key) {};                    // конструктор
    string coder(const string& open_st);     // зашифрование
    string decoder(const string& cipher_st); // расшифрование
};
