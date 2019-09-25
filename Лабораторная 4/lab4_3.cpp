// 3. Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double A, X, Y;
	cout << "Введите цену за X кг конфет(A):"; cin >> A;
	cout << "Введите X кг:"; cin >> X;
	cout << "Введите Y кг:"; cin >> Y;
	A = A / X;
	cout << "Цена за 1 кг конфет:" << A;
	A = A * Y;
	cout << "Цена за Y кг конфет:" << A;

}




