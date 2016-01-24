// Exercise 15.15 Solution: Ex15_15.cpp
// Point test program.
#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
   Point pt; // create point object

   // ask user to enter point
   cout << "Enter a point in the form (x, y):\n";
   cin >> pt; // store user entered point

   if ( !cin.fail() ) // validate input
      cout << "Point entered was: " << pt << endl; // display point
   else
      cout << "\nInvalid data\n"; // tell user invalid data was entered
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
