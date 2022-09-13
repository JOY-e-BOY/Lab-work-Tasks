#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cout << "Enter Five Numbers=\t";
	cin >> a >> b >> c >> d >> e;
	if (a == b && b == c && c == d && d == e)
	{
		cout << "All Are Equal";
	}
	else
	{
		if (a > b && a > c && a > d && a > e)
			cout << a << " Is Largest=\t";
		else if (b > c && b > d && b > e)
			cout << b << " Is Largest=\t";

		else if (c > d && c > e)
			cout << c << " Is Largest";
		else if (d > e)
			cout << d << " Is Largest";
		else
			cout << e << " Is Largest";

		cout << "\n_____________\n";
		if (a < b && a < c && a < d && a < e)
			cout << a << " Is Smallest=\t";
		else if (b < c && b < d && b < e)
			cout << b << " Is Smallest=\t";
		else if (c < d && c < e)
			cout << c << " Is Smallest";
		else if (d < e)
			cout << d << " Is Smallest";
		else
			cout << e << " Is Smallest";
	}
	system("pause");
	return 0;
}