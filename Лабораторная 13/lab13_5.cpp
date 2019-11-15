// lab13_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int* g = new int[N];
	for (int i = 0; i < N; i++) g[i]=i;

	for (int i = 1; i < N; i += 2) cout << g[i] << endl;
	if (N % 2 != 0) for (int i = N - 1; i >= 0; i -= 2) cout << g[i] << endl;
	else for (int i = N-2; i >=0; i-=2) cout << g[i] << endl;
}