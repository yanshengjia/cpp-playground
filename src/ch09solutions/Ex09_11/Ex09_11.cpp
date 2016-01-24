// Exercise 9.11 Solution: Ex09_11.cpp
#include <iostream> 
#include <iomanip> 
#include "Rectangle.h" // include definition of class Rectangle
using namespace std;

int main()
{
   Rectangle a, b( 4.0, 5.0 ), c( 67.0, 888.0 );
                                                 
   cout << fixed;
   cout << setprecision( 1 );
   
   // output Rectangle a
   cout << "a: length = " << a.getLength() << "; width = " 
      << a.getWidth() << "; perimeter = " << a.perimeter() 
      << "; area = " << a.area() << '\n';

   // output Rectangle b
   cout << "b: length = " << b.getLength() << "; width = " 
      << b.getWidth() << "; perimeter = " << b.perimeter() 
      << "; area = " << b.area() << '\n';

   // output Rectangle c; bad values attempted
   cout << "c: length = " << c.getLength() << "; width = " 
      << c.getWidth() << "; perimeter = " << c.perimeter()
      << "; area = " << c.area() << endl;
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


