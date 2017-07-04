// Exercise 6.27 Solution: Ex06_27.cpp
// Determine the smallest of 3 numbers.
#include <iostream> 
using namespace std;

double smallest( double, double, double ); // function prototype

int main()
{
   double x; // first input
   double y; // second input
   double z; // third input

   cout << "Enter three numbers: ";
   cin >> x >> y >> z;

   // determine smallest value
   cout << "The smallest value is " << smallest( x, y, z ) << endl;
} // end main

// smallest returns the smallest of a, b and c
double smallest( double a, double b, double c )
{
   if ( a < b && a < c )
      return a;
   else if ( b < a && b < c )
      return b;
   else
      return c;
} // end function smallest

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
