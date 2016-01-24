// Exercise 10.10 Solution: DeckOfCards.h
// Class DeckOfCards represents a deck of 52 playing cards.
#ifndef DECK_OF_CARDS_H
#define DECK_OF_CARDS_H

#include <vector>
#include "Card.h"
using namespace std;

// DeckOfCards class definition
class DeckOfCards
{
public:
   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffles cards in deck
   Card dealCard(); // deals cards in deck
   bool moreCards() const; // are there any more cards left
private:
   vector< Card > deck; // represents deck of cards
   unsigned currentCard; // index of next card to be dealt
}; // end class DeckOfCards

#endif


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

