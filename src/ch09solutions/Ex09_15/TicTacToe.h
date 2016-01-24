// Exercise 9.15 Solution: TicTacToe.h
#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe 
{
private:  
   enum Status { WIN, DRAW, CONTINUE }; // enumeration constants
   int board[ 3 ][ 3 ];
public:
   TicTacToe(); // default constructor
   void makeMove(); // make move
   void printBoard(); // print board
   bool validMove( int, int ); // validate move
   bool xoMove( int ); // x o move 
   Status gameStatus(); // game status
}; // end class TicTacToe

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


