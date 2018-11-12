// Exercise 13.13 Solution: Shape.h
// Definition of base-class Shape
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
   friend ostream & operator<<( ostream &, Shape & );
public:
   Shape( double = 0.0, double = 0.0 ); // default constructor
   double getCenterX() const; // return x from coordinate pair
   double getCenterY() const; // return y from coordinate pair
   virtual void print() const = 0; // output Shape object
protected:
   double xCenter; // x part of coordinate pair
   double yCenter; // y part of coordinate pair
}; // end class Shape

#endif



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
