// 1. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N).
// Найти среднее арифметическое элементов массива с номерами от K до L включительно.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N, K, L, M=1, F, v = 0;
	cout << "Введите N "; cin >> N;
	cout << "Введите L (<=N) "; cin >> L;
	cout << "Введите K (1<=K<=L) "; cin >> K;
	
	int* g = new int[N];
	for (int i = K; i <= L; i++)
	{
		g[i] = i;
		M += g[i];
		v++;
	}
	 
	F = M / v;
	cout << F;
}