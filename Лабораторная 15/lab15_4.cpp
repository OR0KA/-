// 4. Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами 
// (не включая минимальный и максимальный элементы).
//

#include <iostream>

using namespace std;

int main()
{
	int N, t=0;
	cin >> N;

	int fmin = 0, fmax = 0;

	int* a = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
		if (a[i] < a[fmin]) fmin = i;
		if (a[i] > a[fmax]) fmax = i;
	}

	for (int i = 0; i < N; i++)
	{
		if ((a[i]<a[fmax] || a[i]>a[fmin]) && (fmin < fmax) && ((i > fmin) && (i < fmax))) a[i] = 0;
		if ((a[i]<a[fmax] || a[i]>a[fmin]) && (fmin > fmax) && ((i < fmin) && (i > fmax))) a[i] = 0;
		cout << a[i]<<endl;
	}
}