// Exercise 21.9 Solution: ex21_09.cpp
// Program that right-shifts an integer variable 4 bits.
#include <iostream> 
#include <iomanip> 
using namespace std;

void displayBits( unsigned ); // prototype

int main()
{
   unsigned val;

   cout << "Enter an integer: ";
   cin >> val;

   cout << "\nBefore right shifting 4 bits is:\n";
   displayBits( val );
   cout << "After right shifting 4 bits is:\n";
   displayBits( val >> 4 );
} // end main

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
