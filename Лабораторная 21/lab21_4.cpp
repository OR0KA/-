// 4. Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке гласных букв.
//

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k = 0;
	string s;

	cout << "Введите строку: ";
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'а' || s[i] == 'А' || s[i] == 'у' || s[i] == 'У' || s[i] == 'е' || s[i] == 'Е' || s[i] == 'ы' || s[i] == 'Ы' || s[i] == 'о' || s[i] == 'О' || s[i] == 'э' || s[i] == 'Э' || s[i] == 'я' || s[i] == 'Я' || s[i] == 'и' || s[i] == 'И' || s[i] == 'ю' || s[i] == 'Ю' || s[i] == 'ё' || s[i] == 'Ё') k++;
	}
	cout << "Кол-во гласных букв в строке: " << k;
}