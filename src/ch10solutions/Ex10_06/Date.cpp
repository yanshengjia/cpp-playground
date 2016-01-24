// Exercise 10.6 Solution: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Date.h" // include Date class definition
using namespace std;

// default constructor that sets date using <ctime> functions
Date::Date()
{
   // pointer of type struct tm which holds calendar time components
   struct tm *ptr; 

   time_t t = time( 0 ); // determine current calendar time      
                          
   // convert current calendar time pointed to by t into
   // broken down time and assign it to ptr
   ptr = localtime( &t ); 
                               
   day = ptr->tm_mday; // broken down day of month
   month = 1 + ptr->tm_mon; // broken down month since January
   year = ptr->tm_year + 1900; // broken down year since 1900
} // end Date constructor

// constructor that takes date in ddd yyyy format
Date::Date( int ddd, int yyyy )
{
   year = yyyy; // could validate
   setMMDDFromDDD( ddd ); // set month and day based on ddd
} // end Date constructor

// constructor that takes date in mm/dd/yy format
Date::Date( int mm, int dd, int yy )
{
   setYYYYFromYY( yy ); // set 4-digit year based on yy
   setMonth( mm ); // validate and set the month
   setDay( dd ); // validate and set the day
} // end Date constructor

// constructor that takes date in Month dd, yyyy format
Date::Date( string monthName, int dd, int yyyy )
{ 
   setMMFromMonth( monthName ); // set month based on month name
   setDay( dd ); // validate and set the day
   year = yyyy; // could validate
} // end Date constructor

// validate and store the day
void Date::setDay( int d )
{
   day = checkDay( d ); // validate the day
} // end function setDay

// validate and store the month
void Date::setMonth( int m )
{
   if ( m > 0 && m <= 12 ) // validate the month
      month = m;
   else 
   {                     
      month = 1; // invalid month set to 1
      cout << "Invalid month (" << m << ") set to 1.\n";
   } // end else
} // end function setMonth

// print Date object in form: month/day/year
void Date::print() const
{
   cout << month << '/' << day << '/' << year << endl; 
} // end function print

// print Date object in form: ddd yyyy
void Date::printDDDYYYY() const
{
   cout << convertDDToDDD() << ' ' << year << endl;
} // end function printDDDYYYY

// print Date object in form: mm/dd/yy
void Date::printMMDDYY() const
{
   cout << setw( 2 ) << setfill( '0' ) << month << '/' 
      << setw( 2 ) << setfill( '0' ) << day << '/' 
      << setw( 2 ) << setfill( '0' ) << convertYYYYToYY() << endl;
} // end function printMMDDYY

// print Date object in form: Month dd, yyyy
void Date::printMonthDDYYYY() const
{
   cout << convertMMToMonth( month ) << ' ' << day << ", " << year 
      << endl;
} // end function printMonthDDYYYY

// output Date object to show when its destructor is called
Date::~Date()
{ 
   cout << "Date object destructor for date ";
   print();
   cout << endl;
} // end ~Date destructor

// utility function to confirm proper day value based on 
// month and year; handles leap years, too
int Date::checkDay( int testDay ) const
{
   // determine whether testDay is valid for specified month
   if ( testDay > 0 && testDay <= daysInMonth( month ) )
      return testDay;

   // February 29 check for leap year 
   if ( month == 2 && testDay == 29 && isLeapYear() )
      return testDay;

   cout << "Invalid day (" << testDay << ") set to 1.\n";
   return 1; // leave object in consistent state if bad value
} // end function checkDay

// return the number of days in a month
int Date::daysInMonth( int m ) const
{
   if ( isLeapYear() && m == 2 )
      return 29;
   
   static const int daysPerMonth[ 13 ] = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return daysPerMonth[ m ];
} // end function daysInMonth

// test for a leap year
bool Date::isLeapYear() const
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
      return true;
   else
      return false;
} // end function isLeapYear

// calculate 3-digit day based on Date object's current month and day
int Date::convertDDToDDD() const
{
   int ddd = 0;

   // for each month that has passed, add days to ddd
   for ( int i = 1; i < month; i++ )
      ddd += daysInMonth( i );
      
   // add days from current month
   ddd += day;

   return ddd;
} // end function convertDDToDDD

// set month and day based on 3-digit day
void Date::setMMDDFromDDD( int ddd )
{
   int dayTotal = 0;
   int m;

   for ( m = 1; m <= 12 && ( dayTotal + daysInMonth( m ) ) < ddd; m++ )
      dayTotal += daysInMonth( m );

   setMonth( m );
   setDay( ddd - dayTotal );
} // end function setMMDDFromDDD
   
// utility function to convert month number to month name
string Date::convertMMToMonth( int mm ) const
{
   static const string months[] = 
      { "", "January", "February", "March", "April", "May", "June", 
      "July", "August", "September", "October", "November", "December" };

   return months[ mm ];
} // end function convertMMToMonth

// set month number based on month name    
void Date::setMMFromMonth( string m )
{
   bool matchFound = false;

   // loop for each month, checking for a match
   for ( int i = 1; i <= 12 && !matchFound; i++ )
   {
      string tempMonth = convertMMToMonth( i );

      if ( tempMonth == m )
      {
         setMonth( i );
         matchFound = true;
      } // end if
   } // end for

   if ( !matchFound )
   {
      cout << "Invalid month name (" << month << "). month set to 1.\n";
      setMonth( 1 ); // leave object in consistent state if bad value
   } // end if
} // end function setMMFromMonth

// utility function to convert 4-digit year to 2-digit year
int Date::convertYYYYToYY() const
{
   // if year is in 2000s, subtract 2000
   // else, assume year is in the 1900s and subtract 1900
   return ( year >= 2000 ? year - 2000 : year - 1900 );
} // end function convertYYYYtoYY

// utility function to convert 2-digit year to 4-digit year
void Date::setYYYYFromYY( int yy )
{
   // if yy is less than 7, assume it is in the 2000s
   // if yy is greater than or equal to 7, assume it's in the 1900s
   year = ( yy < 7 ? yy + 2000 : yy + 1900 );
} // end function setYYYYFromYY


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
