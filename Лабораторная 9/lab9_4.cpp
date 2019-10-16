// 4. Дано целое число в диапазоне 100–999.
// Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть»,
// 814 — «восемьсот четырнадцать».
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, k, l, m, d;
	string str;
	cout << "Введите трёхзначное число: ";
	cin >> n;

	k = n / 100;
	l = n / 10 % 10;
	m = n % 100;
	d = n % 10;

	switch (k)
	{
	case 1: str += "сто "; break;
	case 2: str += "двести "; break;
	case 3: str += "триста "; break;
	case 4: str += "четыреста "; break;
	case 5: str += "пятьсот "; break;
	case 6: str += "шестьсот "; break;
	case 7: str += "семьсот "; break;
	case 8: str += "восемьсот "; break;
	case 9: str += "девятьсот "; break;
	}
	if (m < 20 & m>9)
	{
		switch (m)
		{
		case 10: str += "десять"; break;
		case 11: str += "одиннадцать"; break;
		case 12: str += "двенадцать"; break;
		case 13: str += "тринадцать"; break;
		case 14: str += "четырнадцать"; break;
		case 15: str += "пятнадцать"; break;
		case 16: str += "шестнадцать"; break;
		case 17: str += "семнадцать"; break;
		case 18: str += "восемнадцать"; break;
		case 19: str += "девятнадцать"; break;
		}
	}
	else
	{
		switch (l)
		{
		case 2: str += "двадцать "; break;
		case 3: str += "тридцать "; break;
		case 4: str += "сорок "; break;
		case 5: str += "пятьдесят "; break;
		case 6: str += "шестьдесят "; break;
		case 7: str += "семьдесят "; break;
		case 8: str += "восемьдесят "; break;
		case 9: str += "девяносто "; break;
		}
		switch (d)
		{
		case 1: str += "один"; break;
		case 2: str += "два"; break;
		case 3: str += "три"; break;
		case 4: str += "четыре"; break;
		case 5: str += "пять"; break;
		case 6: str += "шесть"; break;
		case 7: str += "семь"; break;
		case 8: str += "восемь"; break;
		case 9: str += "девять"; break;
		}
	}
	cout << str;
}