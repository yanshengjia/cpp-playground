// Exercise 21.31 Solution: ex21_31.cpp
#include <iostream> 
using namespace std;

// prototypes
int isDigit( int );
int isAlpha( int );
int isAlNum( int );
int isLower( int );
int isUpper( int );
int isSpace( int );
int isPunct( int );
int isPrint( int );
int isGraph( int );
int toLower( int );
int toUpper( int );

int main()
{
   int v;
   char a; // hold a character
   char header[] = "According to";
   char *names[] = { "isDigit", "isAlpha", "isAlNum", "isLower",
      "isUpper", "isSpace", "isPunct", "isPrint", "isGraph", 
      "toLower", "toUpper" };
   char *names2[] = { "digit", "letter", "letter/digit", "lowercase",
       "uppercase", "space", "punctuation", "print", "graph",
       "converted lowercase", "converted uppercase" };
   int ( *f[] )( int ) = { isDigit, isAlpha, isAlNum, isLower,
       isUpper, isSpace, isPunct, isPrint,
       isGraph, toLower, toUpper };

   cout << "Enter a character: ";
   cin >> a;

   for ( int k = 0; k < 11; ++k )
   {
      v = ( *f[ k ] )( static_cast< int >( a ) );
      cout.write( header, 13 );
      cout << names[ k ] << ", " << a << ( !v ? " is not a " : " is a " ) 
         << names2[ k ] << " character\n";
   } // end for
} // end main

// Normally these would return bool, but int return type
// is consistent with the ctype library.

// determine whether c is an integer
int isDigit( int c )
{
   return ( c >= 48 && c <= 57 ) ? 1 : 0;
} // end function isDigit

// return true if c is a letter
int isAlpha( int c )
{
   return ( ( c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122 ) ) ? 1 : 0;
} // end function is Alpha

// return true if c is a digit
int isAlNum( int c )
{
   return ( isDigit( c ) == 1 || isAlpha( c ) == 1 ) ? 1 : 0;
} // end function isAlNum

// return true if c is lowercase letter
int isLower( int c )
{
   return ( c >= 97 && c <= 122 ) ? 1 : 0;
} // end function isLower

// return true if c is uppercase letter
int isUpper( int c )
{
   return ( c >= 65 && c <= 90 ) ? 1 : 0;
} // end function isUpper

// return true if c is whitespace character
int isSpace( int c )
{
   return ( ( c == 32 ) || ( c >= 9 && c <= 13 ) ) ? 1 : 0;
} // end function isSpace

// return true if c is a printing character other than a space
int isPunct( int c )
{
   return ( isAlNum( c ) == 0 && isSpace( c ) == 0 ) ? 1 : 0;
} // end function isPunct

// return true value if c is a printing variable including space
int isPrint( int c )
{
   return ( c >= 32 && c <= 126 ) ? 1 : 0;
} // end function isPrint

// return true if c is a printing character other than space
int isGraph( int c )
{
   return ( c >= 33 && c <= 126 ) ? 1 : 0;
} // end function isGraph

// convert to lowercase
int toLower( int c )
{
   return ( isUpper( c ) == 1 ) ? c + 32 : c;
} // end function toLower

// convert to uppercase
int toUpper( int c )
{
   return ( isLower( c ) == 1 ) ? c - 32 : c;
} // end function toUpper


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
 *************************************************************************/
