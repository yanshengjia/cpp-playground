// Exercise 9.18 Solution: Rectangle.cpp
// Member-function definitions for class Rectangle.
#include <iostream> 
#include <iomanip> 
#include <cmath>
#include "Rectangle.h" // include definition of class Rectangle
using namespace std;

Rectangle::Rectangle( Point a, Point b, Point c, Point d )
{
   setCoord( a, b, c, d ); // invokes function setCoord
} // end Rectangle constructor

void Rectangle::setCoord( Point p1, Point p2, Point p3, Point p4 )
{
   // Arrangement of points
   // p4.........p3
   //  .         .
   //  .         .
   // p1.........p2

   // verify that points form a rectangle
   if ( ( p1.getY() == p2.getY() && p1.getX() == p4.getX()
      && p2.getX() == p3.getX() && p3.getY() == p4.getY() ) ) 
   {
      point1 = p1;
      point2 = p2;
      point3 = p3;
      point4 = p4;
   } // end if
   else
   {
      cout << "Coordinates do not form a rectangle!\n"
         << "Use default values.\n";
      point1 = Point( 0.0, 1.0 );
      point2 = Point( 1.0, 1.0 );
      point3 = Point( 1.0, 0.0 );
      point4 = Point( 0.0, 0.0 );
   } // end else
} // end function setCoord

double Rectangle::length()
{
   double side1 = fabs( point4.getY() - point1.getY() ); // get side1
   double side2 = fabs( point2.getX() - point1.getX() ); // get side2
   double length = ( side1 > side2 ? side1 : side2 );
   return length;
} // end function length

double Rectangle::width()
{
   double side1 = fabs( point4.getY() - point1.getY() ); // get side1
   double side2 = fabs( point2.getX() - point1.getX() ); // get side2
   double width = ( side1 < side2 ? side1 : side2 );
   return width;
} // end function width

void Rectangle::perimeter()
{
   cout << fixed << "\nThe perimeter is: " << setprecision( 1 )
        << 2 * ( length() + width() ) << endl; 
} // end function perimeter

void Rectangle::area()
{
   cout << fixed << "The area is: " << setprecision( 1 ) 
      << length() * width() << endl;
} // end function area

bool Rectangle::square() 
{
   return length() == width();
} // end function square

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


