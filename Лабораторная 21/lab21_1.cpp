// 1. Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти количество слов в строке.
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
	cout << "Введите строку, содержащую пробелы, состоящую из русских слов: ";
	getline(cin, s);

	for (int i = 0; i < s.length()-1; i++)
	{
		if (s[i] == ' ' & s[i + 1] != ' ') k++;
	}

	cout << "К-во слов в строке равно " << k;
}