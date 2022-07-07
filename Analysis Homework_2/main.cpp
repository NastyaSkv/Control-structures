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
#define SHOOTER

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

#ifdef SHOOTER
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
}