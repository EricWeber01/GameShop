#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _UNICODE
#ifndef PCH_H
#define PCH_H
#endif
#include <iostream>
#include <tchar.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <fstream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <sstream>
#include <locale>
#include <codecvt>
#include <vector>
#include <algorithm>

using namespace std;

class Game_Shop
{
private:
    vector<wstring> game;
    wstring buffer;
public:
    Game_Shop();
    void Add();
    void Delete(wstring name);
    void Show();
    void FindName(wstring name);
    void FindType(wstring name);
    void FindCreator(wstring name);
    void Popular(wstring name);
    ~Game_Shop();
};
