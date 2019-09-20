// 2. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A,
//и вывести новые значения переменных A, B, C.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	A += B;//a = a+b
	B = A - B;//b = a+b-b = a
	A -= B;//a = a+b-a = b

	C += A;//c = c+b
	A = C - A;//a = c+b-b = c
	C -= A;// c = c+b - c= b
	
	cout << A << endl; cout << B << endl; cout << C;
}




