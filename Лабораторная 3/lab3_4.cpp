// Найти значение функции y = 3x^6 - 6x^2 − 7 при данном значении x.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
	setlocale(LC_ALL, "rus");
		int x, y;
		cout << "y = 3x^6 - 6x^2 - 7" << endl;
	cout << "Введите x: "; cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "У =" << y;

}




