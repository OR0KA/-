// lab15_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int N, c=0;
	double t = 0;
	cin >> N;
	
	int* a = new int[N];
	for (int i = 0; i < N; i++) cin >> a[i];

	double* b = new double[N];
	for (int i = 0; i < N; i++)
	{
		c++;
		t += a[i];
		b[i] = t / c;
		cout << b[i] << endl;
	}
}




