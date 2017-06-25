// Exercise 6.20 Solution: Ex06_20.cpp
// Determines whether, for a pair of integers,
// the second is a multiple of the first.
#include <iostream>
using namespace std;

bool multiple( int, int ); // function prototype

int main()
{
   int x; // first integer
   int y; // second integer

   // loop 3 times
   for ( int i = 1; i <= 3; i++ ) 
   {
      cout << "Enter two integers: ";
      cin >> x >> y;
   
      // determine if second is multiple of first
      if ( multiple( x, y ) )
         cout << y << " is a multiple of " << x << "\n\n";
      else
         cout << y << " is not a multiple of " << x << "\n\n";
   } // end for

   cout << endl;
} // end main

// multiple determines if b is multiple of a
bool multiple( int a, int b )
{
   return !( b % a );
} // end function multiple

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
