//Разбор дз
#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	double factorial = 1; //для хранения оочень болльших чисел
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << endl;
	}
	cout << endl;
#endif

#ifdef TASK_2
	double a;
	int n;
	double N = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a; //отправляем основание в знаменатель
		n = -n;    //меняем знак показателя на противоположный
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;    //будет хранить промежуточные результаты
	}
	cout << N << endl;

#endif

#ifdef TASK_3
	cout << "Таблица ASCII символов: \n";
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "\t";
	}
	cout << endl;
#endif
}