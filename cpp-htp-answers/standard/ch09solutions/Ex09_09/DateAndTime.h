// Exercise 9.9 Solution: DateAndTime.h
#ifndef DATEANDTIME_H
#define DATEANDTIME_H

class DateAndTime 
{
public:
   DateAndTime( int = 1, int = 1, int = 2000, 
      int = 0, int = 0, int = 0 ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   void setMonth( int ); // set month
   void setDay( int ); // set day	
   void setYear( int ); // set year
   void nextDay(); // next day
   void setTime( int, int, int ); // set hour, minute, second
   void setHour( int ); // set hour
   void setMinute( int ); // set minute 
   void setSecond( int ); // set second
   void tick(); // tick function 
   int getMonth(); // get month
   int getDay(); // get day
   int getYear(); // get year
   int getHour(); // get hour
   int getMinute(); // get minute
   int getSecond(); // get second 
   void printStandard(); // print standard time
   void printUniversal(); // print universal time
private:
   int month; // 1-12 
   int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
   int year; // 2000+
   int hour; // 0-23 (24 hour clock format)
   int minute; // 0-59 
   int second; // 0-59
   bool leapYear(); // leap year
   int monthDays(); // days in month 
}; // end class DateAndTime

#endif

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


