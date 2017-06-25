#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Please enter an integer :" << endl;
	cin >> a;

	if (a % 2 == 0)
		cout << "This integer is even." << endl;
	else
		cout << "This integer is odd." << endl;

	return 0;

}