// Exercise 6.36 Solution: Ex06_36.cpp
// Recursive exponentiation.
#include <iostream>
using namespace std;

long power( long, long ); // function prototype

int main()
{
   long b; // base 
   long e; // exponent

   cout << "Enter a base and an exponent: ";
   cin >> b >> e;

   // calculate and display b^e
   cout << b << " raised to the " << e << " is " << power( b, e ) << endl;
} // end main

// power recursively calculates base^exponent, assume exponent >= 1
long power( long base, long exponent )
{
   if ( exponent == 1 ) // base case: exponent equals 1, return base
      return base;
   else // recursion step
      return base * power( base, exponent - 1 );
} // end function power

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
