// 4. Дано множество A из N точек (точки заданы своими координатами x, y).
// Среди всех точек этого множества, лежащих во второй четверти, найти точку, наиболее удаленную от начала координат. Если таких точек нет, то вывести точку с нулевыми координатами.
//

#include <iostream>

using namespace std;

int main()
{
	int N;
	double xx = 0, yy = 0;
	cout << "N= "; cin >> N;

	double* x = new double[N];
	double* y = new double[N];
	for (int i = 0; i < N; i++)
	{
		cout << "x"<< i+1 << "=";
		cin >> x[i];
		cout << "y" << i + 1 << "=";
		cin >> y[i];
	}
	
	for (int i = 0; i < N; i++)
	{
		if (x[i]<0 && y[i]>0)
			if (x[i] <= xx && y[i] >= yy)
			{
				xx = x[i];
				yy = y[i];
			}
	}

	cout << endl << "x= " << xx << endl << "y= " << yy;
}



