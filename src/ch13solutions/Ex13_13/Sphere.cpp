// Exercise 13.13 Solution: Sphere.cpp
// Member-function definitions for class Sphere
#include <iostream>
#include "Sphere.h"
using namespace std;

// default constructor
Sphere::Sphere( double r, double x, double y )
   : ThreeDimensionalShape( x, y ) 
{ 
   radius = ( ( r > 0.0 ) ? r : 0.0 ); 
} // end Sphere constructor

// return area of Sphere
double Sphere::getArea() const
{ 
   return 4.0 * 3.14159 * radius * radius; 
} // end function getArea

// return volume of Sphere
double Sphere::getVolume() const
{ 
   return ( 4.0 / 3.0 ) * 3.14159 * radius * radius * radius; 
} // end function getVolume

// return radius of Sphere
double Sphere::getRadius() const 
{ 
   return radius; 
} // end function getRadius

// output Sphere object
void Sphere::print() const
{
   cout << "Sphere with radius " << radius << "; center at ("
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
