// 2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
// −1, если X < 0; 0, если X = 0; 1, если X > 0.
// С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.

#include <iostream>

using namespace std;

int Sign(double X)
{
	if (X < 0) return -1;
	else if (X == 0) return 0;
	else return 1;
}
int main()
{
	double a, b, c;
	cin >> a >> b;
	c = Sign(a) + Sign(b);
	cout << c;

}




