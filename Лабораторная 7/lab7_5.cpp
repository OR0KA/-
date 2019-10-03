// 5. Дано четырехзначное число. 
// Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int x, a, b, c;
	bool k;
	cout << "Введите четырёхзначное число: "; cin >> x;
	c = x % 10;
	a = x / 100;
	b = (x / 10) % 10;
	k = (a == (c * 10 + b));
	cout << k;


}
