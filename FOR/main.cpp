//FOR
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//for(counter; condition; expression)

	//напишем бесконечный for
	/*for (;;)
	{
		cout << "Hello";
	}*/

	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}