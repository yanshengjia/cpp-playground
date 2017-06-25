// Exercise 13.13 Solution: Sphere.h
// Definition of class Sphere
#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape 
{
public:
   // default constructor
   Sphere( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getArea() const; // return area of Sphere
   virtual double getVolume() const; // return volume of Sphere
   double getRadius() const; // return radius of Sphere
   void print() const; // output Sphere object
private:
   double radius; // radius of Sphere
}; // end class Sphere

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
