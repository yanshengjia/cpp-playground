// Exercise 9.6 Solution: Rational.h
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational 
{
public:
   Rational( int = 0, int = 1 ); // default constructor
   Rational addition( const Rational & ); // function addition
   Rational subtraction( const Rational & ); // function subtraction
   Rational multiplication( const Rational & ); // function multi.
   Rational division( const Rational & ); // function division
   void printRational (); // print rational format
   void printRationalAsDouble(); // print rational as double format
private:
   int numerator; // integer numerator	
   int denominator; // integer denominator
   void reduction(); // utility function
}; // end class Rational

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


