//1) Через for найти факториал числа;
//2) Через for возвести число в степень;
//3) Вывести на экран таблицу с ASCII кодом.

#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	int chislo;
	int factorial = 1;

	cout << "Введите целое положительное число: "; cin >> chislo;
	for (int i = 1; i <= chislo; i++)
	{
		factorial = factorial * i;
	}
	cout << "Факториал числа " << chislo << " = " << factorial << endl;
#endif

#ifdef TASK_2
	int osn;
	int step;
	int n = 1;
	cout << "Введите основание: "; cin >> osn;
	cout << "Введите показатель степени: "; cin >> step;
	for (int i = 0; i < step; i++)
	{
		n = n * osn;
	}
	cout << "\n" << osn << " в степени " << step << " = " << n << endl;
#endif

#ifdef TASK_3

	for (int i = 0; i < 256; i++)
	{
		/*int m;
		m = i % 16;*/
		//char k;
		//k = i;
		if ((i % 16 == 0)/* && (i>0)*/)
		{
			cout << "\n";
		}
		cout << (char)i << " ";
	}
#endif
}