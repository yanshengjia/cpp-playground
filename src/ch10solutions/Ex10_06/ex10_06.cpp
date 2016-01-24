// Exercise 10.6 Solution: ex10_06.cpp
// Driver program for class Date.
#include <iostream> 
#include "Date.h" // include Date class definition
using namespace std;

int main()
{
   Date date1( 256, 1999 ); // initialize using ddd yyyy format
   Date date2( 3, 25, 04 ); // initialize using mm/dd/yy format
   Date date3( "September", 1, 2000 ); // "month" dd, yyyy format
   Date date4; // initialize to current date with default constructor

   // print Date objects in default format
   date1.print();
   date2.print();
   date3.print();
   date4.print();
   cout << '\n';

   // print Date objects in 'ddd yyyy' format
   date1.printDDDYYYY(); 
   date2.printDDDYYYY();
   date3.printDDDYYYY();
   date4.printDDDYYYY();
   cout << '\n';

   // print Date objects in 'mm/dd/yy' format
   date1.printMMDDYY(); 
   date2.printMMDDYY();
   date3.printMMDDYY();
   date4.printMMDDYY();
   cout << '\n';

   // print Date objects in '"month" d, yyyy' format
   date1.printMonthDDYYYY();
   date2.printMonthDDYYYY();
   date3.printMonthDDYYYY();
   date4.printMonthDDYYYY();
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
