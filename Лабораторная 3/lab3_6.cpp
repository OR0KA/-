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

	k=A*A;
	A=k*k;
	k=A*k;
	
	cout << "A^8 = " << A;


}

































































































