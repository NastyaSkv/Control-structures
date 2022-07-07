//1)По температуре определить: жарко или холодно;
//2) С клавиатуры вводится число : цель поражена / вы промахнулись;
//3) Калькулятор.
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

	cout << "Введите температуру воздуха: ";
	cin >> temp;

	if (!cin)
	{
		cout << "Error: no operation / Ошибка: нет операции" << endl;
		cin.clear();
		cin.ignore(100500, '\n');
	}
	else if (temp < 0)
	{
		cout << "На улице холодно" << endl;
	}
	else if (temp > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице 0 градусов" << endl;
	}
#endif

#if defined TASK_2
	int number;

	cout << "Введите число: ";
	cin >> number;

	if (!cin)
	{
		cout << "Error: no operation / Ошибка: нет операции" << endl;
		cin.clear();
		cin.ignore(100500, '\n');
	}
	else if (number >= 0 & number <= 10)
	{
		cout << "Цель поражена!" << endl;
	}
	else
	{
		cout << "Вы промахнулись!" << endl;
	}
#endif
#ifdef TASK_3

	float a, b;
	char w;
	cout << "Введите выражение без пробелов: ";
	cin >> a >> w >> b;
	cout << "Вы ввели: " << a << w << b << endl;

	if (w == '+')
	{
		cout << "Результат подсчёта: " << a << "+" << b << " = " << a + b << endl;
	}
	else if (w == '-')
	{
		cout << "Результат подсчёта: " << a << "-" << b << " = " << a - b << endl;
	}
	else if (w == '/' && b == 0)
	{
		cout << "На 0 делить нельзя!" << endl;
	}
	else if (w == '/')
	{
		cout << "Результат подсчёта: " << a << "/" << b << " = " << a / b << endl;
	}
	else if (w == '*')
	{
		cout << "Результат подсчёта: " << a << "*" << b << " = " << a * b << endl;
	}
	else
	{
		cout << "Error: no operations / Ошибка: нет операции" << endl;
	}
}
#endif // TASK_3