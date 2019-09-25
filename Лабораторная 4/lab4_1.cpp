// 1. Дано значение угла α в градусах (0 < α < 360). Определить значение этого же угла в радианах,
//учитывая, что 180◦ = π радианов.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double a;
	cout << "Введите 0<a<360: "; cin >> a;
	a = a * 3.14 / 180;
	cout << "a в радианах равно:" << a;
}




