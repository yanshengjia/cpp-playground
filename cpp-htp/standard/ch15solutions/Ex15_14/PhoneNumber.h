// Exercise 15.14 Solution: PhoneNumber.h
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
using namespace std;

class PhoneNumber 
{
   // overloaded input and output operators
   friend ostream& operator<<( ostream&, const PhoneNumber& );
   friend istream& operator>>( istream&, PhoneNumber& );

public:
   PhoneNumber(); // default constructor
private:
   char phone[ 15 ]; // holds phone number
   char areaCode[ 4 ]; // holds area code
   char exchange[ 4 ]; // holds exchange
   char line[ 5 ]; // holds line
}; // end class PhoneNumber

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
