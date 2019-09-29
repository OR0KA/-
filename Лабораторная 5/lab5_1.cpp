//1. Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int x;
	cout << "Введите к-во байт: "; cin >> x;
	cout << "Размер файла в килобайтах =" << x / 1024;


}


