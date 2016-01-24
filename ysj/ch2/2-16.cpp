#include <iostream>
using namespace std;

int main()
{
	int a, b, sum, product, difference, quotient;
	cout << "Please enter two numbers:" << endl;
	cin >> a >> b;
	sum = a + b;
	product = a * b;
	difference = a - b;
	quotient = a / b;

	cout << sum << endl;
	cout << product << endl;
	cout << difference << endl;
	cout << quotient<< endl;

	system("pause");
	return 0;
}