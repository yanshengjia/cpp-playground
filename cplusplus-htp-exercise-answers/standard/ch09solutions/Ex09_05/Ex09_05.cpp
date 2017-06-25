// Exercise 9.5 Solution: Ex09_05.cpp
#include <iostream> 
#include "Complex.h"
using namespace std;

int main()
{
   Complex a( 1, 7 ), b( 9, 2 ), c; // create three Complex objects 

   a.printComplex(); // output object a
   cout << " + ";
   b.printComplex(); // output object b
   cout << " = ";
   c = a.add( b ); // invoke add function and assign to object c
   c.printComplex(); // output object c

   cout << '\n';
   a.setComplexNumber( 10, 1 ); // reset realPart and 
   b.setComplexNumber( 11, 5 ); // and imaginaryPart  
   a.printComplex(); // output object a
   cout << " - ";
   b.printComplex(); // output object b 
   cout << " = ";  
   c = a.subtract( b ); // invoke add function and assign to object c
   c.printComplex(); // output object c
   cout << endl;
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


