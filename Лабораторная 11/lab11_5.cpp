//5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите a и b: " << endl;
	cin >> a >> b;
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	cout << "НОД: " << a;
}


