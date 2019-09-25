// 4. Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км.
// Определить расстояние между ними через T часов,если автомобили удаляются друг от друга.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double V1, V2, S, t;
	cout << "Введите v1:"; cin >> V1;
	cout << "Введите v2:"; cin >> V2;
	cout << "Введите t:"; cin >> t;
	S = V1 * t + V2 * t;
	cout << "Расстояние  S = " << S;
}




