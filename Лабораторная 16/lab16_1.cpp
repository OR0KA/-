// 1. Дан целочисленный массив размера N. Удалить из массива все соседние одинаковые элементы, оставив их первые вхождения.
//

#include <iostream>

using namespace std;

int main()
{ 
	
	int i, N, j = 0;
	cin >> N;

	int* a = new int[N];
	for (i = 0; i < N; i++) cin >> a[i];

	int* b = new int[N];

	for (i = 0; i < N; i++)
	{
		if (a[i] != a[i + 1])
		{
			b[j] = a[i];
			j++;
		}
	}

	for (i = 0; i < j; i++) cout << b[i] << endl;
}