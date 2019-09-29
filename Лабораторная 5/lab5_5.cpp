// 5. Дано трехзначное число. 
//В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, melon;
	cout << "vvedite trehznachnoe chislo"; cin >> melon;
	b = melon % 10;
	a = melon / 10;
	melon = 100 * b + a;
	cout << melon;

}