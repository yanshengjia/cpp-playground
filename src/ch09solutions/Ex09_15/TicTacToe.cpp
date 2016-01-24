// Exercise 9.15 Solution: TicTacToe.cpp
// Member-function definitions for class TicTacToe.
#include <iostream> 
#include <iomanip> 
#include "TicTacToe.h" // include definition of class TicTacToe
using namespace std;

TicTacToe::TicTacToe()
{
   for ( int j = 0; j < 3; j++ ) // initialize board

      for ( int k = 0; k < 3; k++ )
         board[ j ][ k ] = ' ';
} // end TicTacToe constructor

bool TicTacToe::validMove( int r, int c )
{
   return r >= 0 && r < 3 && c >= 0 && c < 3 && board[ r ][ c ] == ' ';
} // end function validMove

// must specify that type Status is part of the TicTacToe class.
TicTacToe::Status TicTacToe::gameStatus()
{   
   int a;

   // check for a win on diagonals
   if ( board[ 0 ][ 0 ] != ' ' && board[ 0 ][ 0 ] == board[ 1 ][ 1 ] &&
       board[ 0 ][ 0 ] == board[ 2 ][ 2 ] )
      return WIN;
   else if ( board[ 2 ][ 0 ] != ' ' && board[ 2 ][ 0 ] == 
      board[ 1 ][ 1 ] && board[ 2 ][ 0 ] == board[ 0 ][ 2 ] )
      return WIN;

   // check for win in rows
   for ( a = 0; a < 3; ++a )

      if ( board[ a ][ 0 ] != ' ' && board[ a ][ 0 ] == 
         board[ a ][ 1 ] && board[ a ][ 0 ] == board[ a ][ 2 ] )
         return WIN;

   // check for win in columns
   for ( a = 0; a < 3; ++a )

      if ( board[ 0 ][ a ] != ' ' && board[ 0 ][ a ] == 
         board[ 1 ][ a ] && board[ 0 ][ a ] == board[ 2 ][ a ] )
         return WIN;

   // check for a completed game
   for ( int r = 0; r < 3; ++r )

      for ( int c = 0; c < 3; ++c )

         if ( board[ r ][ c ] == ' ' )
            return CONTINUE; // game is not finished

   return DRAW; // game is a draw
} // end function gameStatus

void TicTacToe::printBoard() 
{
   cout << "   0    1    2\n\n";

   for ( int r = 0; r < 3; ++r ) 
   {
      cout << r;

      for ( int c = 0; c < 3; ++c ) 
      {
         cout << setw( 3 ) << static_cast< char > ( board[ r ][ c ] );

         if ( c != 2 )
            cout << " |";
      } // end for

      if ( r != 2 )
         cout << "\n ____|____|____\n     |    |    \n";
   } // end for

   cout << "\n\n";
} // end function printBoard

void TicTacToe::makeMove()
{
   printBoard();

   while ( true ) 
   {
      if ( xoMove( 'X' ) )
         break;
      else if ( xoMove( 'O' ) )
         break;
   } // end while structure
} // end function makeMove

bool TicTacToe::xoMove( int symbol )
{
   int x;
   int y;

   do 
   {
      cout << "Player " << static_cast< char >( symbol ) 
         << " enter move: ";
      cin >> x >> y;
      cout << '\n';
   } while ( !validMove( x, y ) );

   board[ x ][ y ] = symbol;
   printBoard();
   Status xoStatus = gameStatus();

   if ( xoStatus == WIN ) 
   {
      cout << "Player " << static_cast< char >( symbol ) << " wins!\n";
      return true;
   } // end if
   else if ( xoStatus == DRAW ) 
   {
      cout << "Game is a draw.\n";
      return true;
   } // end else if
   else // CONTINUE
      return false;   
} // end function xoMove

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


