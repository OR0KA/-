// 5. Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов (путь), собственно имя и расширение. Выделить из этой строки имя файла (без расширения)
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(0, "");
	int k = 1;
	string s = "";
	cout << "Введите полное имя файла: ";
	getline(cin, s);

	for (int i = s.length(); i > 0; i--)
	{
		if (s[i] == '.')
		{
			i--;
			while (s[i] != '\\')
			{
				i--;
			}
			i++;
			cout << "Имя файла: ";
			while (s[i] != '.')
			{
				cout << s[i];
				i++;
			}
			break;
		}
	}
	
}