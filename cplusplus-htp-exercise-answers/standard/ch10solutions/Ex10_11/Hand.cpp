// Exercise 10.11 Solution: Hand.cpp
// Stores and calculates attributes of a hand of cards.
#include <iostream>
#include "Hand.h"
using namespace std;

// constructor takes 5 cards from Deck; it assumes 5 cards are available
Hand::Hand( DeckOfCards &deck )
   : faceCount( Card::totalFaces )
{
   // get hand from deck
   for ( unsigned i = 0; i < 5; ++i )
      hand.push_back( deck.dealCard() );

   // count number of times each face appears (for later use)
   for ( unsigned i = 0; i < hand.size(); ++i )
      ++faceCount[ hand[ i ].getFace() ];
} // end constructor

// display contents of hand to standard output stream
void Hand::print() const
{
   cout << "Hand is:\n";
   for ( unsigned i = 0; i < hand.size(); ++i )
      cout << hand[ i ].toString() << '\n';
   cout << endl;
} // end function print

// determine if hand contains a pair
bool Hand::pair() const
{
   for ( unsigned i = 0; i < faceCount.size(); ++i )
      if ( faceCount[ i ] == 2 )
         return true;

   return false;
} // end function pair

// determine if hand contains two pairs
bool Hand::twoPair() const
{
   bool foundOne = false; // true if the first pair has been found

   for ( unsigned i = 0; i < faceCount.size(); ++i )
   {
      if ( faceCount[ i ] == 2 && foundOne )
         return true; // found both pairs
      else if ( faceCount[ i ] == 2 )
         foundOne = true; // found the first pair
   } // end for

   return false; // didn't find both pairs
} // end function twoPair

// determine if hand contains three of a kind
bool Hand::threeOfAKind() const
{
   for ( unsigned i = 0; i < faceCount.size(); ++i )
      if ( faceCount[ i ] == 3 )
         return true;

   return false;
} // end function threeOfAKind

// determine if hand contains four of a kind
bool Hand::fourOfAKind() const
{
   for ( unsigned i = 0; i < faceCount.size(); ++i )
      if ( faceCount[ i ] == 4 )
         return true;

   return false;
} // end function fourOfAKind

// determine if hand contains a flush
bool Hand::flush() const
{
   int suit = hand[ 0 ].getSuit();

   // search for any card that has a suit different from the first
   for ( unsigned i = 1; i < hand.size(); ++i )
      if ( hand[ i ].getSuit() != suit )
         return false;

   return true;
} // end function flush

// determine if hand contains a straight
bool Hand::straight() const
{
   vector< int > tmp = faceCount; // make a temporary copy of face count
   tmp.push_back( tmp[ 0 ] ); // ace can also be used as the high card

   // special case: ace-2-3-4-5 straight
   if ( tmp[ 0 ] == 1 && tmp[ 1 ] == 1 && tmp[ 2 ] == 1 &&
      tmp[ 3 ] == 1 && tmp[ 4 ] == 1 )
      return true;

   unsigned i = 1; // counter to hold current position

   // search for first non-zero face count
   while ( i < tmp.size() && tmp[ i ] == 0 )
      ++i;

   unsigned start = i; // save position

   // count consecutive frequencies of 1
   while ( i < tmp.size() && tmp[ i ] == 1 )
      ++i;

   return i == start + 5; // should have counted 5 faces with frequency 1
} // end function straight


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
