// 1. Дана матрица размера M × N. Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int i, j, M, N, y;
	int p, k = 2147483647, c = -2147483647;
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
			a[i][j] = rand() % 21 - 10;
		}
	}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] < k)
			{
				k = a[i][j];
				y = j;
			}
			if (a[i][j] > c)
			{
				c = a[i][j];
				p = j;
			}
		}
		swap(a[i][y], a[i][p]);
		k = 2147483647;
		c = -2147483647;
	}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}