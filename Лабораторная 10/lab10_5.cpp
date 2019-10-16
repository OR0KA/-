// Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 
//1 − A + A2 − A3 + . ..± AN .

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float A, r=0;
	int N;
	cin >> A >> N;
	for (int i = 0; i <= N; i++) {
		r =r+ pow(A, i) * pow(-1, i);
		}
	cout << r;
}




