// Exercise 10.11 Solution: ex10_11.cpp
// Card shuffling and dealing program.
#include <iostream>
#include <iomanip>
#include "DeckOfCards.h" // DeckOfCards class definition
#include "Hand.h" // Hand class definition
using namespace std;

int main()
{
   DeckOfCards myDeckOfCards;
   myDeckOfCards.shuffle(); // place Cards in random order

   Hand hand( myDeckOfCards ); // deal a hand from the deck
   hand.print(); // display hand

   // check for each type of hand by decreasing ranking
   if ( hand.fourOfAKind() )
      cout << "Hand contains four of a kind" << endl;
   else if ( hand.flush() )
      cout << "Hand contains a flush" << endl;
   else if ( hand.straight() )
      cout << "Hand contains a straight" << endl;
   else if ( hand.threeOfAKind() )
      cout << "Hand contains three of a kind" << endl;
   else if ( hand.twoPair() )
      cout << "Hand contains two pairs" << endl;
   else if ( hand.pair() )
      cout << "Hand contains a pair" << endl;
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
