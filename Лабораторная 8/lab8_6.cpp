﻿// 6. Дано целое число, лежащее в диапазоне 1–999. 
// Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, k;
	cout << "Введите число в диапазоне 1-999: "; cin >> a;

	b = a / 100;
	c = (a % 100)/10;

	k = a % 2;
	
	if ((b == 0) & (c == 0) & (k == 0))
	{
		cout << "однозначное чётное число";
	}
	else
	{
		if ((b == 0) & (c == 0) & (k != 0))
		{
			cout << "однозначное нечётное число";
		}
		else
		{
			if ((b == 0) & (c != 0) & (k == 0))
			{
				cout << "двузначное чётное число";
			}
			else
			{
				if ((b == 0) & (c != 0) & (k != 0))
				{
					cout << "двузначное нечётное число";
				}
				else
				{
					if ((b != 0) & (k == 0))
					{
						cout << "трёхзначное чётное число";
					}
					else
					{
						if ((b != 0) & (k != 0))
						{
							cout << "трёхзначное нечётное число";
						}
					}
				}
			}
		}
	}
}




