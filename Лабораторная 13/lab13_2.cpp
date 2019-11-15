// lab13_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N, A, D;
	cout << "Введите N>1 :"; cin >> N;
	cout << "Введите A>1 :"; cin >> A;
	cout << "Введите D>1 :"; cin >>D;
	for (int i = 0; i < N; i++) cout << A* pow(D, i)<< endl;
	
}