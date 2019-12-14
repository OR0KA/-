// 4. Дана матрица размера M × N. Упорядочить ее строки так, чтобы их первые элементы образовывали возрастающую последовательность.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int i, j, M, N, k;
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

	for (i = 0; i < M-1; i++)
	{
		for (j = i+1; j < M; j++)
		{
			if (a[i][0] > a[j][0])
			{
				for (k = 0; k < N; k++)
				{
					swap(a[i][k], a[j][k]);
				}
			}
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
}