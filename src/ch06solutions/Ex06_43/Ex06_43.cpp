// Exercise 6.43 Solution: Ex06_43.cpp
// Calculate distance between 2 points.
#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;

double distance( double, double, double, double ); // function prototype

int main()
{
   double x1; // x coordinate of first point
   double y1; // y coordinate of first point
   double x2; // x coordinate of second point
   double y2; // y coordinate of second point

   // prompt for first point coordinates
   cout << "Enter the first point: ";
   cin >> x1 >> y1;

   // prompt for second point coordinates
   cout << "Enter the second point: ";
   cin >> x2 >> y2;

   // calculate and display distance
   cout << fixed << "Distance between (" << setprecision( 1 ) << x1
      << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is "
      << distance( x1, y1, x2, y2 ) << endl;
} // end main

// distance calculates distance between 2 points 
// given by (a1, b1) and (a2, b2)
double distance( double a1, double b1, double a2, double b2 )
{
   return sqrt( pow( a1 - a2, 2 ) + pow( b1 - b2, 2 ) );
} // end function distance

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
