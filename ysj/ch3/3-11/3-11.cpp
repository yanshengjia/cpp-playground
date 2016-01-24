#include <iostream>
#include "3-11.h"
using namespace std;

Gradebook::Gradebook(string name,string teacher)
{
	setCourseName(name);
	setTeacherName(teacher);
}

void Gradebook::setCourseName(string name)
{
	courseName = name;
}

string Gradebook::getCourseName()
{
	return courseName;
}

void Gradebook::setTeacherName(string teacher)
{
	teacherName = teacher;
}

string Gradebook::getTeacherName()
{
	return teacherName;
}




void Gradebook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
	cout << "This course is presented by:" << getTeacherName()
		<< "!" << endl;

}
























































