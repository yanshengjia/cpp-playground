// Exercise 11.8 Solution: Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include "Complex.h"
using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart )
   : real( realPart ),
   imaginary( imaginaryPart )
{
   // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real,
      imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real,
      imaginary - operand2.imaginary );
} // end function operator-

// Overloaded multiplication operator
Complex Complex::operator*( const Complex &operand2 ) const
{
   return Complex(
      ( real * operand2.real ) + ( imaginary * operand2.imaginary ),
      ( real * operand2.imaginary ) + ( imaginary * operand2.real ) );
} // end function operator*

// Overloaded = operator
Complex& Complex::operator=( const Complex &right )
{
   real = right.real;
   imaginary = right.imaginary;
   return *this;   // enables concatenation
} // end function operator=

bool Complex::operator==( const Complex &right ) const
{ 
   return ( right.real == real ) && ( right.imaginary == imaginary );
} // end function operator== 

bool Complex::operator!=( const Complex &right ) const
{
   return !( *this == right ); 
} // end function operator!=

ostream& operator<<( ostream &output, const Complex &complex )
{
   output << "(" << complex.real << ", " << complex.imaginary << ")";
   return output;
} // end function operator<<

istream& operator>>( istream &input, Complex &complex )
{
   input.ignore(); // skip (
   input >> complex.real;
   input.ignore( 2 ); // skip ',' and space
   input >> complex.imaginary;
   input.ignore(); // skip )
   return input;
} // end function operator>>




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
