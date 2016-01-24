// Exercise 21.12 Solution: ex21_12.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

// prototypes
void unpackCharacters( char * const, char * const, unsigned );
void displayBits( unsigned );

int main()
{
   char a;
   char b;
   unsigned packed = 16706;
   
   cout << "The packed character representation is:\n";
   displayBits( packed );

   // demonstrate unpacking of characters  
   unpackCharacters( &a, &b, packed );
   cout << "\nThe unpacked characters are \'" << a << "\' and \'" << b 
      << "\'\n";
   displayBits( a );
   displayBits( b );
} // end main

// take apart the characters
void unpackCharacters( char * const aPtr, char * const bPtr, 
   unsigned pack )
{
   unsigned mask1 = 65280;
   unsigned mask2 = 255;
   
   *aPtr = static_cast< char >( ( pack & mask1 ) >> 8 );
   *bPtr = static_cast< char >( pack & mask2 );
} // end function unpackCharacters

// display the bits of value
void displayBits( unsigned value )
{
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1 << SHIFT;

   cout << setw( 7 ) << value << " = ";
	
   for ( unsigned c = 1; c <= SHIFT + 1; c++ )
   {
      cout << ( value & MASK ? '1' : '0' );
      value <<= 1;
	
      if ( c % 8 == 0 ) 
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
