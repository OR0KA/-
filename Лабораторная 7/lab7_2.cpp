// 2. Даны три целых числа: A, B, C. 
// Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = ((a < b) & (b < c));
	cout << d;

}