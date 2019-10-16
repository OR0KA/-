// 6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK.
// Найти целое число K — порядковый номер числа Фибоначчи N.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, k = 2, fib = 0, fib1 = 1, fib2 = 1;
	cout << "Введите n: ";
	cin >> n;
	while (n > fib)
	{
		fib = fib1 + fib2;
		k += 1;
		if (n == fib) cout << "Порядковый номер заданного числа Фибоначчи - " << k;
		fib2 = fib1;
		fib1 = fib;
	}
	if (n < fib) cout << "Заданное число - не число Фибоначчи";

}
