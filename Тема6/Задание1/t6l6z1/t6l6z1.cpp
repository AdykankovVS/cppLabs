#include <iostream>
#include <conio.h>

using namespace std;

void vvod(int a[], int n);

void ravn(int n, int a[], int k, int l);


int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int k = -1;
    int l = 0;
    int a[20];
    int n;

    cout << "Введите колличество элементов массива - "; cin >> n;

    vvod(a, n);

    ravn(n, a, k, l);

    if (k == -1)
        //cout << "k = " << k << " l = " << l;
        cout << "Равных элементов нет" << endl;
    else
        cout << "k = " << k << " l = " << l;
    //cout << "Равных элемнтов нет" << endl;
}

void ravn(int n, int a[], int k, int l)
{

    for (int i = 0; i <= (n - 2); i++)
    {
        for (int j = (i + 1); j <= (n - 1); j++)
        {
            if (a[i] = a[j])
            {
                k = i;
                l = j;
            }
            else { continue; }
        }
    }
}

void vvod(int a[], int n)
{
    cout << "Введите элементы целочисленного массива: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}