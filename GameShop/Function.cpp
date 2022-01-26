#include "Header.h"
Game_Shop::Game_Shop()
{
    const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());
    wifstream file(L"GameUTF.txt");
    buffer = L"";
    file.imbue(utf8_locale);
    while (!file.eof())
    {
        getline(file, buffer);
        game.push_back(buffer);
    }
    file.close();
}
void Game_Shop::Add()
{
    buffer = L"";
    cout << "�������� ���� ==> ";
    wcin >> buffer;
    game.push_back(buffer);
    buffer = L"";
    cout << "����������� ==> ";
    wcin >> buffer;
    game.push_back(buffer);
    buffer = L"";
    cout << "���� ==> ";
    wcin >> buffer;
    game.push_back(buffer);
    buffer = L"";
    cout << "������� ������������ ==> ";
    wcin >> buffer;
    game.push_back(buffer);
    buffer = L"";
    cout << "���� ���� ==> ";
    wcin >> buffer;
    game.push_back(buffer);
}
void Game_Shop::Delete(wstring name)
{
    for (size_t i = 0; i < game.size(); i += 5)
    {
        if (name == game[i])
            game.erase(game.begin() + i, game.begin() + i + 5);
    }
}
void Game_Shop::Show()
{
    for (size_t i = 0; i < game.size(); i += 5)
    {
        wcout << L"�������� ==> " << game[i] << "\n";
        wcout << L"����������� ==> " << game[i + 1] << "\n";
        wcout << L"���� ==> " << game[i + 2] << "\n";
        wcout << L"������� ==> " << game[i + 3] << "\n";
        wcout << L"���� ==> " << game[i + 4] << L"$" << "\n";
    }
}
void Game_Shop::FindName(wstring name)
{
    for (size_t i = 0; i < game.size(); i += 5)
    {
        if (name == game[i])
        {
            wcout << L"�������� ==> " << game[i] << "\n";
            wcout << L"����������� ==> " << game[i + 1] << "\n";
            wcout << L"���� ==> " << game[i + 2] << "\n";
            wcout << L"������� ==> " << game[i + 3] << "\n";
            wcout << L"���� ==> " << game[i + 4] << L"$" << "\n";
        }
    }
}
void Game_Shop::FindType(wstring name)
{
    for (size_t i = 2; i < game.size(); i += 5)
    {
        if (name == game[i])
        {
            wcout << L"�������� ==> " << game[i - 2] << "\n";
            wcout << L"����������� ==> " << game[i - 1] << "\n";
            wcout << L"���� ==> " << game[i] << "\n";
            wcout << L"������� ==> " << game[i + 1] << "\n";
            wcout << L"���� ==> " << game[i + 2] << L"$" << "\n";
        }
    }
}
void Game_Shop::FindCreator(wstring name)
{
    for (size_t i = 1; i < game.size(); i += 5)
    {
        if (name == game[i])
        {
            wcout << L"�������� ==> " << game[i - 1] << "\n";
            wcout << L"����������� ==> " << game[i] << "\n";
            wcout << L"���� ==> " << game[i + 1] << "\n";
            wcout << L"������� ==> " << game[i + 2] << "\n";
            wcout << L"���� ==> " << game[i + 3] << L"$" << "\n";
        }
    }
}
void Game_Shop::Popular(wstring name)
{
    vector<wstring> vec;
    for (size_t i = 2; i < game.size(); i += 5)
    {
        if (name == game[i])
        {
            vec.push_back(game[i - 2]);
            vec.push_back(game[i - 1]);
            vec.push_back(game[i]);
            vec.push_back(game[i + 1]);
            vec.push_back(game[i + 2]);
        }
    }
    int max = 0;
    int index;
    for (size_t i = 3; i < vec.size(); i += 5)
    {
        if (max < stoi(vec[i]))
        {
            index = i - 3;
        }
    }
    wcout << L"C���� ���������� � �����" << "\n";
    wcout << L"�������� ==> " << game[index] << "\n";
    wcout << L"����������� ==> " << game[index + 1] << "\n";
    wcout << L"���� ==> " << game[index + 2] << "\n";
    wcout << L"������� ==> " << game[index + 3] << "\n";
    wcout << L"���� ==> " << game[index + 4] << L"$" << "\n";
}
Game_Shop::~Game_Shop()
{
    ofstream fout("GameANSI.txt");
    for (size_t i = 0; i < game.size(); i++)
    {
        string str(game[i].begin(), game[i].end());
        fout << str << endl;
    }
    fout.close();
}