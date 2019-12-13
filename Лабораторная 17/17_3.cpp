// 3. Дано целое число K (> 0) и целочисленный массив размера N. Поменять местами последнюю серию массива и его серию с номером K
//

#include <iostream>

using namespace std;

int main()
{
	int N, K;
	int td = 1, g = 0, y = 0;
	cout << "N= "; cin >> N;
	cout << "K(>0)= "; cin >> K;

	K -= 1;
	int* a = new int[N];
	int* d = new int[N];
	int* c = new int[N];
	for (int i=0; i < N; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
		 d[i]=0;
		 c[i] = 0;
	}
	
	
	g = a[0];
	for (int i = 1; i <= N; i++)
	{
		if (a[i] == g && i != N)
		{
			td++;
		}
		else
		{
			d[y] = td;
			c[y] = g;
		
			g = a[i];
			y++;
			td = 1;
		}
		
	}
	
	int m = d[y - 1];
	d[y - 1]=d[K];
	d[K] = m;
	m=c[y - 1];
	c[y - 1] = c[K];
	c[K] = m;
	for (int i = 0; i <= y; i++)
	{
	 for (int j = 0; j < d[i]; j++)
		{
			cout << c[i];
		}
	}
}