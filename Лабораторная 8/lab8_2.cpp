// 2. Даны три числа. Найти сумму двух наибольших из них.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, S;
	cin >> a >> b >> c;
	if ((a <= b) & (a <= c))
	{
		S = b + c;
		cout << S;
	}
	else
	{
		if ((b <= a) & (b <= c))
		{
			S = a + c;
			cout << S;
		}
		else
		{
			if ((c <= a) & (c <= b))
			{
				S = a + b;
				cout << S;
			}
		}
	}
	
}
