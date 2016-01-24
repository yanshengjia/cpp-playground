// Exercise 21.8 Solution: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

// no-argument DeckOfCards constructor intializes deck
DeckOfCards::DeckOfCards()
{
   for ( int i = 0; i <= 51; i++ ) 
   {
      deck[ i ].face = i % 13; // faces in order  
      deck[ i ].suit = i / 13; // suits in order  
      deck[ i ].color = i / 26; // colors in order
   } // end for
} // end no-argument DeckOfCards constructor

// shuffle cards in deck
void DeckOfCards::shuffle()
{
   // shuffle cards randomly
   for ( int i = 0; i < 52; i++ ) 
   {
      int j = rand() % 52;
      BitCard temp = deck[ i ];
      deck[ i ] = deck[ j ];
      deck[ j ] = temp;     
   } // end for
} // end function shuffle

// deal cards in deck
void DeckOfCards::deal()
{
   char *face[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", 
      "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
   char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
   char *color[] = { "Red", "Black" };

   for ( int i = 0; i < 52; i++ ) 
   {
      cout << right << setw( 5 ) << color[ deck[ i ].color ] << ": "
         << setw( 8 ) << face[ deck[ i ].face ] << " of " 
         << left << setw( 8 ) << suit[ deck[ i ].suit ]
         << ( ( i + 1 ) % 2 ? '\t' : '\n' );
   } // end for 
} // end function deal


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
