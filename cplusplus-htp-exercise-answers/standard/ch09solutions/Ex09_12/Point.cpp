// Exercise 9.12 Solution: Point.cpp
// Member-function definitions for class Point.
#include "Point.h" // include definition of class Point

Point::Point( double xCoord, double yCoord )
{
   setX( xCoord ); // invoke function setX
   setY( yCoord ); // invoke function setY
} // end Point constructor

// set x coordinate
void Point::setX( double xCoord )
{
   x = ( xCoord >= 0.0 && xCoord <= 20.0 ) ? xCoord : 0.0;
} // end function setX

// set y coordinate
void Point::setY( double yCoord )
{
   y = ( yCoord >= 0.0 && yCoord <= 20.0 ) ? yCoord : 0.0;
} // end function setY

// return x coordinate
double Point::getX()
{
   return x;
} // end function getX

// return y coordinate
double Point::getY()
{
   return y;
} // end function getY

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


