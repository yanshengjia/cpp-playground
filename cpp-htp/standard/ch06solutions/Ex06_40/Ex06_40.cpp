// Exercise 6.40 Solution: Ex06_40.cpp
// Visualizing recursion with factorial function.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long ); // function prototype

int main()
{
   // Loop 10 times. During each iteration, calculate
   // factorial( i ) and display result.
   for ( int i = 0; i <= 10; i++ )
   {
      cout << "Calculating factorial ( " << i << " )" << endl;
      unsigned long result = factorial( i );
      cout << setw( 2 ) << i << "! = " << result << endl << endl;
   } // end for
} // end main

// recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
   if ( number <= 1 ) // base case
   {
      cout << "   Reached base case of 1" << endl;
      return 1;
   } // end if
   else // recursion step
   {
      // add outputs and indentation to help visualize recursion
      cout << setw( number * 3 ) << ""
         << "local variable number: " << number << endl;
      cout << setw( number * 3 ) << "" 
         << "recursively calling factorial( " 
         << number - 1 << " )" << endl << endl;
      return ( number * factorial( number - 1 ) );
   } // end else
} // end function factorial

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
