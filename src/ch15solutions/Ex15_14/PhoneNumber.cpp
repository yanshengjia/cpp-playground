// Exercise 15.14 Solution: PhoneNumber.cpp
// Member function definition of class PhoneNumber
#include <iostream> 
#include <cstdlib>
#include <cstring>
#include "PhoneNumber.h"
using namespace std;

// PhoneNumber default constructor
PhoneNumber::PhoneNumber()
{
   // set all char arrays to null character
   phone[ 0 ] = '\0';
   areaCode[ 0 ] = '\0';
   exchange[ 0 ] = '\0';
   line[ 0 ] = '\0';
} // end PhoneNumber constructor

// overloaded << operator
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
   // display PhoneNumber
   output << "(" << number.areaCode << ") " << number.exchange
        << "-" << number.line << '\n';
   return output; // return ostream reference
} // end overloaded << operator

// overloaded >> operator
istream &operator>>( istream &input, PhoneNumber &number )
{
   // get phone number from input stream
   input.getline( number.phone, 15 );

   // validate length of PhoneNumber
   if ( strlen( number.phone ) != 14 )
      input.clear( ios::failbit );

   // validate ( ) and -
   if ( number.phone[ 0 ] != '(' || number.phone[ 4 ] != ')' ||
      number.phone[ 9 ] != '-' )
      input.clear( ios::failbit );

   // validate first digit of area code and exchange
   if ( number.phone[ 1 ] == '0' || number.phone[ 6 ] == '0' ||
        number.phone[ 1 ] == '1' || number.phone[ 6 ] == '1')
      input.clear( ios::failbit );

   // validate middle digit of area code
   if ( number.phone[ 2 ] != '0' && number.phone[ 2 ] != '1' )
      input.clear( ios::failbit );

   // if phone number is valid, set exchange and area code members
   if ( !input.fail() ) 
   {
      int loop;

      for ( loop = 0; loop <= 2; loop++ ) 
      {
         number.areaCode[ loop ] = number.phone[ loop + 1 ];
         number.exchange[ loop ] = number.phone[ loop + 6 ];
      } // end for

      // place null-terminating character at end of area code and exchange
      number.areaCode[ loop ] = number.exchange[ loop ] = '\0';

      // set line class member
      for ( loop = 0; loop <= 3; loop++ )
         number.line[ loop ] = number.phone[ loop + 10 ];

      // place null-terminating character at end of line array
      number.line[ loop ] = '\0';
   } // end if

   // if phone number is invalid, tell user and terminate application
   else 
   {
      cerr << "Invalid phone number entered.\n";
      exit( 1 ); 
   } // end else

   return input; // return istream reference
} // end overloaded >> operator

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
