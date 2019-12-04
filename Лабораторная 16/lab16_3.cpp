// 3. Дан массив размера N. 
// Вставить элемент с нулевым значением перед минимальным и после максимального элемента массива.
//

#include <iostream>

using namespace std;

int main()
{
	int N, i = 0;
	cin >> N;

	int min = 2147483647, max = -2147483647, d=0, g=0;

	int* a = new int[N];
	for (int i = 0; i < N; i++) cin >> a[i];

	for (int i = 0; i < N; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			d = i;
		}
		if (max < a[i])
		{
			max = a[i];
			g = i;
		}
	}

	int* b = new int[N + 2];

	if (d < g)
	{
		for ( i = 0; i < d; i++) b[i] = a[i];
		b[i] = 0;
		b[i + 1] = a[i];
		i++;
		for (i; i <= g; i++) b[i + 1] = a[i];
		b[i + 1] = 0;
		for (i; i < N; i++) b[i + 2] = a[i];
	}
	else if (d > g)
	{
		for (i=0; i <= g; i++) b[i] = a[i];
		b[i] = 0;
		for ( i ; i < d; i++) b[i+1] = a[i];
		b[i+1] = 0;
		b[i+ 2] = a[i];
		i++;
		for (i; i < N; i++) b[i + 2] = a[i];
	}
		for (i=0;i<N+2;i++) cout << b[i] << endl;
}