// 1. Даны массивы A и B одинакового размера N.
// Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N, t = 0;
	cout << "Введите размер массивов: "; cin >> N;

	int* a = new int[N];
	int* b = new int[N];

	cout << "Введите элементы массива а: " << endl;
	for (int i = 0; i < N; i++) cin >> a[i];

	cout << "Введите элементы массива b: " << endl;
	for (int i = 0; i < N; i++) cin >> b[i];

	for (int i = 0; i < N; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (int i = 0; i < N; i++) cout << a[i];
	cout << endl;
	for (int i = 0; i < N; i++) cout << b[i];
}