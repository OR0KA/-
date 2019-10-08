// 3. На плоскости расположены три точки: A, B, C. Определить, 
// какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double x1, y1, x2, y2, x3, y3, b, c;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	b = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

	if (b < c)
	{
		cout <<"b ближе" << endl << "AB= " << b;
	}
	else
	{
		if (c < b)
		{
			cout << "c ближе" << endl << "AC= " << c;
		}
		else {
			cout << "Расстояния равны";
		}
	}

}




