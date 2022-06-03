#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{

	int i;
	double a, e, p1, p2, s = 0;

	cout << "e = "; cin >> e;

	i = 0;
	a = 1.0 / (1 + 25);

	while (fabs(a) > e)
	{

		s = s + a;
		i++;
		p1 = pow(4.0, i);
		p2 = pow(5.0, i + 2);
		a = 1 / (p1 + p2);

	}

	cout << "s = " << s << endl;
	cout << "i = " << i << endl;
	_getch();

}
