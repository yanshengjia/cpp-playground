// Exercise 9.9 Solution: Ex09_09.cpp
#include <iostream> 
#include "DateAndTime.h" // include definitions of class DateAndTime
using namespace std;

int main()
{
   const int MAXTICKS = 30;
   DateAndTime d( 12, 31, 2004, 23, 59, 57 ); // instantiates object d 
                                              // of class DateAndTime
   
   for ( int ticks = 1; ticks <= MAXTICKS; ticks++ ) 
   {
      cout << "Universal time: ";
      d.printUniversal(); // invokes function printUniversal
      cout << "Standard  time: ";
      d.printStandard(); // invokes function printStandard
      d.tick(); // invokes function tick			
   } // end for

   cout << endl;
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


