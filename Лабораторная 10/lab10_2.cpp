// 2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	double pr = 1, i;
	int n;
	cout << "Введите n (n > 0): ";
	cin >> n;
	for (i = 1.1; i <= n; i += 0.1) pr *= i;
	cout << "Произведение сомножителей = " << pr;
}




