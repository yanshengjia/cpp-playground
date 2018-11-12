// Exercise 13.13 Solution: Shape.cpp
// Member and friend definitions for class Shape

#include "Shape.h"

// default constructor
Shape::Shape( double x, double y )
{
   xCenter = x;
   yCenter = y;
} // end Shape constructor

// return x from coordinate pair
double Shape::getCenterX() const 
{ 
   return xCenter; 
} // end function getCenterX

// return y from coordinate pair
double Shape::getCenterY() const 
{ 
   return yCenter; 
} // end function getCenterY

// overloaded output operator
ostream & operator<<( ostream &out, Shape &s )
{
   s.print();
   return out;
} // end overloaded output operator function


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
