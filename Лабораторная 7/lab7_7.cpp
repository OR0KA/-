// 7. Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	bool x;
	cin >> a >> b >> c;
	x = ((a < b + c) & (b < a + c) & (c < b + a));
	cout << x;


}
