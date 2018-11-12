// Exercise 13.13 Solution: Circle.cpp
// Member-function definitions for class Circle
#include <iostream>
#include "Circle.h"
using namespace std;

// default constructor
Circle::Circle( double r, double x, double y )
   : TwoDimensionalShape( x, y ) 
{ 
   radius = ( ( r > 0.0 ) ? r : 0.0 ); 
} // end Circle constructor

// return radius of circle object
double Circle::getRadius() const 
{ 
   return radius; 
} // end function getRadius

// return area of circle object
double Circle::getArea() const 
{ 
   return 3.14159 * radius * radius; 
} // end function getArea

// output circle object
void Circle::print() const
{
   cout << "Circle with radius " << radius << "; center at ("
      << xCenter << ", " << yCenter << ")";
} // end function print


/**************************************************************************
 * (C) Copyright 1992-2008 by Deitel & Associates, Inc. and               *
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
