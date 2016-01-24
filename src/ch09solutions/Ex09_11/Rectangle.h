// Exercise 9.11 Solution: Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle 
{
public:
   Rectangle( double = 1.0, double = 1.0 ); // default constructor
   void setWidth( double w ); // set width
   void setLength( double l ); // set length
   double getWidth(); // get width
   double getLength(); // get length  
   double perimeter(); // perimeter
   double area(); // area
private:
   double length; // 1.0 < length < 20.0
   double width; // 1.0 < width < 20.0
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


