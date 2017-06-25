// Exercise 9.14 Solution: HugeInteger.h
// HugeInteger class definition.
#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <string>
using namespace std;

class HugeInteger 
{
public:
   HugeInteger( long = 0 ); // conversion/default constructor
   HugeInteger( const string & ); // copy constructor

   // addition operator; HugeInteger + HugeInteger
   HugeInteger add( HugeInteger );

   // addition operator; HugeInteger + int
   HugeInteger add( int );            

   // addition operator; 
   // HugeInteger + string that represents large integer value
   HugeInteger add( const string & );    

   // subtraction operator; HugeInteger - HugeInteger
   HugeInteger subtract( HugeInteger ); 

   // subtraction operator; HugeInteger - int
   HugeInteger subtract( int ); 

   // subtraction operator; 
   // HugeInteger - string that represents large integer value
   HugeInteger subtract( const string & ); 

   bool isEqualTo( HugeInteger ); // is equal to
   bool isNotEqualTo( HugeInteger ); // not equal to
   bool isGreaterThan( HugeInteger ); // greater than
   bool isLessThan( HugeInteger ); // less than
   bool isGreaterThanOrEqualTo( HugeInteger ); // greater than 
                                               // or equal to
   bool isLessThanOrEqualTo( HugeInteger ); // less than or equal
   bool isZero(); // is zero
   void input( const string & ); // input
   void output(); // output   
private:
   short integer[ 40 ]; // 40 element array
}; // end class HugeInteger

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


