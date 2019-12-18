// 1. Дан символьный файл, содержащий по крайней мере один символ пробела. Удалить все его элементы, расположенные перед первым символом пробела, включая и этот пробел.

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream a; // ввод в текстовый документ
	ifstream b; // вывод из текстового документа
	string ish, line;

	cout << "Введите строку: ";
	getline(cin, ish);

	a.open("file1.txt");
	a << ish;
	a.close();

	b.open("file1.txt");
	getline(b, line);
	b.close();

	int i = 0;
	while (line[i] != ' ') i++;
	i++;

	a.open("file1.txt");

	for (i; i < line.length(); i++) a << line[i];

	a.close();
}