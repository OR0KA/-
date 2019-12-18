// 5. Даны строки S и S0. Найти количество вхождений строки S0 в строку S.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int k = 0;

	bool marker = true;

	string s = "", s0 = "";

	cout << "Введите строку s: ";
	getline(cin, s);
	cout << "Введите строку s0: ";
	getline(cin, s0);

	for (int i = 0; i < s.length(); i++)
	{
		marker = true;
		if (s[i] == s0[0])
		{
			for (int j = 1; j < s0.length(); j++)
			{
				if (s[i + j] != s0[j]) marker = false;
			}
			if (marker == true)
			{
				k++;
				i += s0.length() - 1;
			}
		}
	}

	cout << "Кол-во вхождений s0 в s: " << k;
}