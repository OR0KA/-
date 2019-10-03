// 1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3».
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	bool c;
	cin >> a >> b;
	c = ((a > 2) & ((b < 3) || (b == 3)));
	cout << c;
	
}




