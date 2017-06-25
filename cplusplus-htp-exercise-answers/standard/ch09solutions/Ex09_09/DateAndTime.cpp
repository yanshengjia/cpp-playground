// Exercise 9.9 Solution: DateAndTime.cpp
// Member function definitions for class DateAndTime.
#include <iostream> 
#include "DateAndTime.h" // include definition of class DateAndTime
using namespace std;

DateAndTime::DateAndTime(  
    int m, int d, int y, int hr, int min, int sec )
{
   setDate( m, d, y ); // sets date
   setTime( hr, min, sec ); // sets time
} // end DateAndTime constructor

void DateAndTime::setDate( int mo, int dy, int yr )
{   
   setMonth( mo ); // invokes function setMonth
   setDay( dy ); // invokes function setday
   setYear( yr ); // invokes function setYear 
} // end function setDate

void DateAndTime::setDay( int d )
{
   if ( month == 2 && leapYear() )
      day = ( d <= 29 && d >= 1 ) ? d : 1;
   else
      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
} // end function setDay

void DateAndTime::setMonth( int m ) 
{ 
   month = m <= 12 && m >= 1 ? m : 1; // sets month
} // end function setMonth

void DateAndTime::setYear( int y ) 
{ 
   year = y >= 2000 ? y : 2000; // sets year
} // end function setYear

void DateAndTime::nextDay()
{
   setDay( day + 1 ); // increments day by 1

   if ( day == 1 ) 
   {
      setMonth( month + 1 ); // increments month by 1

      if ( month == 1 )
         setYear( year + 1 ); // increments year by 1
   } // end if statement 
} //end function nextDay

void DateAndTime::setTime( int hr, int min, int sec )
{
   setHour( hr ); // invokes function setHour
   setMinute( min ); // invokes function setMinute
   setSecond( sec ); // invokes function setSecond
} // end function setTime

void DateAndTime::setHour( int h ) 
{ 
   hour = ( h >= 0 && h < 24 ) ? h : 0; // sets hour 
} // end function setHour

void DateAndTime::setMinute( int m ) 
{ 
   minute = ( m >= 0 && m < 60 ) ? m : 0; // sets minute
} // end function setMinute

void DateAndTime::setSecond( int s ) 
{ 
   second = ( s >= 0 && s < 60 ) ? s : 0; // sets second
} // end function setSecond

void DateAndTime::tick()
{
   setSecond( second + 1 ); // increments second by 1

   if ( second == 0 ) 
   {
      setMinute( minute + 1 ); // increments minute by 1

      if ( minute == 0 ) 
      {
         setHour( hour + 1 ); // increments hour by 1

         if ( hour == 0 )
            nextDay(); // increments day by 1
      } // end if 
   } // end if 
} // end function tick

int DateAndTime::getDay() 
{ 
   return day; 
} // end function getDay

int DateAndTime::getMonth()
{
   return month; 
} // end function getMonth

int DateAndTime::getYear() 
{ 
   return year; 
} // end function getYear

int DateAndTime::getHour() 
{ 
   return hour; 
} // end function getHour

int DateAndTime::getMinute() 
{ 
   return minute; 
} // end function getMinute

int DateAndTime::getSecond() 
{ 
   return second; 
} // end function getSecond

void DateAndTime::printStandard()
{
   cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second
      << ( hour < 12 ? " AM " : " PM " )
      << month << '-' << day << '-' << year << endl;
} // end function printStandard

void DateAndTime::printUniversal()
{
   cout << ( hour < 10 ? "0" : "" ) << hour << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second << "    "
      << month << '-' << day << '-' << year << endl;
} // end function printUniversal

bool DateAndTime::leapYear()
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
      return true; // is a leap year
   else
      return false; // is not a leap year
} // end function leapYear

int DateAndTime::monthDays()
{
   const int days[ 12 ] = { 
      31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return ( month == 2 && leapYear() ) ? 29 : days[ ( month - 1 ) ];
} // end function monthDays


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


