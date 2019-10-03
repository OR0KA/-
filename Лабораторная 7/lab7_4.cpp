// 4. Дано трехзначное число. Проверить истинность высказывания:
// «Цифры данного числа образуют возрастающую или убывающую последовательность».
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int x, a, b, c;
	bool k;
	cin >> x;
	a = x / 100;
	b = (x / 10) % 10;
	c = x % 10;
	k = (((a < b) & (b<c)) || ((c<b) & (b<a)));
	cout << k;


}
