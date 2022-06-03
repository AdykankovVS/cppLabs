#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{

	int n, m, k;

	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;

	m = n / 2;

	for (int i = 2; i <= m; i++)
	{

		if (n % i == 0) k = k + 1;

	}

	cout << "k = " << k << endl;

	_getch();
	return(0);
}