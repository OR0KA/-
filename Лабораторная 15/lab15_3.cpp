// lab15_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int N, c=0;
	cin >> N;

	int* a = new int[N];
	for (int i = 0; i < N; i++) cin >> a[i];

	for (int i = 0; i < N; i++) 
		if (a[i] % 2 != 0) c = a[i];
	
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 2 != 0) a[i] += c;
		cout << a[i] << endl;
	}
}