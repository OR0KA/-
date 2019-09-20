// 6. Дано число A. Вычислить A^8 , используя вспомогательную переменную и три операции умножения.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int A, k;
	cout << "Введите A: "; cin >> A;
	k = 1;
	k = A * k;
	k = A * k;
	k = A * k;
	A = pow(A, k);

	cout << "A^8 = " << A;
	//cout << k;


}

































































































