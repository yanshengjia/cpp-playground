// Exercise 6.41 Solution: Ex06_41.cpp
// Recursive greatest common divisor.
#include <iostream>
using namespace std;

unsigned gcd( unsigned int, unsigned int ); // function prototype

int main()
{
   unsigned x; // first integer
   unsigned y; // second integer

   cout << "Enter two integers: ";
   cin >> x >> y;

   cout << "Greatest common divisor of " << x << " and "
      << y << " is " << gcd( x, y ) << endl;
} // end main

// gcd recursively finds greatest common divisor of a and b
unsigned gcd( unsigned a, unsigned b )
{
   if ( b == 0 ) // base case
      return a;
   else // recursion step
      return gcd( b, a % b );
} // end function gcd

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
