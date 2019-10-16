﻿// 4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от 
// имеющейся суммы (P — вещественное число, 0 < P < 25). 
// По данному P определить, через сколько месяцев размер вклада превысит 1100 руб.,
// и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	double p, k = 0, s = 1000;
	cout << "Введите процент вклада: "; cin >> p;

	p *= 0.01;

	while (s <= 1100)
	{
		s += s * p;
		k += 1;
	}
	cout << "Месяцев прошло: " << k << ", сумма вклада: " << s;
}

