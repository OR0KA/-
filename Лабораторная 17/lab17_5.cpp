// 5. Дано множество A из N точек (N > 2, точки заданы своими координатами x, y). Найти наибольший периметр треугольника, вершины которого принадлежат различным точкам множества A,
// и сами эти точки (точки выводятся в том же порядке, в котором они перечислены при задании множества A).
//

#include <iostream>
using namespace std;
int main()
{
	int N;
	double a = 0, b = 0, c = 0, P = 0, xi, yi, xj, yj, xh, yh;
	cout << "N(N>2)= ";
	cin >> N;


	int* x = new int[N];
	int* y = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "x[" << i + 1 << "] = ";
		cin >> x[i];
		cout << "y[" << i + 1 << "] = ";
		cin >> y[i];
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int h = i + 2; h < N; h++)
			{
				a = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
				b = sqrt(pow(x[i] - x[h], 2) + pow(y[i] - y[h], 2));
				c = sqrt(pow(x[j] - x[h], 2) + pow(y[j] - y[h], 2));


				if (a < b + c && b < a + c && c < a + b && a + b + c > P)
				{
					P = a + b + c;
					xi = x[i];
					yi = y[i];
					xj = x[j];
					yj = y[j];
					xh = x[h];
					yh = y[h];
				}
			}
		}
	}

	cout << "P= " << P << endl;
	cout << "a (" << xi << ", " << yi << ")" << endl;
	cout << "b (" << xj << ", " << yj << ")" << endl;
	cout << "c (" << xh << ", " << yh << ")" << endl;
}