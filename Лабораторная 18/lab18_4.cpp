// 4. Дана матрица размера M × N. В каждом ее столбце найти количество элементов, больших среднего арифметического всех элементов этого столбца.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int i, j, M, N, y=0;
	double p, k = 0, c = 0;
	cout << "M= ";
	cin >> M;
	cout << "N= ";
	cin >> N;

	srand(time(NULL));
	int** a = new int* [M];
	for (i = 0; i < M; i++)
	{
		a[i] = new int[N];
		for (j = 0; j < N; j++)
		{
			a[i][j] = rand() % 21-10;
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			c += a[j][i];
			k++;
		}
		p = c / k;
		for (j = 0; j < M; j++)
		{
			if (a[j][i] > p) y++;
		}
		cout << "p= " << p << endl;
		cout << i+1 << "=> " << y << endl;
		c = 0; k = 0; y = 0;
	}

	for ( i = 0; i < M; i++)
	{
		for ( j = 0; j < N; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}