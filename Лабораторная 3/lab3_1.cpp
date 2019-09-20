// 1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, c;
	cin >> A >> B >> c;

	c = A;
	A = B;
	B = c;
	
	cout << A << endl;
	cout << B;
}




