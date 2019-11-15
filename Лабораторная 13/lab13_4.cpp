// lab13_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	cin >> N;

	int* hhh = new int[N];
	for (int i = 0; i < N; i++)
	{
		hhh[i] = i+1;
	}
	int j = N - 1;
	for (int i = 0; i < N/2; i++, j--)
	{
		cout << hhh[i]<<endl;
		cout << hhh[j]<<endl;
	}
	if (N % 2 != 0) cout << hhh[N / 2];
	
}