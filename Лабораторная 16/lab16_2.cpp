// 2. Дан целочисленный массив размера N. 
// Удалить из массива все элементы, встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int N, h=0;
	int k = 0;
	cout << "Введите размер массива: ";
	cin >> N;

	int* a = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}

	int* b = new int[N];
	int* c = new int[N];
	
	for (int i = 0; i < N ; i++)
	{
		k = 0;
		for (int j = 0; j < N; j++)
		{
			
	 		if (a[i] == a[j])
			{
				k++;
			}
			
		}
		if (k != 2)
		{
			c[h] = a[i];
			h++;
		}
	}
	cout << "Новый размер массива: " << h<<endl;
	for (int i = 0; i < h; i++)
	{
		cout << "Новый элемент массива: " << c[i] << endl;
	}
}