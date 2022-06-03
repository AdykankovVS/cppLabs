#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
    int x, k;

    setlocale(LC_ALL, "Russian_Russia.1251");

    cout << "x = "; cin >> x;

    if (x < 10) k = x;
    else k = x % 10;

    if (k == 4 || k == 9) cout << "Последня цифра - квадрат" << endl;
    else cout << "Последняя цифра - не квадрат" << endl;

    return (0);
}