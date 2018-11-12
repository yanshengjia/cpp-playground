// Exercise 11.11 Solution: Polynomial.h
// Polynomial class definition.
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial
{
public:
   static const int maxTerms = 100; // maximum number of terms

   Polynomial();
   Polynomial operator+( const Polynomial & ) const; // addition
   Polynomial operator-( const Polynomial & ) const; // subtraction
   Polynomial operator*( const Polynomial & ) const; // multiplication
   Polynomial &operator=( const Polynomial & ); // assignment
   Polynomial &operator+=( const Polynomial & );
   Polynomial &operator-=( const Polynomial & );
   Polynomial &operator*=( const Polynomial & );
   void enterTerms();
   void printPolynomial() const;
   int getNumberOfTerms() const; // user can only retrieve value
   int getTermExponent( int ) const;
   int getTermCoefficient( int ) const;
   void setCoefficient( int, int ); // set coefficient of a specific term
   ~Polynomial(); // destructor
private:
   int numberOfTerms;
   int exponents[ maxTerms ]; // exponent array
   int coefficients[ maxTerms ]; // coefficients array
   static void polynomialCombine( Polynomial & ); // combine common terms
}; // end class Polynomial

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
