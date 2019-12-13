// 5. Дана целочисленная матрица размера M × N. Найти номер первого из ее столбцов, содержащих только нечетные числа. Если таких столбцов нет, то вывести 0.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int i, j, M, N, y = 0;
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

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			if (a[j][i] % 2 != 0) y++;
		}
		if (y == M)
		{
			cout << "i= " << i+1 << endl;
			return 0;
		}
		y = 0;
	}
	cout << 0;
}