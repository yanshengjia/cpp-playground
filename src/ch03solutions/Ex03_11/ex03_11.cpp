// Exercise 3.11 Solution: ex03_11.cpp
// Test program for modified GradeBook class.
#include <iostream>
#include "GradeBook.h"
using namespace std;

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook( 
      "CS101 Introduction to C++ Programming", "Professor Smith" );

   // display initial value of instructorName of GradeBook object
   cout << "gradeBook instructor name is: " 
      << gradeBook.getInstructorName() << "\n\n"; 

   // modify the instructorName using set function
   gradeBook.setInstructorName( "Assistant Professor Bates" );

   // display new value of instructorName
   cout << "new gradeBook instructor name is: " 
      << gradeBook.getInstructorName() << "\n\n";

   // display welcome message and instructor's name
   gradeBook.displayMessage(); 
} // end main



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
