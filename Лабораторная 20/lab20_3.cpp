// 3. Дана строка. Подсчитать количество содержащихся в ней прописных латинских букв.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "");
	int k = 0;
	string line;
	cout << "Введите строку: ";
	getline(cin, line);

	for (int i = 0; i < line.length(); i++)
	{
		if (islower(line[i])) k++;
	}
	cout << "k= " << k;
}