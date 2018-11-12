// Exercise 6.25 Solution: Ex06_25.cpp
// Calculate amount of time in seconds between two times.
#include <iostream>
#include <cmath>
using namespace std;

unsigned seconds( unsigned, unsigned, unsigned ); // function prototype

int main()
{
   unsigned hours; // current time's hours
   unsigned minutes; // current time's minutes
   unsigned secs; // current time's seconds
   double first; // first time, in seconds
   double second; // second time, in seconds
   double difference; // difference between two times, in seconds

   cout << "Enter the first time as three integers: ";
   cin >> hours >> minutes >> secs;
   first = seconds( hours, minutes, secs ); // calculate first time

   cout << "Enter the second time as three integers: ";
   cin >> hours >> minutes >> secs;
   second = seconds( hours, minutes, secs ); // calculate second time
   difference = fabs( first - second ); // calculate difference

   // display difference
   cout << "The difference between the times is "
      << difference << " seconds" << endl;
} // end main

// seconds returns number of seconds since clock "struck 12"
// given input time as hours h, minutes m, seconds s
unsigned seconds( unsigned h, unsigned m, unsigned s )
{
   return 3600 * ( h >= 12 ? h - 12 : h ) + 60 * m + s;
} // end function seconds

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
