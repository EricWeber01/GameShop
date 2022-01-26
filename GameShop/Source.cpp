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
		cout << "\t" << "Заданиe" << "\n";
		cout << "Разработать приложение игровой магазин со следующими полями:" << "\n";
		cout << "	Название игры" << "\n";
		cout << "	Издатель" << "\n";
		cout << "	Жанр" << "\n";
		cout << "	Рейтинг популярности" << "\n";
		cout << "	Цена" << "\n";
		cout << "Реализовать следующие возможности:" << "\n";
		cout << "	Показ всех записей" << "\n";
		cout << "	Добавление новой игры" << "\n";
		cout << "	Удаление игры по названию" << "\n";
		cout << "	Поиск по названию" << "\n";
		cout << "	Поиск по жанру" << "\n";
		cout << "	Поиск по издателях" << "\n";
		cout << "	Самая популярная игра в жанре" << "\n";
		cout << "Записать данные в  файл с символами Unicode, считать и " << "\n";
		cout << "копировать содержимое файлов в новый файл, преобразовывая " << "\n";
		cout << "исходное содержимое в формат ANSI. " << "\n";
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