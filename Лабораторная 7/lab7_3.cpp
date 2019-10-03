//3. Дано целое положительное число. Проверить истинность высказывания: 
// «Данное число является четным двузначным».
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int x;
	bool k;
	cin >> x;
	k = ((x % 2 == 0) & (x / 10 != 0));
	cout << k;


}

