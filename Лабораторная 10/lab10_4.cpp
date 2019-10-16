// 4. Дано вещественное число A и целое число N (> 0).
// Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN
//

#include <iostream>

using namespace std;

int main()
{
	double a, k=0;
	int n, i;
	cin >> a >> n;
	for (i = 0; i <= n; i++) k += pow(a, i);
	
	cout << k;

}




