#include <iostream>
#include "3-11.h"
using namespace std;

int main()
{
	Gradebook gradeBook1("CS101 Introduction to C++ Programming"," He Jieyue");
	Gradebook gradeBook2("CS102 Data Structures in C++"," He Jieyue");

	gradeBook1.displayMessage();
	cout << endl;
	gradeBook2.displayMessage();


	
	return 0;
}