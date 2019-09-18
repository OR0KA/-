//4. Даны два ненулевых числа.Найти сумму, разность, произведение и частное их квадратов.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a >> b;
	cout << "Сумма квадратов = " << pow(a, 2) + pow(b, 2)<< endl;
	cout << "Разность квадратов = " << pow(a, 2) - pow(b, 2) << endl;
	cout << "Произведение квадратов = " << pow(a, 2) * pow(b, 2) << endl;
	cout << "Частное квадратов = " << pow(a, 2) / pow(b, 2);
}




