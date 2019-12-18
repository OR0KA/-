﻿// 3. Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими).
// Преобразовать каждое слово в строке, заменив в нем все последующие вхождения его первой буквы на символ «.» (точка).
// Например, слово «МИНИМУМ» надо преобразовать в «МИНИ.У.». Количество пробелов между словами не изменять

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(0, "");
	int k = 1, i;
	string s = "";
	cout << "Введите строку, содержащую пробелы, состоящую из русских слов, набранных заглавными буквами: ";
	getline(cin, s);

	/*for (i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			int j = i + 1;
			while (s[j] != ' ')
			{
				
				if (s[i] == s[j])
				{
					s[j] = '.';
				}
				j++;
			}
		}
	}
	//if (s[i] != ' ')
	//{
	//		if (s[i] == s[s.length()-1]) s[s.length()-1] = '.';
	//}*/
	int j = 0;
	for (i = 1; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			if (s[j] == s[i]) s[i] = '.';
		}
		else
		{
			j = i + 1;
			i++;
		}
	}
	cout << s;
}