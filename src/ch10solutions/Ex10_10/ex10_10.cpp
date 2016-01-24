// Exercise 10.10 Solution: ex10_10.cpp
// Card shuffling and dealing program.
#include <iostream>
#include <iomanip>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

int main()
{
   DeckOfCards myDeckOfCards;
   myDeckOfCards.shuffle(); // place Cards in random order

   // print all 52 Cards in the order in which they are dealt
   for ( int i = 1; myDeckOfCards.moreCards(); i++ )
   {
      // deal and display a Card
      cout << left << setw( 19 ) << myDeckOfCards.dealCard().toString();

      if ( i % 4 == 0 ) // output newline every 4 cards
         cout << endl;
   } // end for
} // end main


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
