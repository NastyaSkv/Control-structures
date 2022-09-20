// 1. При помощи цикла for вывести на экран ряд Фибоначчи до указанного предела;
// 2. При помощи цикла for вывести на экран заданное количество чисел из ряда Фибоначчи;
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int limit;
	cout << "Введите предел: "; cin >> limit;
	for (int x = 0, y = 0, z = 0; x < limit; )
	{

		x = y + z;
		z = y;
		y = x;
		if (x > limit)break;
		else if (x == 0)y++;
		else if (x == 1)cout << x << "\t";
		cout << x << "\t";
	}

	cout << endl << endl << "Введите количество: "; cin >> limit;
	for (int x = 0, y = 0, z = 0, i = 0; i < limit; i++)
	{
		x = y + z;
		z = y;
		y = x;
		if (x == 0)y++;
		else if (x == 1)cout << x << "\t", i++;
		cout << x << "\t";
	}
}