//1)�� ����������� ����������: ����� ��� �������;
//2) � ���������� �������� ����� : ���� �������� / �� ������������;
//3) �����������.
#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
	int temp = 0;

	cout << "������� ����������� �������: ";
	cin >> temp;

	if (!cin)
	{
		cout << "Error: no operation / ������: ��� ��������" << endl;
		cin.clear();
		cin.ignore(100500, '\n');
	}
	else if (temp < 0)
	{
		cout << "�� ����� �������" << endl;
	}
	else if (temp > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� 0 ��������" << endl;
	}
#endif

#if defined TASK_2
	int number;

	cout << "������� �����: ";
	cin >> number;

	if (!cin)
	{
		cout << "Error: no operation / ������: ��� ��������" << endl;
		cin.clear();
		cin.ignore(100500, '\n');
	}
	else if (number >= 0 & number <= 10)
	{
		cout << "���� ��������!" << endl;
	}
	else
	{
		cout << "�� ������������!" << endl;
	}
#endif
#ifdef TASK_3

	float a, b;
	char w;
	cout << "������� ��������� ��� ��������: ";
	cin >> a >> w >> b;
	cout << "�� �����: " << a << w << b << endl;

	if (w == '+')
	{
		cout << "��������� ��������: " << a << "+" << b << " = " << a + b << endl;
	}
	else if (w == '-')
	{
		cout << "��������� ��������: " << a << "-" << b << " = " << a - b << endl;
	}
	else if (w == '/' && b == 0)
	{
		cout << "�� 0 ������ ������!" << endl;
	}
	else if (w == '/')
	{
		cout << "��������� ��������: " << a << "/" << b << " = " << a / b << endl;
	}
	else if (w == '*')
	{
		cout << "��������� ��������: " << a << "*" << b << " = " << a * b << endl;
	}
	else
	{
		cout << "Error: no operations / ������: ��� ��������" << endl;
	}
}
#endif // TASK_3