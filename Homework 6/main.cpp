//Вывести фигуры из файла (2)

#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    int h, w, i, j;

    cout << "Введите высоту шахматной доски.\nh = ";
    cin >> h;
    cout << "Введите ширину шахматной доски.\nw = ";
    cin >> w;

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            ((j % 2 && i % 2) || (!(j % 2) && !(i % 2))) ? (cout << 'x') : (cout << '-');
        }
        cout << '\n';
    }
    cout << "\n\n\n";
}