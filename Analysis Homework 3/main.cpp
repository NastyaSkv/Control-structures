//������ ��
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	double factorial = 1; //��� �������� ������ �������� �����
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << endl;
	}
	cout << endl;
}