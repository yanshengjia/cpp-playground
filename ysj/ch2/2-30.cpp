//BMI CALCULATOR

#include <iostream>
using namespace std;

int main()
{
	double weight, height, BMI;
	cout << "Please enter the weight in kilograms and the height in meters :" << endl;
	cin >> weight >> height;

	BMI = weight / (height*height);

	cout << "The BMI is " << BMI << endl;
	cout << "BMI VALUES" << endl;
	cout << "Underweight: less than 18.5" << endl;
	cout << "Normol:      between 18.5 and 24.9" << endl;
	cout << "Overweight:  between 25 and 29.9" << endl;
	cout << "Obese:       30 or greater" << endl;

	system("pause");
}