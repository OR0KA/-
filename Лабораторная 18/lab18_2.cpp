// 2. Дана матрица размера M × N и целое число K (1 ≤ K ≤ M). Найти сумму и произведение элементов K-й строки данной матрицы.
#include <iostream>

using namespace std;

int main()
{
	int i, j, M, N, k, c=0, p=1;
	cout << "M= ";
	cin >> M;
	cout << "N= ";
	cin >> N;
	cout << "k (1<= k <= M)= ";
	cin >> k;

	k -= 1;
	int** a = new int* [M];
	for (i = 0; i < M; i++)
	{
		a[i] = new int[N];
		for (j = 0; j < N; j++)
		{
			cout << endl << "a[" << i + 1 << "][" << j + 1 << "]= ";
			cin >> a[i][j];
		}
	}

	for (j = 0; j < N; j++)
	{
		c += a[k][j];
		p *= a[k][j];
	}
	 
	cout << c << endl << p;
}