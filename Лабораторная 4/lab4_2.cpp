// 2. Дано значение угла α в радианах (0 < α < 2·π). Определить значение этого же угла в градусах,
// учитывая, что 180◦ = π радианов.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double a;
	cout << "Введите 0 < а < 360:"; cin >> a;
	a = a * 180 / 3.14;
	cout << "a в градусах равно:" << a;
}




