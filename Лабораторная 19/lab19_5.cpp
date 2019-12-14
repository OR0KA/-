// 5. Дана квадратная матрица A порядка M. Найти сумму элементов каждой ее диагонали, параллельной главной (начиная с одноэлементной диагонали).
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int i, j, M, f = 1, s = 0, d, k = 2;
	cout << "M= ";
	cin >> M;

	srand(time(NULL));
	int** a = new int* [M];
	for (i = 0; i < M; i++)
	{
		a[i] = new int[M];
		for (j = 0; j < M; j++)
		{
			a[i][j] = rand() % 21 - 10;
		}
	}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for ( i = 0; i < M; i++)
	{
		for ( d = i; d >= 0; d--)
		{
			s += a[d][M-f];
			f++;
		}
		cout << "s= " << s << endl;
		f = 1;
		s = 0;
	}

	f = 0;
	for (i = 1; i < M; i++)
	{
		d = i;
		for (j = 0; j <= M-k;j++)
		{
			s += a[d][j];
			d++;
		}
		cout << "s= " << s << endl;
		f = 0;
		s = 0;
		k++;
	}

}