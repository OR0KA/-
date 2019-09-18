// Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь
// x1 y1 x2 y2 x3 y3
// 0  1  2  3  4  5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m[6], d1, d2, d3, P, S;
	for (int i = 0; i <= 5; i++) cin >> m[i];
	d1 = sqrt(pow(m[2] - m[0], 2) + pow(m[3] - m[1], 2));
	d2 = sqrt(pow(m[2] - m[4], 2) + pow(m[3] - m[5], 2));
	d3 = sqrt(pow(m[4] - m[0], 2) + pow(m[5] - m[1], 2));
	P = d1 + d2 + d3;
	S = sqrt(P / 2 * (P / 2 - d1) * (P / 2 - d2) * (P / 2 - d3));
	cout << P << endl << S;
}




