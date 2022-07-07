//1) Определение палиндрома;
//2) Счастливый автобусный билет;
//3) 3D shooter.

#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
	int x, a, b, c, d;
	do
	{
		cout << "Введите целое положительное число: " << endl;   cin >> x;

		if (x > 0 && x <= 9)
		{
			cout << "Число является однозначным палиндромом!\n" << endl;
		}

		else if (x >= 10 && x <= 99)
		{
			a = x / 10;
			b = x % 10;
			if (a == b)
			{
				cout << " Число является палиндромом!\n" << endl;
			}
			else
			{
				cout << " Не палиндром :(\n" << endl;
			}
		}

		else if (x >= 100 && x <= 999)
		{
			a = x / 100;
			c = x % 10;
			if (a == c)
			{
				cout << " Число является палиндромом!\n" << endl;
			}
			else
			{
				cout << " Не палиндром :(\n" << endl;
			}
		}

		else if (x >= 1000 && x <= 9999)
		{
			a = x / 1000;
			b = x / 100 % 10;
			c = x / 10 % 10;
			d = x % 10;

			if (a == d && b == c)
			{
				cout << " Число является палиндромом!\n" << endl;
			}
			else
			{
				cout << " Не палиндром :(\n" << endl;
			}
		}

		else if (x >= 10000 && x <= 99999)
		{
			a = x / 10000;
			b = x / 1000 % 10;
			c = x / 10 % 10;
			d = x % 10;

			if (a == d && b == c)
			{
				cout << " Число является палиндромом!\n" << endl;
			}
			else
			{
				cout << " Не палиндром :(\n" << endl;
			}
		}

		else
		{
			cout << "Error: no operation.\n" << endl;
		}

	} while (true);
#endif

#if defined TASK_2
	char a, b, c, d, m, t;
	do
	{
		cout << "Введите шестизначный номер автобусного билета: ";
		cin >> a >> b >> c >> d >> m >> t;

		a -= 48;
		b -= 48;
		c -= 48;
		d -= 48;
		m -= 48;
		t -= 48;

		//if (a == t && b == d && c == m || a == b == c == d == m == t)
		if (a + b + c == d + m + t)
		{
			cout << " У Вас счастливый билет!\n" << endl;
		}
		else
		{
			cout << " У Вас обычный билет :(\n" << endl;
		}
	} while (true);
#endif

#if defined TASK_3
	char y;
	cout << " - - - - 3D SHOOTER - - - - \n" << endl;
	do
	{
		cout << "Нажмите клавишу для определения ваших действий" << endl; //cin >> y;
		y = _getch();
		// cout << (int)y << "\t" << y << endl;
		if (y == 'w')
		{
			cout << "  \< \< Клавиша w - вперед \> \>\n" << endl;
		}
		else if (y == 's')
		{
			cout << "  \< \< Клавиша s - назад \> \>\n" << endl;
		}
		else if ((int)y == 'a')
		{
			cout << "  \< \< Клавиша a - влево \> \>\n" << endl;
		}
		else if ((int)y == 'd')
		{
			cout << "  \< \< Клавиша d - вправо \> \>\n" << endl;
		}
		else if ((int)y == ' ' || (int)y == 8)
		{
			cout << "  \< \< Клавиша Space - прыжок \> \>\n" << endl;
		}
		else if ((int)y == 13)
		{
			cout << "  \< \< Клавиша Enter - огонь \> \>\n" << endl;
		}
		else
		{
			cout << "Ваше действие не определено\n" << endl;
		}
	} while (y != Escape);
#endif
}