// Exercise 21.15 Solution: ex21_15.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

// prototypes
void reverseBits( unsigned * const );
void displayBits( unsigned );

int main()
{
   unsigned a;
   
   cout << "Enter an unsigned integer: ";
   cin >> a;

   // before call to reverseBits
   cout << "\nBefore bits are reversed:\n";
   displayBits( a );

   // after call to reverseBits
   reverseBits( &a );
   cout << "\nAfter bits are reversed:\n";
   displayBits( a );
} // end main

// reverse the bits
void reverseBits( unsigned * const vPtr )
{
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1;
   unsigned	value = *vPtr;
   
   for ( int i = 0; i <= SHIFT; i++ )
   {
      *vPtr <<= 1; // left shift the pointer
      *vPtr |= ( value & MASK ); // inclusive-OR operator
      value >>= 1; // right shift
   } // end for
} // end function reverseBits

// display the bits
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
