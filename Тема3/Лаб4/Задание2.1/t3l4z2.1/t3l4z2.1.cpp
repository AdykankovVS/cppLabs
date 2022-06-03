#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main() 
{

	int n, a, k, b;

	setlocale(LC_ALL, "Russian_Russia.1251");

	cout << "n = "; cin >> n;

	a = n % 10;
	k = 0;

	while (n / 10 > 0);
	n = n / 10;
	b = n % 10;

	if (a < 0) a = b;
	else k = 1;

	if (k == 0 && a < n) cout << "Возрастает" << endl;
	else cout << "Не возрастает" << endl;

	_getch();
	return(0);

}