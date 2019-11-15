// lab13_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N, A, B, c;
	cout << "Введите N >2: "; cin >> N;
	cout << "Введите A: "; cin >> A;
	cout << "Введите B: "; cin >> B;

	int* sasa = new int[N];

	sasa[0] = A; sasa[1] = B; c = A + B;

	for (int i = 2; i < N; i++)
	{
		sasa[i] = c;
		c += c;
	}
	for (int f = 0; f < N; f++) cout << sasa[f] << endl;
}