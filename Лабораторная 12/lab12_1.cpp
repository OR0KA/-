// 1. Описать функцию PowerA3(A, B), вычисляющую третью степень числа A 
// и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными).
// С помощью этой функции найти третьи степени пяти данных чисел.
//

#include <iostream>

using namespace std;

void PowerA3(double A, double& B)
{
	B = A * A * A;
}

int main(void)
{
	int i;
	double mas[5];
	for (i = 0; i < 5; i++)
	{
		cin >> mas[i]; 
	}
	for (i = 0; i < 5; i++)
	{
		PowerA3(mas[i], mas[i]);
		cout << mas[i] << ' ';
	}
}




