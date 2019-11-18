// 3. Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6...
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	int N, i;
	int k = 2147483647;

	cin >> N;

	int* A = new int[N];

	for ( i = 0; i < N; i++) cin >> A[i];

	for (i = 1; i < N; i+=2)
	{
		if (k > A[i]) k = A[i];
	}

	cout << k;
}




