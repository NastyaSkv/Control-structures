//разбираем 1ю задачу про палиндром и 3ю - шутер

#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define Enter 13
#define Escape 27
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

//#define PALINDROM
//#define SHOOTER_1
#define SHOOTER_2


void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROM

	int number;// число введенное с клавиатуры
	int reverse = 0; //число, записанное наоборот
	cout << "Введенное число: "; cin >> number;
	int buffer = number; //создаем копию введенного числа, чтобы обеспечить неизменность 
	while (buffer)
	{
		reverse *= 10; //освобождаем младший разряд для сохранения следующей цифры
		reverse += buffer % 10;
		buffer /= 10;
	}

	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "обычное число" << endl;
	}
#endif

#ifdef SHOOTER_1
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UP_ARROW)             cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)      cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)      cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)     cout << "Вправо" << endl;
		else if (key == ' ')                                         cout << "Прыжок" << endl;
		else if (key == Enter)                                       cout << "Огонь" << endl;
		else if (key == Escape)                                      cout << "Выход" << endl;
		else if (key != -32)      cout << "Error: нет такого действия, см. инструкцию" << endl;
	} while (key != Escape);
#endif

#ifdef SHOOTER_2
	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		/*case UP_ARROW: cout << "Вперед" << endl; break;
		case 'w': cout << "Вперед" << endl; break;
		case 'W': cout << "Вперед" << endl; break;
		case DOWN_ARROW: cout << "Назад" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case 'S': cout << "Назад" << endl; break;
		case LEFT_ARROW: cout << "Влево" << endl; break;
		case 'a': cout << "Влево" << endl; break;
		case 'A': cout << "Влево" << endl; break;
		case RIGHT_ARROW: cout << "Вправо" << endl;break;
		case 'd': cout << "Вправо" << endl; break;
		case 'D': cout << "Вправо" << endl; break;*/
//этот код можно сократить:
		case 'w': case 'W': case UP_ARROW:   cout << "Вперед" << endl; break;
		case 's': case 'S': case DOWN_ARROW: cout << "Назад" << endl;  break;
		case 'a': case 'A': case LEFT_ARROW: cout << "Влево" << endl;  break;
		case 'd': case 'D': case RIGHT_ARROW:cout << "Вправо" << endl; break;
		
		case ' ': cout << "Прыг-скок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape: cout << "Выход" << endl;     //т.к. у стрелочек по 2 возвр знач.
		case -32: break;                          //т.к. у стрелочек по 2 возвр знач.
		default: cout << "Error" << endl;
		}

	} while (key != Escape); //условие выхода из программы
#endif
}

