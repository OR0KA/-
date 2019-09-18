//Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B.Найти произведение длин отрезков AC и BC
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, AB, BC;
	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	cout << "Введите c: "; cin >> c;
	AB = abs(c - a);
	BC = abs(c - b);
	cout << "Произведение длин отрезков = " << AB * BC;
	
}
