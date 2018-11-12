// Exercise 9.13 Solution: Ex09_13.cpp
#include "Rectangle.h" // include definition of class Rectangle

int main()
{
   Point point1( 12.0, 12.0 );
   Point point2( 18.0, 12.0 );
   Point point3( 18.0, 20.0 );
   Point point4( 12.0, 20.0 );
   Rectangle rectangle( point1, point2, point3, point4, '?', '*' ); 
   rectangle.draw(); // invokes function draw
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


