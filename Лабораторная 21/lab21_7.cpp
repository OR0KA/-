// 7. Дана строка-предложение. Зашифровать ее, поместив вначале все символы,
// расположенные на четных позициях строки, а затем, в обратном, все символы, расположенные на нечетных позициях (например, строка «Программа» превратится в «ргамамроП»).
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(0, "");
	int k = 1;
	string s = "";
	cout << "Введите предложение: ";
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (i % 2 == 0) cout << s[i];
	}

	for (int i = s.length() - 1; i > 0; i--)
	{
		if (i % 2 != 0) cout << s[i];
	}
}