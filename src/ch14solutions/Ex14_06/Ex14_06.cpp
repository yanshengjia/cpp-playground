// Exercise 14.6 Solution: Ex14_06.cpp
// Combined solution to entire problem
#include <iostream> 
using namespace std;

// function template isEqualTo
template < typename T >
bool isEqualTo( const T &arg1, const T &arg2 ) 
{
   return arg1 == arg2;
} // end function isEqualTo

// class used to demonstrate overloading operators
// is necessary when using templates
class Complex 
{
   friend ostream &operator<<(ostream &, Complex &);
public:
   // constructor for Fraction
   Complex( int realPart, int iPart )
      : real( realPart ),
        imaginary( iPart )
   {
      // empty body
   } // end Complex constructor

   // Overloaded equality operator. If this is not provided, the
   // program will not compile.
   bool operator==( const Complex &right ) const
   { 
      return real == right.real && imaginary == right.imaginary; 
   } // end overloaded equality operator
private:
   int real; // real part of the complex number
   int imaginary; // imaginary part of the complex number
}; // end class Fraction

// overloaded << operator 
ostream &operator<<( ostream &out, Complex &obj )
{
   if ( obj.imaginary > 0 ) // positive imaginary
      out << obj.real << " + " << obj.imaginary << "i";
   else if ( obj.imaginary == 0 ) // zero imaginary
      out << obj.real;
   else // negative imaginary
      out << obj.real << " - " << -obj.imaginary << "i";

   return out;
} // end overloaded << operator

int main()
{
   int a; // integers used for
   int b; // testing equality

   // test if two ints input by user are equal
   cout << "Enter two integer values: ";
   cin >> a >> b;
   cout << a << " and " << b << " are "
      << ( isEqualTo( a, b ) ? "equal" : "not equal" ) << '\n';

   char c; // chars used for
   char d; // testing equality

   // test if two chars input by user are equal
   cout << "\nEnter two character values: ";
   cin >> c >> d;
   cout << c << " and " << d << " are "
      << ( isEqualTo( c, d ) ? "equal" : "not equal" ) << '\n';

   double e; // double values used for
   double f; // testing equality

   // test if two doubles input by user are equal
   cout << "\nEnter two double values: ";
   cin >> e >> f;
   cout << e << " and " << f << " are "
      << ( isEqualTo( e, f ) ? "equal" : "not equal") << '\n';

   Complex g( 10, 5 ); // Complex objects used
   Complex h( 10, 5 ); // for testing equality

   // test if two Complex objects are equal
   // uses overloaded << operator 
   cout << "\nThe class objects " << g << " and " << h << " are "
      << ( isEqualTo( g, h ) ? "equal" : "not equal" ) << '\n';
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
