//Разбор дз
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
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
}