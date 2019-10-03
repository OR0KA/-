// 6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника.
// Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	bool k;
	cin >> a >> b >> c;
	k = ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2)));
	cout << k;


}
