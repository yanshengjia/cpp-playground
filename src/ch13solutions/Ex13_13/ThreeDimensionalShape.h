// Exercise 13.13 Solution: ThreeDimensionalShape.h
// Definition of class ThreeDimensionalShape
#ifndef THREEDIM_H
#define THREEDIM_H

#include "Shape.h"

class ThreeDimensionalShape : public Shape 
{
public:  
   // default constructor
   ThreeDimensionalShape( double x, double y ) : Shape( x, y ) { }
   
   virtual double getArea() const = 0; // area of 3-dimensional shape
   virtual double getVolume() const = 0; // volume of 3-dimensional shape
}; // end class ThreeDimensionalShape

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
