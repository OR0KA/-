// 1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m[4], d;
	for (int i = 0; i < 4; i++) cin >> m[i];
	d = sqrt(pow(m[2] - m[0], 2) + pow(m[3] - m[1], 2));
	cout << d;
}




