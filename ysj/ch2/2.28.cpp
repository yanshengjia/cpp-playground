#include <iostream>
using namespace std;

int main()
{
	int number, a, b, c, d, e;
	cout << "Please enter a five-digit integer: " << endl;
	cin >> number;

	e = number % 10;
	d = (number / 10) % 10;
	c = (number / 100) % 10;
	b = (number / 1000) % 10;
	a = number / 10000;

	cout << a << "   " << b << "   " << c << "   " << d << "   " << e;

	return 0;
}