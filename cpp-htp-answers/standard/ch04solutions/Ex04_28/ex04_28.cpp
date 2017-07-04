// Exercise 4.28 Solution: ex04_28.cpp
// Prints out an 8 x 8 checkerboard pattern.
#include <iostream>
using namespace std;

int main()
{
   int row = 8; // row counter 
   int side; // side counter

   while ( row-- > 0 ) // loop 8 times
   {
      side = 8; // reset side counter

      // if even row, begin with a space
      if ( row % 2 == 0 )
         cout << ' ';

      while ( side-- > 0 ) // loop 8 times
         cout << "* ";

      cout << endl; // go to next line
   } // end while
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
