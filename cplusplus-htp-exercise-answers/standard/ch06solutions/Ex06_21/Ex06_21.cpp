// Exercise 6.21 Solution: Ex06_21.cpp
// Determine whether inputs are odd or even.
#include <iostream>
using namespace std;

bool isEven( int ); // function prototype

int main()
{
   int x; // current input
      
   // loop for 3 inputs
   for ( int i = 1; i <= 3; i++ ) 
   {
      cout << "Enter an integer: ";
      cin >> x;
   
      // determine if input is even
      if ( isEven( x ) )
         cout << x << " is an even integer\n\n";
      else
         cout << x << " is an odd integer\n\n";
   } // end for

   cout << endl;
} // end main

// isEven returns true if a is even 
bool isEven( int a )
{
   return !( a % 2 );
} // end function isEven

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
