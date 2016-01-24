// Exercise 7.27 Part A Solution: Ex07_27.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

bool queenCheck( const char [][ 8 ], int, int );
void placeQueens( char [][ 8 ] );
void printBoard( const char [][ 8 ] );
void xConflictSquares( char [][ 8 ], int, int );
void xDiagonals( char [][ 8 ], int, int );
bool availableSquare( const char [][ 8 ] );
inline int validMove( const char board[][ 8 ], int row, int col )
{ 
   return ( row >= 0 && row < 8 && col >= 0 && col < 8 );
} // end function validMove

int main()
{
   char board [ 8 ][ 8 ] = { '\0' };

   srand( time( 0 ) );

   placeQueens( board ); // try to place queens on board
   printBoard( board ); // print board
} // end main

// function to determine if there are available squares
bool availableSquare( const char board[][ 8 ] )
{
   // test if squares are open
   for ( int row = 0; row < 8; ++row )
   {
      for ( int col = 0; col < 8; ++col )
      {
         if ( board[ row ][ col ] == '\0' )
            return false; // at least one open square is available
      } // end for
   } // end for

   return true; // no available squares
} // end function availableSquare

// function to try to put queens on board
void placeQueens( char board[][ 8 ] )
{
   const char QUEEN = 'Q';
   int rowMove;
   int colMove;
   int queens = 0;
   bool done = false;

   while ( queens < 8 && !done ) 
   {
      rowMove = rand() % 8;
      colMove = rand() % 8;

      // test if queen can be placed on board
      if ( queenCheck( board, rowMove, colMove ) ) 
      {
         board[ rowMove ][ colMove ] = QUEEN;
         xConflictSquares( board, rowMove, colMove );
         queens++;
      } // end if

      // determine if there are available squares
      done = availableSquare( board );
   } // end while
} // end function placeQueens

// function to mark occupied rows, columns and diagonals
void xConflictSquares( char board[][ 8 ], int row, int col )
{
   // loop through board    
   for ( int loop = 0; loop < 8; ++loop ) 
   {
      // place an '*' in the row occupied by the queen
      if ( board[ row ][ loop ] == '\0' )
         board[ row ][ loop ] = '*';

      // place an '*' in the col occupied by the queen
      if ( board[ loop ][ col ] == '\0' )
         board[ loop ][ col ] = '*';
   } // end for

   // place an '*' in the diagonals occupied by the queen
   xDiagonals( board, row, col );
} // end function xConflictSquares 

// function to determine if row, column, diagonal is occupied
bool queenCheck( const char board[][ 8 ], int row, int col )
{
   int r = row;
   int c = col;

   // check row and column for a queen
   for ( int d = 0; d < 8; d++ )
   {
      if ( board[ row ][ d ] == 'Q' || board[ d ][ col ] == 'Q' )
         return false;
   } // end for

   // check upper left diagonal for a queen
   for ( int e = 0; e < 8 && validMove( board, --r, --c ); e++ )
   {
      if ( board[ r ][ c ] == 'Q' )
         return false;
   } // end for

   r = row;
   c = col;

   // check upper right diagonal for a queen
   for ( int f = 0; f < 8 && validMove( board, --r, ++c ); f++ )
   {
      if ( board[ r ][ c ] == 'Q' )
         return false;
   } // end for

   r = row;
   c = col;

   // check lower left diagonal for a queen
   for ( int g = 0; g < 8 && validMove( board, ++r, --c ); g++ )
   {
      if (board[ r ][ c ] == 'Q' )
         return false;
   } // end for

   r = row;
   c = col;

   // check lower right diagonal for a queen
   for ( int h = 0; h < 8 && validMove( board, ++r, ++c ); h++ )
   {
      if ( board[ r ][ c ] == 'Q' )
         return false;
   } // end for

   return true; // no queen in conflict
} // end function queenCheck

void xDiagonals( char board[][ 8 ], int row, int col )
{
   int r = row, c = col;

   // upper left diagonal
   for ( int a = 0; a < 8 && validMove( board, --r, --c ); a++ )
      board[ r ][ c ] = '*';

   r = row;
   c = col;

   // upper right diagonal
   for ( int b = 0; b < 8 && validMove( board, --r, ++c ); b++ )
      board[ r ][ c ] = '*';

   r = row;
   c = col;

   // lower left diagonal
   for ( int d = 0; d < 8 && validMove( board, ++r, --c ); d++ )
      board[ r ][ c ] = '*';

   r = row;
   c = col;

   // lower right diagonal
   for ( int e = 0; e < 8 && validMove( board, ++r, ++c ); e++ )
      board[ r ][ c ] = '*';
} // end function xDiagonals

// function to print chess board
void printBoard( const char board[][ 8 ] )
{
   int queens = 0;

   cout << "   0 1 2 3 4 5 6 7\n"; // header for columns

   // print squares of board
   for ( int r = 0; r < 8; r++ ) 
   {
      cout << setw( 2 ) << r << ' ';

      for ( int c = 0; c < 8; c++ ) 
      {
         cout << board[ r ][ c ] << ' ';

         if ( board[ r ][ c ] == 'Q' )
            queens++;
      } // ind inner for

      cout << '\n';
   } // end outer for

   // print how many queens were placed on board
   if ( queens == 8 )
      cout << "\nEight Queens were placed on the board!" << endl;
   else
      cout << '\n' << queens << " Queens were placed on the board.\n";
} // end function printBoard

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
