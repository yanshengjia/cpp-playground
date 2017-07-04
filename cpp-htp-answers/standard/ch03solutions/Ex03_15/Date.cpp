// Exercise 3.15 Solution: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor that initializes the three data members;
// assume values provided are correct (really should validate)
Date::Date( int m, int d, int y )
{
   setMonth( m );
   setDay( d );
   setYear( y );
} // end Date constructor 

// set month
void Date::setMonth( int m )
{
   month = m;

   if ( month < 1 )
      month = 1;

   if ( month > 12 )
      month = 1;
} // end function setMonth

// return month
int Date::getMonth()
{
   return month;
} // end function getMonth

// set day
void Date::setDay( int d )
{
   day = d;
} // end function setDay

// return day
int Date::getDay()
{
   return day;
} // end function getDay

// set year
void Date::setYear( int y )
{
   year = y;
} // end function setYear

// return year
int Date::getYear()
{
   return year;
} // end function getYear

// print Date in the format mm/dd/yyyy
void Date::displayDate() 
{ 
   cout << month << '/' << day << '/' << year << endl; 
} // end function displayDate


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
