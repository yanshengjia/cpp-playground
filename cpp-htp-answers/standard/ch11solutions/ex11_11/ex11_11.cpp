// Exercise 11.11 Solution: ex11_11.cpp
// Polynomial test program.
#include <iostream> 
#include "Polynomial.h"
using namespace std;

int main()
{
   Polynomial a, b, c, t;

   a.enterTerms();
   b.enterTerms();
   t = a;   // save the value of a
   cout << "First polynomial is:\n";
   a.printPolynomial();
   cout << "Second polynomial is:\n";
   b.printPolynomial();
   cout << "\nAdding the polynomials yields:\n";
   c = a + b;
   c.printPolynomial();
   cout << "\n+= the polynomials yields:\n";
   a += b;
   a.printPolynomial();
   cout << "\nSubtracting the polynomials yields:\n";
   a = t;  // reset a to original value
   c = a - b;
   c.printPolynomial();
   cout << "\n-= the polynomials yields:\n";
   a -= b;
   a.printPolynomial();
   cout << "\nMultiplying the polynomials yields:\n";
   a = t;  // reset a to original value
   c = a * b;
   c.printPolynomial();
   cout << "\n*= the polynomials yields:\n";
   a *= b;
   a.printPolynomial();
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
