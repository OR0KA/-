// lab18_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int i, j, M;
	cout << "M (M%2 = 1)= ";
	cin >> M;

	int N = M / 2;
	int** a = new int* [M];
	for (i = 0; i < M; i++)
	{
		a[i] = new int[M];
		for (j = 0; j < M; j++)
		{
			cout << endl << "a[" << i + 1 << "][" << j + 1 << "]= ";
			cin >> a[i][j];
		}
	}

	int** b = new int* [M];
	for (i = 0; i < M; i++)
	{
		b[i] = new int[M];
	}
	int Mi = M - 1;
	int Mj = M - 1;

	for (int k = 0; k < N; k++)
	{
		for (i = 0; i < Mi; i++)
		{
			j = 0;
			cout << a[i][j] << endl;
		}
		for (j = 0; j < Mj; j++) cout << a[i][j] << endl;
		for (i; i > 0; i--) cout << a[i][j] << endl;
		for (j; j > 0; j--) cout << a[i][j] << endl;

		for (i = 1; i < Mi; i++)
		{
			for (j = 1; j < Mj; j++) b[i - 1][j - 1] = a[i][j];
		}
		Mi -= 2;
		Mj -= 2;
		a = b;
	}
	cout << a[0][0] << endl;
}