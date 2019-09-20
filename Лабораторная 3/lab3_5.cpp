// 5. Найти значение функции y = 4(x-3)^6 − 7(x-3)^3 + 2 при данном значении x.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "y = 4(x-3)^6 - 7(x-3)^3 + 2" << endl;
	cout << "Введите x: "; cin >> x;
	y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
	cout << "У =" << y;
}




