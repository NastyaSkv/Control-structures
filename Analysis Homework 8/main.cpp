//разбор дз с ‘ибоначчи от 20.09
#include<iostream>
using namespace std;

void main()
{ 
	//1й вариант
	/*int n;
	cout << "¬ведите предельное число"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;*/

	//2й вариант
	int n;
	cout << "¬ведите количество членов р€да"; cin >> n;
	for (int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
	{
		cout << a << "\t";
	}
	cout << endl;
}