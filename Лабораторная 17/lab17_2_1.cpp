// lab17_2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N, L;
	int i = 0, k=1, v=0, d=0, f=0, j=0;
	cout << "N= ";
	cin >> N;
	cout << "L(>0)= ";
	cin >> L;

	int* a = new int[N];
	for (i; i < N; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}

	for ( i = 0; i < N-1; i++)
	{
		if (a[i] == a[i + 1]) k++;
		else
		{
			if (k <= L) v += k;
			else v++;
			k = 1;
		}
	}
	if (k <= L) v += k;
	else v++;
	k = 1;

	int* b = new int[v];
	int* c = new int[v];

	for (i; i < N - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			k++;
		}
		else if (k>L)
		{
			b[d] = d;
			c[d] = k;
			d += k;
			k = 1;
		}
	}

	for (i = 0; i < v; i++)
	{
		if ( i == b[i] )
		{
			b[i] = 0;
			
			f++;
		}
		else
		{
			b[i] = a[f];
			f++;
		}
		cout << "b["<<i<<"]= " <<b[i]<< endl;
	}
	
}