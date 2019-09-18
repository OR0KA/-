//5. Даны два ненулевых числа.Найти сумму, разность, произведение и частное их модулей.

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int s, k;
	cin >> s >> k;
	cout << "Сумма модулей = " << abs(s)+abs(k) << endl ;
	cout << "Разность модулей = " << abs(s) - abs(k) << endl ;
	cout << "Произведение модулей = " << abs(s) * abs(k) << endl ;
	cout << "Частное модулей = " << abs(s) / abs(k) ;

}




