//Вывести фигуры из файла (1)

#include<iostream>
using namespace std;

#define SQUARE_0
#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4
#define RHOMBUS_5
#define SQUARE_6

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры:"; cin >> n;

#ifdef SQUARE_0
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	/*for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
#endif

#ifdef TRIANGLE_3
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " ";
		for (int j = i; j < n; j++)cout << "*";
		cout << endl;
	}


#endif

#ifdef TRIANGLE_4
	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 1; j--)
		{
			cout << " ";
		}

		for (int j = n; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif

#ifdef RHOMBUS_5
	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << " ";
		}
		cout << "/";

		for (int j = n; j > i; j--)
		{
			cout << "  ";
		}
		cout << "\\" << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout << "\\";

		for (int j = i; j < (n - 1); j++)
		{
			cout << "  ";
		}
		cout << "/" << endl;
	}
#endif
#ifdef SQUARE_6

	int t = n;
	for (int i = 0; i < t; i++)
	{
		int m = i % 2;
		n = t;
		if (m == 1)
		{
			do
			{
				for (int j = n; j >= n && j != 0; j--)
				{
					cout << "-";
				} n--;

				for (int j = n; j >= n && j != 0; j--)
				{
					cout << "+";
				} n--;
			} while (n > 0);
		}
		else if (m == 0)
		{
			do
			{
				for (int j = n; j >= n && j != 0; j--)
				{
					cout << "+";
				} n--;

				for (int j = n; j >= n && j != 0; j--)
				{
					cout << "-";
				} n--;
			} while (n > 0);
		}
		cout << endl;
	}
#endif
	/*	int counter = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				//if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
				//(i + j) % 2 == 0 ? cout << "+ ": cout << "- ";
				//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
				cout << ((i + j) % 2 ? "+ " : "- ");
			}
			cout << endl;

		}
		true;*/
}