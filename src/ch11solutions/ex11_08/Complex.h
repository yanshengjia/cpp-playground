// Exercise 11.8 Solution: Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
   friend ostream &operator<<( ostream &, const Complex & );
   friend istream &operator>>( istream &, Complex & );
public:
   Complex( double = 0.0, double = 0.0 ); // constructor
   Complex operator+( const Complex& ) const; // addition
   Complex operator-( const Complex& ) const; // subtraction
   Complex operator*( const Complex& ) const; // multiplication
   Complex& operator=( const Complex& ); // assignment
   bool operator==( const Complex& ) const;
   bool operator!=( const Complex& ) const;
private:
   double real; // real part
   double imaginary; // imaginary part
}; // end class Complex

#endif



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
