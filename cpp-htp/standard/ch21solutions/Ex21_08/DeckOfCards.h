// Exercise 21.8 Solution: DeckOfCards.h
// Definition of class DeckOfCards that 
// represents a deck of playing cards.

// BitCard structure definition with bit fields
struct BitCard                                 
{                                              
   unsigned face : 4; // 4 bits; 0-15          
   unsigned suit : 2; // 2 bits; 0-3           
   unsigned color : 1; // 1 bit; 0-1           
}; // end struct BitCard                       

// DeckOfCards class definition
class DeckOfCards
{
public:
   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffle cards in deck
   void deal(); // deals cards in deck
private:
   BitCard deck[ 52 ]; // represents deck of cards
}; // end class DeckOfCards


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
