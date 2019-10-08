// 1. Даны две переменные целого типа: A и B. 
// Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, 
// то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, x;
	cin >> a >> b >> c;
	if ((a < b) & (a < c))
	{
		x = b + c;
		cout << x;
	}
	else
	{
		if ((b < a) & (b < c))
		{
			x = a + c;
			cout << x;
		}
		else
		{
			if ((c < a) & (c < b))
			{
				x = a + b;
				cout << x;
			}
			else
			{
				cout << "4isla ravni";
			}
		}
	}

}
