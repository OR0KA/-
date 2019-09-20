// 3. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A,
//и вывести новые значения переменных A, B, C.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	A += C;//a = a+c
	C = A - C;//c = a+c-c = a
	A -= C;//a = a+c-a = c

	C += B;//c = a+b
	B = C - B;//b = a+b-b = a
	C -= B;//c = a+b-a= b

	cout << A << B << C;
}




