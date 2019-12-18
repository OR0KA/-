// 5. Дан текстовый файл. Найти количество абзацев в тексте, если первая строка каждого абзаца начинается с 5 пробелов («красная строка»). Пустые строки между абзацами не учитывать.
//

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream ifile;
	char b;
	int k = 0, n = 0;
	bool marker = true;

	ifile.open("file.txt");
	ifile.get(b);
	if (b == ' ')
	{
		while (b == ' ')
		{
			k++;
			ifile.get(b);
		}
		if (k == 5) n++;
		k = 0;
	}
	else if (b == '\n')
	{
		ifile.get(b);
		while (b == ' ')
		{
			k++;
			ifile.get(b);
		}
		if (k == 5) n++;
		k = 0;
	}
	
	while (!ifile.eof())
	{
		ifile.get(b);
		if (b == '\n')
		{
			ifile.get(b);
			while (b == ' ')
			{
				k++;
				ifile.get(b);
			}
			if (k == 5) n++;
			k = 0;
		}

	}
	ifile.close();
	cout << "Кол-во абзацев в тексте: " << n;
}