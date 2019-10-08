// 1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 
// (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, k, d;
	cout << "Введите день :"; cin >> n;
	cout << "Введите месяц :"; cin >> k;
	d = n % 10;
	if (n < 20)
	{
		switch (n)
		{
		case 1:cout << "первое ";  break;
		case 2:cout << "второе ";  break;
		case 3:cout << "третье ";  break;
		case 4:cout << "четвёртое ";  break;
		case 5:cout << "пятое ";  break;
		case 6:cout << "шестое ";  break;
		case 7:cout << "седьмое ";  break;
		case 8:cout << "восьмое ";  break;
		case 9:cout << "девятое ";  break;
		case 10:cout << "десятое ";  break;
		case 11:cout << "одиннадцатое ";  break;
		case 12:cout << "двеныдцатое ";  break;
		case 13:cout << "тринадцатое ";  break;
		case 14:cout << "четырныдцатое ";  break;
		case 15:cout << "пятнадцатое ";  break;
		case 16:cout << "шестнадцатое ";  break;
		case 17:cout << "семнадцатое ";  break;
		case 18:cout << "восемнадцатое ";  break;
		case 19:cout << "девятнадцатое ";  break;
		}
	}
	else if (n == 20) cout << "двадцатое";
	else if (n > 20 & n < 30){
		cout << "двадцать ";
		switch (d)
		{
		case 1:cout << "первое ";  break;
		case 2:cout << "второе ";  break;
		case 3:cout << "третье ";  break;
		case 4:cout << "четвёртое ";  break;
		case 5:cout << "пятое ";  break;
		case 6:cout << "шестое ";  break;
		case 7:cout << "седьмое ";  break;
		case 8:cout << "восьмое ";  break;
		case 9:cout << "девятое ";  break;
		}
	}
	else if (n == 30) cout<< "тридцатое ";
	else if (n == 31) cout << "тридцать первое ";
	switch (k)
	{
	case 1:cout << "января ";  break;
	case 2:cout << "февраля ";  break;
	case 3:cout << "марта ";  break;
	case 4:cout << "апреля ";  break;
	case 5:cout << "мая ";  break;
	case 6:cout << "июня ";  break;
	case 7:cout << "июля ";  break;
	case 8:cout << "августа ";  break;
	case 9:cout << "сентября ";  break;
	case 10:cout << "октября ";  break;
	case 11:cout << "ноября ";  break;
	case 12:cout << "декабря ";  break;
	}
}




