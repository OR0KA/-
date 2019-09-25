// 5. Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double A, B, x;
	cout << "Введите A != 0: "; cin >> A;
	cout << "Введите B: "; cin >> B;
	x = -B / A;
	cout << "x = " << x;

}




