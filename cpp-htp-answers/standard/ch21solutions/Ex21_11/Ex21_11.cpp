// Exercise 21.11 Solution: ex21_11.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

unsigned packCharacters( char, char );
void displayBits( unsigned );

int main()
{
   char a;
   char b;
   unsigned result;

   cout << "Enter two characters: ";
   cin >> a >> b;

   cout << "\n\'" << a << '\'' << " in bits as an unsigned integer is:\n";
   displayBits( a );

   cout << '\'' << b << '\'' << " in bits as an unsigned integer is:\n";
   displayBits( b );

   result = packCharacters( a, b );

   cout << "\n\'" << a << '\'' << " and " << '\'' << b << '\''
      << " packed in an unsigned integer:\n";
   displayBits( result );
} // end main

// pack two character value into unsigned integer
unsigned packCharacters( char x, char y )
{
   unsigned pack = x;
   pack <<= 8; // left shift assignment operator
   pack |= y; // bitwise exclusive-OR operator
   return pack;
} // end function packCharacters

// display the bits in value
void displayBits( unsigned value )
{
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1 << SHIFT;

   cout << setw( 7 ) << value << " = ";
	
   for ( unsigned c = 1; c <= SHIFT + 1; c++ )
   {
      cout << ( value & MASK ? '1' : '0' );
      value <<= 1;
	
      if ( c % 8 == 0 ) // output a space after 8 bits
         cout << ' ';
   } // end for 
	
   cout << endl;
} // end function displayBits


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
