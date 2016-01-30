#include "Gradebook.h"

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


int main()
{
	Gradebook gradeBook1("CS101 Introduction to C++ Programming"," He Jieyue");
	Gradebook gradeBook2("CS102 Data Structures in C++"," He Jieyue");

	gradeBook1.displayMessage();
	cout << endl;
	gradeBook2.displayMessage();


	
	return 0;
}





















































