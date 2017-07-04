// Exercise 13.13 Solution: Cube.h
// Definition of class Cube
#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape 
{
public:
   // default constructor
   Cube( double = 0.0, double = 0.0, double = 0.0 );  

   virtual double getArea() const; // return area of Cube object
   virtual double getVolume() const; // return volume of Cube object
   double getSideLength() const; // return length of sides 
   void print() const; // output Cube object
private:
   double sideLength; // length of sides of Cube
}; // end class Cube

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
