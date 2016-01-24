#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "Please enter a character: " << endl;
	cin >> a;
	cout << static_cast<int>(a);

	system("pause");
	return 0;

}