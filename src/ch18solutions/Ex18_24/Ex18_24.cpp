// Exercise 18.24 Solution: Ex18_24.cpp
// Program prints a pyramid from a string.
#include <iostream> 
#include <string>
using namespace std;

int main()
{
   string alpha = "abcdefghijklmnopqrstuvwxyz{";
   string::const_iterator x = alpha.begin();
   string::const_iterator x2;
 
   for ( int p = 1; p <= 14; p++ ) 
   {
      int w; // index variable
      int count = 0; // set to 0 each iteration
      
      // output spaces
      for ( int k = 13; k >= p; k-- )
         cout << ' ';

      x2 = x; // set starting point

      // output first half of characters
      for ( int c = 1; c <= p; ++c ) 
      {
         cout << *x2;
         ++x2; // move forward one letter
         ++count; // keep count of iterations
      } // end for       

      // output back half of characters
      for ( w = 1, x2 -= 2; w < count; w++ ) 
      {
         cout << *x2;
         --x2; // move backward one letter
      } // end for

      ++x; // next letter
      cout << '\n';
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
