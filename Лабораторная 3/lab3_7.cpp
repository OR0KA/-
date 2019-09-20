// 7. Дано число A. Вычислить A^15, используя две вспомогательные переменные и пять операций умножения.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int A, m, n;
	cout << "Введите A: "; cin >> A;

	m = A * A;
	n = A * m;
	m = m * n;
	n = m * m;
	A = m * n;

	cout << "A^15 = " << A;

}




