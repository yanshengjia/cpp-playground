// Exercise 6.13 Solution: Ex06_13.cpp
// Rounding numbers using floor.
#include <iostream> 
#include <iomanip> 
#include <cmath>
using namespace std;

double roundToIntegers( double ); // function prototype

int main()
{
   double x; // current input
   double y; // current input rounded

   cout << fixed; // set floating-point number format

   // loop for 5 inputs
   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cout << "Enter a number: ";
      cin >> x;

      y = roundToIntegers( x ); // y holds rounded input
      cout << setprecision( 6 ) << x << " rounded is "
         << setprecision( 1 ) << y << endl;
   } // end for
} // end main

// roundToIntegers rounds 5 inputs
double roundToIntegers( double value )
{
	return floor( value + .5 ); 
} // end function roundToIntegers

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
