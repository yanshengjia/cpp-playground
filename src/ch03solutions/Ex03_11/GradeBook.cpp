// Exercise 3.11 Solution: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initializes courseName and instructorName 
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course ); // initializes courseName
   setInstructorName( instructor ); // initialiZes instructorName
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName

// function to set the instructor name
void GradeBook::setInstructorName( string name )
{
   instructorName = name; // store the instructor name
} // end function setInstructorName

// function to retrieve the instructor name
string GradeBook::getInstructorName()
{
   return instructorName;
} // end function getInstructorName

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!" 
      << endl;

   // display the instructor's name
   cout << "This course is presented by: " << getInstructorName() << endl;
} // end function displayMessage



/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
