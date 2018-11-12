// Exercise 6.31 Solution: Ex06_31.cpp
// Finds greatest common divisor (GCD) of 2 inputs.
#include <iostream>
using namespace std;

int gcd( int, int ); // function prototype

int main()
{
   int a; // first number
   int b; // second number

   // loop for 5 pairs of inputs
   for ( int j = 1; j <= 5; j++ ) 
   {
      cout << "Enter two integers: ";
      cin >> a >> b;

      cout << "The greatest common divisor of " 
         << a << " and " << b << " is ";

      // find greatest common divisor of a and b
      cout <<  gcd( a, b ) << endl;
   } // end for
} // end main

// gcd finds greatest common divisor of x and y
int gcd( int x, int y )
{
   int greatest = 1; // current greatest common divisor, 1 is minimum

   // loop from 2 to smaller of x and y
   for ( int i = 2; i <= ( ( x < y ) ? x: y ); i++ )
   {
      // if current i divides both x and y
      if ( x % i == 0 && y % i == 0 )
         greatest = i; // update greatest common divisor
   } // end for

   return greatest; // return greatest common divisor found
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
