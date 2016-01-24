// Exercise 9.7: Ex09_07.cpp
#include <iostream> 
#include "Time.h" // include definition of class Time
using namespace std;

const int MAX_TICKS = 30;

int main()
{
   Time t; // instantiate object t of class Time

   t.setTime( 23, 59, 57 ); // set time

   // output Time object t's values 
   for ( int ticks = 1; ticks < MAX_TICKS; ++ticks ) 
   {
      t.printStandard(); // invokes function printStandard
      cout << endl;
      t.tick(); // invokes function tick
   } // end for
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


