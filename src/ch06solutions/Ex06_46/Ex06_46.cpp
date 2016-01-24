// Exercise 6.46 Solution: Ex06_46.cpp
// Multiply integers (positive or negative) using recursion.
#include <iostream>
using namespace std;

int mystery( int, int ); // function prototype

int main()
{
   int x; // first integer
   int y; // second integer

   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << "The result is " << mystery( x, y ) << endl;
} // end main

// mystery multiplies a * b using recursion
int mystery( int a, int b )
{
   if ( b < 0 ) // if b is negative
   {
      // multiply both a and b by -1, so b is positive
      // note this multiplies answer by (-1)*(-1) = 1
      a *= -1;
      b *= -1;
   } // end if

   if ( b == 1 ) // base case
      return a;
   else // recursion step
      return a + mystery( a, b - 1 );
} // end function mystery

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
