// 2. Дано имя файла и целые положительные числа N и K. Создать текстовый файл с указанным именем и записать в него N строк, каждая из которых состоит из K символов «*» (звездочка).
//

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream ofile;
	string file;
	int n, k;

	cout << "Введите имя файла: ";
	getline(cin, file);
	file += ".txt";
	ofile.open(file);

	cout << "Введите n, k: ";
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			ofile << "*";
		}
		ofile << "\n";
	}

	ofile.close();
}