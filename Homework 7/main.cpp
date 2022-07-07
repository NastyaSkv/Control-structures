//Вывести фигуры из файла (3)

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				int z = 0;
				for (int j = 0; j < n; j++)
				{
					if (z % 2 == 0)
					{
						for (int j = 0; j < n; j++) cout << "* ";
					}
					else
					{
						for (int j = 0; j < n; j++) cout << "  ";
					} z = z + 1;
				} cout << endl;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				int z = 1;
				for (int j = 0; j < n; j++)
				{
					if (z % 2 == 0)
					{
						for (int j = 0; j < n; j++) cout << "* ";
					}
					else
					{
						for (int j = 0; j < n; j++) cout << "  ";
					} z = z + 1;
				} cout << endl;
			}
		}
	}
}