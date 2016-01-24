// Exercise 9.10 Solution: Time.cpp
// Member-function definitions for class Time.
#include <iostream> 
#include "Time.h" // include definition of class Time
using namespace std;

Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec ); 
} // end Time constructor

bool Time::setTime( int h, int m, int s )
{
   bool hourValid = setHour( h ); // invokes function setHour           
   bool minuteValid = setMinute( m ); // invokes function setMinute
   bool secondValid = setSecond( s ); // invokes function setSecond
   return hourValid && minuteValid && secondValid;
} // end function setTime 

bool Time::setHour( int hr )
{
   if ( hr >= 0 && hr < 24 ) 
   {
      hour = hr;
      return true; // hour is valid
   } // end if
   else 
   {
      hour = 0;
      return false; // hour is invalid
   } // end else
} // end function setHour

bool Time::setMinute( int min )
{
   if ( min >= 0 && min < 60 ) 
   {
      minute = min;
      return true; // minute is valid
   } // end if
   else 
   {
      minute = 0;
      return false; // minute is invalid
   } // end else
} // end function setMinute

bool Time::setSecond( int sec )
{
   if ( sec >= 0 && sec < 60 ) 
   {
      second = sec;
      return true; // second is valid
   } // end if
   else 
   {
      second = 0;
      return false; // second is invalid
   } // end else
} // end function setSecond

// return hour value
int Time::getHour()
{
   return hour;
} // end function getHour

// return minute value
int Time::getMinute()
{
   return minute;
} // end function getMinute

// return second value
int Time::getSecond()
{
   return second;
} // end function getSecond

void Time::printUniversal()
{
   cout << ( hour < 10 ? "0" : "" ) << hour << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second;
} // end function printUniversal

void Time::printStandard() 
{
   cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
      << ( minute < 10 ? "0": "" ) << minute << ':'
      << ( second < 10 ? "0": "" ) << second
      << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard

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


