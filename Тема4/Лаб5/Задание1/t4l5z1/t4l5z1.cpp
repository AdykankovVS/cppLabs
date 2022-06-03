#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d, m, n, i;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;

	m = a * d + b * c;
	n = b * d;
	i = 2;

	while (i <= n && i <= m)
	{
		if (n % i == 0 && m % i == 0)
		{
			n = n / 1;
			m = m / 1;
		}

		else i++;
	}
		cout << m << "/" << n;
		return 0;
}