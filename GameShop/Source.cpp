#include "Header.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Game_Shop game_shop;
	int choose;
	do
	{
		cout << "\t" << "������e" << "\n";
		cout << "����������� ���������� ������� ������� �� ���������� ������:" << "\n";
		cout << "	�������� ����" << "\n";
		cout << "	��������" << "\n";
		cout << "	����" << "\n";
		cout << "	������� ������������" << "\n";
		cout << "	����" << "\n";
		cout << "����������� ��������� �����������:" << "\n";
		cout << "	����� ���� �������" << "\n";
		cout << "	���������� ����� ����" << "\n";
		cout << "	�������� ���� �� ��������" << "\n";
		cout << "	����� �� ��������" << "\n";
		cout << "	����� �� �����" << "\n";
		cout << "	����� �� ���������" << "\n";
		cout << "	����� ���������� ���� � �����" << "\n";
		cout << "�������� ������ �  ���� � ��������� Unicode, ������� � " << "\n";
		cout << "���������� ���������� ������ � ����� ����, �������������� " << "\n";
		cout << "�������� ���������� � ������ ANSI. " << "\n";
		cin >> choose;
		switch (choose)
		{
		case(1):
		{
			game_shop.Show();
			return 0;
			break;
		}
		case(2):
		{
			game_shop.Popular(L"The Last of Us");
			return 0;
			break;
		}
		case(3):
		{
			game_shop.FindName(L"Heavy Rain");
			return 0;
			break;
		}
		case(4):
		{
			exit(0);
			break;
		}
		}
	} while (choose != 4);
}