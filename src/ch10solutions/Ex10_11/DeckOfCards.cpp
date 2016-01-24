// Exercise 10.10 Solution: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

// DeckOfCards default constructor initializes deck
DeckOfCards::DeckOfCards()
{
   currentCard = 0; // set currentCard so first Card dealt is deck[ 0 ]

   // populate deck with Card objects
   for ( int i = 0; i < Card::totalFaces * Card::totalSuits; ++i )
   {
      Card card( i % Card::totalFaces, i / Card::totalFaces );
      deck.push_back( card ); // adds copy of card to the end of the deck
   } // end for

   srand( time( 0 ) ); // seed random number generator
} // end DeckOfCards default constructor

// shuffle cards in deck
void DeckOfCards::shuffle()
{
   // after shuffling, dealing should start at deck[ 0 ] again
   currentCard = 0; // reinitialize currentCard

   // for each Card, pick another random Card and swap them
   for ( unsigned first = 0; first < deck.size(); ++first )
   {
      // select a random number between 0 and 51
      unsigned second = rand() % deck.size();

      // swap current Card with randomly selected Card
      Card temp = deck[ first ];
      deck[ first ] = deck[ second ];
      deck[ second ] = temp;
   } // end for
} // end function shuffle

// deal cards in deck
Card DeckOfCards::dealCard()
{
   return deck[ currentCard++ ]; // return current Card in vector
} // end function dealCard

// Check if there are more cards in the deck
bool DeckOfCards::moreCards() const
{
   return currentCard < deck.size();
} // end function moreCards


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
