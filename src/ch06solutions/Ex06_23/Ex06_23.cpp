// Exercise 6.23 Solution: Ex06_23.cpp
// Displays a solid square of input character.
#include <iostream>
using namespace std;

void square( int, char ); // function prototype

int main()
{
   int side; // input side length
   char character; // fill character

   cout << "Enter a character and the side length: ";
   cin >> character >> side;
   cout << '\n';

   square( side, character ); // display solid square of input character
   cout << endl;
} // end main

// square displays solid square of fillCharacter with specified side
void square( int side, char fillCharacter )
{
   // loop side times for number of rows
   for ( int row = 1; row <= side; row++ ) 
   {
      // loop side times for number of columns
      for ( int col = 1; col <= side; col++ )
         cout << fillCharacter;

      cout << '\n';
   } // end for
} // end function square

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
