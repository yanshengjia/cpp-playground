#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, largest, smallest;
	cout << "Please enter five numbers:" << endl;
	cin >> a >> b >> c >> d >> e;

	largest = a;

	if (b > largest)
		largest = b;

	if (c > largest)
		largest = c;

	if (d > largest)
		largest = d;

	if (e > largest)
		largest = e;

	smallest = e;

	if (d < smallest)
		smallest = d;

	if (c < smallest)
		smallest = c;

	if (b < smallest)
		smallest = b;

	if (a < smallest)
		smallest = a;

	cout << "The largest number is " << largest << endl;
	cout << "The smallest number is " << smallest << endl;

	return 0;

}