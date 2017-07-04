// Exercise 10.9 Solution: Time.cpp 
// Member-function definitions for Time class.
#include <iostream>
#include <iomanip>
#include "Time.h" // Time class definition
using namespace std;

// constructor function to initialize private data;
// calls member function setTime to set variables;
// default values are 0 (see class definition)
Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec ); 
} // end Time constructor

// set values of hour, minute, and second
Time &Time::setTime( int h, int m, int s ) // note Time & return
{
   setHour( h );
   setMinute( m );
   setSecond( s ); 
   return *this; // enables cascading
} // end function setTime

// set hour value
Time &Time::setHour( int h ) // note Time & return
{
   int hours = ( h >= 0 && h < 24 ) ? h : 0;
   totalSeconds = ( hours * 3600 ) + ( getMinute() * 60 ) + getSecond();
   return *this; // enables cascading
} // end function setHour

// set minute value
Time &Time::setMinute( int m ) // note Time & return
{
   int minutes = ( m >= 0 && m < 60 ) ? m : 0;
   totalSeconds = ( getHour() * 3600 ) + ( minutes * 60 ) + getSecond();
   return *this; // enables cascading
} // end function setMinute

// set second value
Time &Time::setSecond( int s ) // note Time & return
{
   int seconds = ( s >= 0 && s < 60 ) ? s : 0;
   totalSeconds = ( getHour() * 3600 ) + ( getMinute() * 60 ) + seconds;
   return *this; // enables cascading
} // end function setSecond

// get hour value
int Time::getHour() const 
{ 
   return ( totalSeconds / 3600 ); 
} // end function getHour

// get minute value
int Time::getMinute() const 
{ 
   return ( ( totalSeconds % 3600 ) / 60 ); 
} // end function getMinute

// get second value
int Time::getSecond() const 
{ 
   return ( ( totalSeconds % 3600 ) % 60 ); 
} // end function getSecond

// print Time in universal-time format (HH:MM:SS) 
void Time::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
   int hour = getHour();
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
      << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
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
