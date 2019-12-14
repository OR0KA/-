// 3. Дана матрица размера M × N (M и N — четные числа). Поменять местами левую верхнюю и правую нижнюю четверти матрицы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int i, j, M, N, y;
	int p, k = 2147483647, c = -2147483647;
	cout << "M(M%2=0)= ";
	cin >> M;
	cout << "N(N%2=0)= ";
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

	for (i = 0; i < M/2; i++)
	{
		for ( j = 0; j < N/2; j++)
		{
			swap(a[i][j], a[i+ M / 2][j+ N / 2]);
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