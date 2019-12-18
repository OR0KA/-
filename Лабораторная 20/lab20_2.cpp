//  2. Дана непустая строка S. Вывести строку, содержащую символы строки S, между которыми вставлено по одному пробелу.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string s;
	cout << "Введите строку: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) cout << s[i] << " ";
}