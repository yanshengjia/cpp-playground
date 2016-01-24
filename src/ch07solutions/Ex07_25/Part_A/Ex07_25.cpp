// Exercise 7.25 Part A Solution: Ex07_25.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 8;

bool validMove( int, int, const int [][ SIZE ] );
void printBoard( const int [][ SIZE ] );

int main()
{
   int currentRow;
   int currentColumn;
   int moveType;
   int moveNumber = 1;
   int testRow;
   int testColumn;
   int board[ SIZE ][ SIZE ] = {};
   int horizontal[ SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
   int vertical[ SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
   bool done;
   bool goodMove;

   srand( time( 0 ) );
   
   currentRow = rand() % SIZE;   
   currentColumn = rand() % SIZE;
   board[ currentRow ][ currentColumn ] = moveNumber++;
   done = false;

   // continue until knight can no longer move
   while ( !done ) 
   {
      moveType = rand() % SIZE;
      testRow = currentRow + vertical[ moveType ];
      testColumn = currentColumn + horizontal[ moveType ];
      goodMove = validMove( testRow, testColumn, board );
      
      // test if desired move is valid
      if ( goodMove ) 
      {
         currentRow = testRow;
         currentColumn = testColumn;
         board[ currentRow ][ currentColumn ] = moveNumber++;
      } // end if
      else 
      {
         // if move is not legal, try another random move
         for ( int count = 0; count < SIZE - 1 && !goodMove; count++ ) 
         {
            moveType = ++moveType % SIZE;
            testRow = currentRow + vertical[ moveType ];
            testColumn = currentColumn + horizontal[ moveType ];
            goodMove = validMove( testRow, testColumn, board );

            // test if new move is good
            if ( goodMove ) 
            {
               currentRow = testRow;
               currentColumn = testColumn;
               board[ currentRow ][ currentColumn ] = moveNumber++;
            } // end if
         } // end for

         // if no valid moves, knight can no longer move
         if ( !goodMove )
            done = true;
      } // end else

      // if 64 moves have been made, a full tour is complete
      if ( moveNumber - 1 == 64 )
         done = true;
   } // end while
   
   cout << "The tour has ended with " << moveNumber - 1 << " moves.\n";
   
   // test if full tour was made
   if ( moveNumber - 1 == 64 )
      cout << "This was a full tour!\n";
   else
      cout << "This was not a full tour.\n";
      
   cout << "The board for this random test was:\n\n";
   printBoard( board ); // print the board
} // end main

// function to test whether a square is on the board
// and has not been visited yet
bool validMove( int row, int column, const int workBoard[][ SIZE ] )
{
   // NOTE: This test stops as soon as it becomes false
   return ( row >= 0 && row < SIZE && column >= 0 && column < SIZE
      && workBoard[ row ][ column ] == 0 );
} // end function validMove

// function to print the chess board
void printBoard( const int board[][ SIZE ] )
{
   cout << "   0  1  2  3  4  5  6  7\n";
   
   // print the rows and columns of the chess board
   for ( int row = 0; row < SIZE; row++ )
   {
      cout << row;
      
      for ( int col = 0; col < SIZE; col++ )
         cout << setw( 3 ) << board[ row ][ col ];
         
      cout << '\n';
   } // end for
     
   cout << endl;
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
