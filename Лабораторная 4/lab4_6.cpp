// 6. Найти решение системы линейных уравнений вида
//A1·x + B1·y = C1,
//A2·x + B2·y = C2,
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a1, b1, c1, a2, b2, c2, x, y, q, q1, q2;
	cin >> a1>>b1>>c1>>a2>>b2>>c2;
	q = a1 * b2 - a2 * b1;
	q1 = b2 * c1 - b1 * c2;
	q2 = a1 * c2 - a2 * c1;
	x = q1 / q;
	y = q2 / q;
	cout<<"x= " <<x<<endl << "y= " << y ;



}




