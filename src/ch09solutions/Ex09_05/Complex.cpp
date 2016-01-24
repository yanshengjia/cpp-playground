// Exercise 9.5 Solution: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream> 
#include "Complex.h"
using namespace std;

Complex::Complex( double real, double imaginary )
{ 
   setComplexNumber( real, imaginary ); 
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   return Complex( 
      realPart + right.realPart, imaginaryPart + right.imaginaryPart );
} // end function add

Complex Complex::subtract( const Complex &right )
{
   return Complex( 
      realPart - right.realPart, imaginaryPart - right.imaginaryPart );
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip ) 
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber 

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


