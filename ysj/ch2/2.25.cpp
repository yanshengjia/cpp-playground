#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Please enter the first number :" << endl;
	cin >> a;
	cout << "Please enter the second number :" << endl;
	cin >> b;

	if (a % b == 0)
		cout << "The first number is a multiple of the second." << endl;
	else
		cout << "The first number is not a multiple of the second." << endl;

	return 0;

}