// 3. Даны два текстовых файла. Добавить в начало первого файла содержимое второго файла
//

#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream ifile1, ifile2;
	ofstream ofile1, ofile2;
	string a, b, file1, file2;

	//ввод строк

	cout << "Введите строку для 1-го файла: ";
	getline(cin, file1);
	cout << "Введите строку для 2-го файла: ";
	getline(cin, file2);

	//ввод строки в 1-й текстовый файл

	ofile1.open("file1.txt");
	ofile1 << file1;
	ofile1.close();

	//ввод строки во 2-й текстовый файл

	ofile2.open("file2.txt");
	ofile2 << file2;
	ofile2.close();

	//копирование строки из 2 файла в переменную a

	ifile2.open("file2.txt");
	while (!ifile2.eof())
	{
		getline(ifile2, a);
	}
	ifile2.close();

	//копирование строки из 1 файла в переменную b

	ifile1.open("file1.txt");
	while (!ifile1.eof())
	{
		getline(ifile1, b);
	}
	ifile1.close();

	//последовательный ввод второй и первой строки(с заменой предыдущего текста)

	ofile1.open("file1.txt");
	ofile1 << a << b;
	ofile1.close();
}