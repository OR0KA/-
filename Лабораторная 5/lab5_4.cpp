// 4. Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, melon;
	cout << "vvedite dvuznachnoe chislo"; cin >> melon;
	b = melon % 10;
	a = melon / 10;
	melon = 10 * b + a;
	cout << melon;

}