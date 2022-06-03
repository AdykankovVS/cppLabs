#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    using namespace std;

    int n, nNumSum = 0, temp, iNumSum = 0, printedNumCount = 0;
    cout << "Введите число n = "; cin >> n;

    temp = n;

    while (temp > 0)
    {
        nNumSum += temp % 10;
        temp /= 10;
    }

    for (int i = 1; i < n; i++) {
        temp = i;

        while (temp > 0)
        {
            iNumSum += temp % 10;
            temp /= 10;
        }

        if (iNumSum == nNumSum) {
            cout << i << endl;
            printedNumCount++;
        }

        iNumSum = 0;

    }

    if (printedNumCount == 0) cout << "Нет искомых чисел!";
}