// Exercise 9.13 Solution: Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h" // include definition of class Point

class Rectangle 
{
public:
   // default constructor
   Rectangle( Point = Point( 0.0, 1.0 ), Point = Point( 1.0, 1.0 ),
      Point = Point( 1.0, 0.0 ), Point = Point( 0.0, 0.0 ), 
      char = '*', char = '*' );
   
   // sets x, y, x2, y2 coordinates
   void setCoord( Point, Point, Point, Point );
   double length(); // length
   double width(); // width
   void perimeter(); // perimeter
   void area(); // area
   bool square(); // square
   void draw(); // draw rectangle
   void setPerimeterCharacter( char ); // set perimeter character
   void setFillCharacter( char ); // set fill character
private:
   Point point1; 
   Point point2; 
   Point point3; 
   Point point4; 
   char fillCharacter;
   char perimeterCharacter;
}; // end class Rectangle 

#endif

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


