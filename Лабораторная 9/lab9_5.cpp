// 5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, 
// обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят 
// названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.
// По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	string str;
	cout << "Введите год: ";
	cin >> a;

	a -= 4;
	b = a % 60 % 12;
	c = a % 12;

	switch (b)
	{
	case 0:
		if (c == 2 || c == 3 || c == 4) str += " год зелёного ";
		else str += "год зелёной ";
		break;
	case 1:
		if (c == 2 || c == 3 || c == 4) str += " год красного ";
		else str += "год красной ";
		break;
	case 2:
		if (c == 2 || c == 3 || c == 4) str += " год жёлтого";
		else str += "год жёлтой ";
		break;
	case 3:
		if (c == 2 || c == 3 || c == 4) str += " год белого ";
		else str += "год белой ";
		break;
	case 4:
		if (c == 2 || c == 3 || c == 4) str += " год чёрного ";
		else str += "год чёрной ";
		break;
	}
	switch (c)
	{
	case 0:
		str += " крысы "; break;
	case 1:
		str += " коровы "; break;
	case 2:
		str += " тигра "; break;
	case 3:
		str += " зайца "; break;
	case 4:
		str += " дракона "; break;
	case 5:
		str += " змеи "; break;
	case 6:
		str += " лошади "; break;
	case 7:
		str += " овцы "; break;
	case 8:
		str += " обезьяны "; break;
	case 9:
		str += " курицы "; break;
	case 10:
		str += " собаки "; break;
	case 11:
		str += " свиньи "; break;
	}
	cout << str;
}



