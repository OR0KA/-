// lab13_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	cout << "Введите N>0 :"; cin >> N;
	for (int i = 1; i < N; i += 2) cout << i << endl;
}