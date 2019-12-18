// 2. Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти длину самого короткого слова.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k = 0, d= 2147483647;
	string s = "";
	cout << "Введите строку, содержащую пробелы, состоящую из русских слов: ";
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ') k++;
		else
		{
			if (k < d)
			{
				d = k;
			}
			k = 0;
		}
	}
	if (k < d)
	{
		d = k;
	}

	cout << "Длина самого короткого слова " << d;
}