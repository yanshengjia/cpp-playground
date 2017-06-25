// Exercise 6.50 Solution: Ex06_50.cpp
// Use inline function to calculate circle area.
#include <iostream>
using namespace std;

double pi = 3.14159; // global variable

// circleArea is inline function that returns area of circle
inline double circleArea( double r ) 
{ 
   return pi * r * r; // return area
} // end function circleArea

int main()
{
   double radius; // user entered radius

   // prompt for radius
   cout << "Enter the radius of the circle: ";
   cin >> radius;

   // calculate and display area of circle
   cout << "The area of the circle is " << circleArea( radius ) << endl;
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
