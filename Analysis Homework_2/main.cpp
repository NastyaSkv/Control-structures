//��������� 1� ������ ��� ��������� � 3� - �����

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

	int number;// ����� ��������� � ����������
	int reverse = 0; //�����, ���������� ��������
	cout << "��������� �����: "; cin >> number;
	int buffer = number; //������� ����� ���������� �����, ����� ���������� ������������ 
	while (buffer)
	{
		reverse *= 10; //����������� ������� ������ ��� ���������� ��������� �����
		reverse += buffer % 10;
		buffer /= 10;
	}

	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
#endif

#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UP_ARROW)             cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)      cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)      cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)     cout << "������" << endl;
		else if (key == ' ')                                         cout << "������" << endl;
		else if (key == Enter)                                       cout << "�����" << endl;
		else if (key == Escape)                                      cout << "�����" << endl;
		else if (key != -32)      cout << "Error: ��� ������ ��������, ��. ����������" << endl;
	} while (key != Escape);
#endif
}