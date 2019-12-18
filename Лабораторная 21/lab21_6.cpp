// 6. Дана строка, содержащая полное имя файла. Выделить из этой строки название последнего каталога (без символов «\»). Если файл содержится в корневом каталоге, то вывести символ «\».

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	int i;

	cout << "Введите строку: ";
	getline(cin, s);

	i = s.length() - 1;

	while (s[i] != '\\') i--;
	i -= 2;

	while (s[i] != '\\')
	{
		if (i != 0) i--;
		else
		{
			cout << "\\";
			return 0;
		}
	}

	i++;
	cout << "Название последнего каталога: ";
	while (s[i] != '\\') cout << s[i++];
}