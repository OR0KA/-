// 4. Дан массив размера N.
// Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей).
//

#include <iostream>

using namespace std;

int main()
{
	int N, k=0;
	cin >> N;

	int* g = new int[N];
	for (int i = 0; i < N; i++) cin >> g[i];

	if (g[0] > g[1]) k = 0;
	for (int i = 0; i < N-1; i++)
	{
		if (g[i] > g[i - 1] || g[i] > g[i + 1]) k = i;
	}
	if (g[N] > g[N - 1]) k = N;

	cout << k;
}




