// 4. Дан текстовый файл. Заменить в нем все подряд идущие пробелы на один пробел.
//

#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream ofile;
	ifstream ifile;
	string a = "", file;

	cout << "Введите строку для файла: ";
	getline(cin, file);

	ofile.open("file.txt");
	ofile << file;
	ofile.close();

	char b;
	ifile.open("file.txt");
	while (!ifile.eof())
	{
		ifile.get(b);
		if (b == ' ')
		{
			while (b == ' ')
			{
				ifile.get(b);
			}
			a += ' ';
		}
		a += b;
	}
	ifile.close();

	ofile.open("file.txt");
	ofile << a;
	ofile.close();
}