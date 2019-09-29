// 3. Даны целые положительные числа A и B (A > B).
//На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
//Найти длину незанятой части отрезка A.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double A, B, bacon, k;
	int t;
	cout << "Введите B: "; cin >> B;
	cout << "Введите A > B: "; cin >> A;

	k = A - B;
	t = k / B;
	bacon = k - t * B;

	cout << "Длина незанятой части А = " << bacon;
	
}