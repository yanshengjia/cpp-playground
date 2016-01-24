// Exercise 9.10 Solution: Time.h
#ifndef TIME_H
#define TIME_H

class Time 
{
public:
   Time( int = 0, int = 0, int = 0 ); // default constructor
   bool setTime( int, int, int ); // set hour, minute, second
   bool setHour( int ); // set hour
   bool setMinute( int ); // set minute
   bool setSecond( int ); // set second
   int getHour(); // get hour
   int getMinute(); // get minute
   int getSecond(); // get second
   void printUniversal(); // print universal time
   void printStandard(); // print standard time
private:
   int hour; // 0-23
   int minute; // 0-59	
   int second; // 0-59	
}; // end class Time

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


