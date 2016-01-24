// Exercise 13.13 Solution: Square.cpp
// Member-function definitions for class Square
#include <iostream>
#include "Square.h"
using namespace std;

// default constructor
Square::Square( double s, double x, double y )
   : TwoDimensionalShape( x, y ) 
{ 
   sideLength = ( ( s > 0.0 ) ? s : 0.0 );
} // end Square constructor

// return side of Square
double Square::getSideLength() const 
{ 
   return sideLength; 
} // end function getSideLength

// return area of Square
double Square::getArea() const 
{ 
   return sideLength * sideLength; 
} // end function getArea

// output Square object
void Square::print() const
{
   cout << "Square with side length " << sideLength << "; center at ("
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
