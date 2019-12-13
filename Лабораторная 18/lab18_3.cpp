//3. Дана матрица размера M × N. Найти номер ее столбца с наименьшим произведением элементов и вывести данный номер, а также значение наименьшего произведения.
//

#include <iostream>

using namespace std;

int main()
{
	int i, j, M, N, k=2147483647, c = 0, p = 1;
	cout << "M= ";
	cin >> M;
	cout << "N= ";
	cin >> N;

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

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			p *= a[j][i];
		}
		if (p < k)
		{
			k = p;
			c = i;
		}
	}

	cout << c+1 << endl << k;
}