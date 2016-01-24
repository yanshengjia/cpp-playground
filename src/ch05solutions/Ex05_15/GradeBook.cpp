// Exercise 5.15 Solution: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a switch statement to count A, B, C, D and F grades.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
#include "GradeBook.h"
using namespace std;

// constructor initializes courseName with string supplied as argument;
// initializes counter data members to 0
GradeBook::GradeBook( string name )
{
   setCourseName( name ); // validate and store courseName     
   aCount = 0; // initialize count of A grades to 0
   bCount = 0; // initialize count of B grades to 0
   cCount = 0; // initialize count of C grades to 0
   dCount = 0; // initialize count of D grades to 0
   fCount = 0; // initialize count of F grades to 0
} // end GradeBook constructor

// function to set the course name; limits name to 25 or fewer characters
void GradeBook::setCourseName( string name )
{
   if ( name.length() <= 25 ) // if name has 25 or fewer characters
      courseName = name; // store the course name in the object
   else // if name is longer than 25 characters
   { // set courseName to first 25 characters of parameter name
      courseName = name.substr( 0, 25 ); // select first 25 characters
      cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         << "Limiting courseName to first 25 characters.\n" << endl;
   } // end if...else
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
   // this statement calls getCourseName to get the 
   // name of the course this GradeBook represents
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" 
      << endl;
} // end function displayMessage

// input arbitrary number of grades from user; update grade counter
void GradeBook::inputGrades()
{
   int grade; // grade entered by user

   cout << "Enter the letter grades." << endl
      << "Enter the EOF character to end input." << endl;

   // loop until user types end-of-file key sequence
   while ( ( grade = cin.get() ) != EOF )
   {
      // determine which grade was input
      switch ( grade ) // switch statement nested in while
      {
         case 'A': // grade was uppercase A
         case 'a': // or lowercase a
            aCount++; // increment aCount
            break; // exit switch

         case 'B': // grade was uppercase B
         case 'b': // or lowercase b
            bCount++; // increment bCount
            break; // exit switch
            
         case 'C': // grade was uppercase C
         case 'c': // or lowercase c
            cCount++; // increment cCount
            break; // exit switch
            
         case 'D': // grade was uppercase D
         case 'd': // or lowercase d
            dCount++; // increment dCount
            break; // exit switch
            
         case 'F': // grade was uppercase F
         case 'f': // or lowercase f
            fCount++; // increment fCount
            break; // exit switch
            
         case '\n': // ignore newlines,
         case '\t': // tabs,
         case ' ': // and spaces in input
            break; // exit switch
            
         default: // catch all other characters
            cout << "Incorrect letter grade entered."
               << " Enter a new grade.\n";
            break; // optional; will exit switch anyway
      } // end switch
   } // end while
} // end function inputGrades

// display a report based on the grades entered by user
void GradeBook::displayGradeReport()
{
   // display summary of results
   cout << "\n\nNumber of students who received each letter grade:" 
      << "\nA: " << aCount // display number of A grades
      << "\nB: " << bCount // display number of B grades
      << "\nC: " << cCount // display number of C grades 
      << "\nD: " << dCount // display number of D grades
      << "\nF: " << fCount // display number of F grades
      << endl;

   // calculate total grades
   int gradeCount = aCount + bCount + cCount + dCount + fCount;

   // display class average
   // if user entered at least one grade
   if ( gradeCount != 0 )
   {
      // calculate total grades
      int gradeTotal = 4 * aCount + 3 * bCount + 2 * cCount + 1 * dCount;

      // set floating-point number format
      cout << fixed << setprecision( 1 );

      // compute and display class GPA with 1 digit of precision
      cout << "\nThe class average is: " 
         << static_cast< double > ( gradeTotal ) / gradeCount
         << endl;
   } // end if
} // end function displayGradeReport


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
