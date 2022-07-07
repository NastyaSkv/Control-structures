//1) Таблица умножения;
//2) Таблица Пифагора.

#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef TASK_1
	int m, t, r;
	cout << "Введите верхнюю и нижнюю границы таблицы умножения:" << endl; cin >> t >> r;

	for (int i = 1; i <= t; i++)
	{
		for (int k = 1; k <= r; k++)
		{
			m = i * k;
			cout << k << "*" << i << "=" << m << "\t";
		}
		cout << endl;
	}
#endif

#ifdef TASK_2
	int y;
	cout << "\t";
	for (int b = 1; b <= 10; b++)
	{
		cout << b << "\t";
	}
	cout << endl;
	for (int b = 1; b <= 10; b++)
		cout << "---------";
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << endl;
		if (i < 10)cout << " ";
		cout << i << " |\t";
		for (int k = 1; k <= 10; k++)
		{
			y = i * k;
			cout << y << "\t";
		}
	}
#endif
}