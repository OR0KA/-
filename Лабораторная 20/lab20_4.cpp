// 4. Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{
	setlocale(0, "");
	char C;
	string k;
	cout << "Введите строку: ";
	getline(cin, k);
	cout << "Введите символ: "; 
	cin >> C;

	for (int i = 0; i < k.length(); i++)
	{
		if (k[i] == C)
		{
			cout << k[i] << k[i];
		}
		else cout << k[i];
	}
}