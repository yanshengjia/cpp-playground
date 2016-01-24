// Exercise 13.13 Solution: ex13_13.cpp
// Driver to test Shape hierarchy
#include <iostream> 
#include <vector>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"
using namespace std;

int main()
{
   // create vector shapes
   vector < Shape * > shapes( 4 );

   // initialize vector with Shapes
   shapes[ 0 ] = new Circle( 3.5, 6, 9 );
   shapes[ 1 ] = new Square( 12, 2, 2 );
   shapes[ 2 ] = new Sphere( 5, 1.5, 4.5 );
   shapes[ 3 ] = new Cube( 2.2 );
   
   // output Shape objects and display area and volume as appropriate
   for ( int i = 0; i < 4; i++ )
   {
      cout << *shapes[ i ] << endl;

      // downcast pointer
      TwoDimensionalShape *twoDimensionalShapePtr =
         dynamic_cast < TwoDimensionalShape * > ( shapes[ i ] );

      // if Shape is a TwoDimensionalShape, display its area
      if ( twoDimensionalShapePtr != 0 )
         cout << "Area: " << twoDimensionalShapePtr->getArea() << endl;

      // downcast pointer
      ThreeDimensionalShape *threeDimensionalShapePtr =
         dynamic_cast < ThreeDimensionalShape * > ( shapes[ i ] );

      // if Shape is a ThreeDimensionalShape, display its area and volume
      if ( threeDimensionalShapePtr != 0 )
         cout << "Area: " << threeDimensionalShapePtr->getArea()
            << "\nVolume: " << threeDimensionalShapePtr->getVolume() 
            << endl;

      cout << endl;
   } // end for
} // end main


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
