// 2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double a, b, c, ac, bc, s;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	ac = abs(a - c);
	bc = abs(b - c);
	s = ac + bc;
	cout << "Длина AC: " << ac << endl;
	cout << "Длина BC: " << bc << endl;
	cout << "Сумма длин AC и BC: " << s;
}