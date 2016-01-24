// Exercise 6.19 Solution: Ex06_19.cpp
// Calculate hypotenuse value for a right triangle 
// given values for two sides.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse( double, double ); // function prototype

int main()
{
   double side1; // value for first side
   double side2; // value for second side
   
   cout << fixed; // set floating-point number format

   // loop 3 times
   for ( int i = 1; i <= 3; i++ ) 
   {
      cout << "\nEnter 2 sides of right triangle: ";
      cin >> side1 >> side2;

      // calculate and display hypotenuse value
      cout << "Hypotenuse:  " << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   } // end for
} // end main

// hypotenuse calculates value of hypotenuse of
// a right triangle given two side values
double hypotenuse( double s1, double s2 )
{
   return sqrt( s1 * s1 + s2 * s2 );
} // end function hypotenuse

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
