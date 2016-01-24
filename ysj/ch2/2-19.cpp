#include <iostream>
using namespace std;

int main()
{
	int a, b, c, sum, average, product, smallest, largest;
	cout << "Please enter three integers:" << endl;
	cin >> a >> b >> c;

	sum = a + b + c;
	average = (a + b + c) / 3;
	product = a*b*c;

	if (a < b)
	{
		smallest = a;
		largest = b;
	}

	else
	{
		smallest = b;
		largest = a;
	}

	if (c < smallest)
		smallest = c;
	if (c > largest)
		largest = c;

	cout << "Input three different integers: " << a << " " << b << " " << c << endl;
	cout << "Sum is " << sum <<endl;
	cout << "Average is " << average << endl;
	cout << "Product is " << product<<endl;
	cout << "Smallest is " << smallest<<endl;
	cout << "Largest is " << largest << endl;

	system("pause");
	return 0;

}