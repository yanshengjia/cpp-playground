// Exercise 13.13 Solution: Cube.cpp
// Member-function definitions for class Cube
#include <iostream>
#include "Cube.h"
using namespace std;

// default constructor
Cube::Cube( double s, double x, double y )
   : ThreeDimensionalShape( x, y ) 
{ 
   sideLength = ( ( s > 0.0 ) ? s : 0.0 ); 
} // end Cube constructor

// return area of Cube
double Cube::getArea() const 
{ 
   return 6 * sideLength * sideLength; 
} // end function getArea

// return volume of Cube
double Cube::getVolume() const
{ 
   return sideLength * sideLength * sideLength; 
} // end function getVolume

// return length of sides
double Cube::getSideLength() const 
{ 
   return sideLength; 
} // end function getSideLength

// output Cube object
void Cube::print() const
{
   cout << "Cube with side length " << sideLength << "; center at ("
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
