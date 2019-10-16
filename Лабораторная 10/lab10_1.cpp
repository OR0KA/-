// 1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	double x, i;
	cout << "Введице цену 1кг конфет: ";
	cin >> x;
	for (i = 0.1; i <= 1; i += 0.1) cout << "Цена " << i << " кг : " << i * x << endl;
}




