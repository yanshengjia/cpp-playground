#include <iostream>
using namespace std;

int main()
{
	int radius;
	cout << "Please enter the radius of a circle as a integer:" << endl;
	cin >> radius;

	cout << "The circle's diameter is " << 2 * radius << endl;
	cout << "The circle's circumference is " << 2 * 3.14159*radius << endl;
	cout << "The circle's area is " << 3.14159*radius*radius << endl;

	system("pause");
	return 0;

}