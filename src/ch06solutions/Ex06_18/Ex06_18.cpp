// Exercise 6.18 Solution: Ex06_18.cpp
// Calculate exponentiation of integers.
#include <iostream>
using namespace std;

int integerPower( int, int ); // function prototype

int main()
{
   int exp; // integer exponent
   int base; // integer base

   cout << "Enter base and exponent: ";
   cin >> base >> exp;
   cout << base << " to the power " << exp << " is: "
      << integerPower( base, exp ) << endl;
} // end main

// integerPower calculates and returns b raised to the e power
int integerPower( int b, int e )
{
   int product = 1; // resulting product

   // multiply product times b e number of times
   for ( int i = 1; i <= e; i++ )
      product *= b;
   
   return product; // return resulting product
} // end function integerPower

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
