﻿// 4. Дан массив размера N. После каждого отрицательного элемента массива вставить элемент с нулевым значением.
//

#include <iostream>

using namespace std;

int main()
{
	int N;
	int i = 0, k=0, c=0;
	cin >>  N;

	int* a = new int[N];
	for (i; i < N; i++) cin >> a[i];

	for (i = 0; i < N; i++) if (a[i] < 0) k++;

	int* b = new int[N + k];

	for (i = 0; i < N; i++)
	{
		
		if (a[i] < 0)
		{
			b[c+i] = a[i];
			c++;
			b[c+i] = 0;
		}
		else b[c+i] = a[i];
	}

	for (i = 0; i < N + k; i++) cout << b[i] << endl;
}