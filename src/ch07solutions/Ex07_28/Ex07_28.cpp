// Exercise 7.28 Solution: Ex07_28.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 8; // constant global variable

void clearBoard( int [][ SIZE ] ); // function prototype
void printBoard( const int [][ SIZE ] ); // function prototype
bool validMove( int, int, const int [][ SIZE ] ); // function prototype

int main()
{
   int board[ SIZE ][ SIZE ];
   int firstMoveRow;
   int firstMoveCol;
   int access[ SIZE ][ SIZE ] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  2, 3, 4, 4, 4, 4, 3, 2 };
   int currentRow;
   int currentColumn; 
   int moveNumber = 1;
   int testRow; 
   int testColumn;
   int minRow;
   int minColumn;
   int minAccess = 9;
   int accessNumber;
   int horizontal[ SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
   int vertical[ SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
   bool done;
   bool closedTour = false;

   srand( time( 0 ) );

   clearBoard( board ); // initialize array board
   currentRow = rand() % SIZE;
   currentColumn = rand() % SIZE;
   firstMoveRow = currentRow; // store first moves row
   firstMoveCol = currentColumn; // store first moves col

   board[ currentRow ][ currentColumn ] = moveNumber++;
   done = false;

   // loop until knight cannot move anymore
   while ( !done ) 
   {
      accessNumber = minAccess;

      // test what moves knight can make
      for ( int moveType = 0; moveType < SIZE; moveType++ ) 
      {
         testRow = currentRow + vertical[ moveType ];
         testColumn = currentColumn + horizontal[ moveType ];

         // if the knight can make a valid move, and that move has the
         // lowest accessNumber, move to that space
         if ( validMove( testRow, testColumn, board ) ) 
         {
            if ( access[ testRow ][ testColumn ] < accessNumber ) 
            {
               accessNumber = access[ testRow ][ testColumn ];
               minRow = testRow;
               minColumn = testColumn;
            } // end if

            access[ testRow ][ testColumn ]--;
         } // end if
      } // end for

      // if knight cannot access any more squares, while loop terminates
      if ( accessNumber == minAccess )
         done = true;
      else 
      {
         currentRow = minRow;
         currentColumn = minColumn;
         board[ currentRow ][ currentColumn ] = moveNumber++;

         // check for closed tour
         if ( moveNumber == 64 )
         {
            for ( int m = 0; m < SIZE; ++m ) 
            {
               testRow = currentRow + vertical[ m ];
               testColumn = currentColumn + horizontal[ m ];

               if (testRow == firstMoveRow && testColumn == firstMoveCol)
                  closedTour = true;
            } // end for
         } // end if
      } // end else
   } // end while

   // display results of tour
   cout << "The tour ended with " << moveNumber - 1 << " moves.\n";

   if ( moveNumber - 1 == 64 && closedTour == true )
      cout << "This was a CLOSED tour!\n\n";
   else if ( moveNumber - 1 == 64 )
      cout << "This was a full tour!\n\n";
   else
      cout << "This was not a full tour.\n\n";

   cout << "The board for this test is:\n\n";
   printBoard( board );
} // end main

// method to clear the chess board
void clearBoard( int workBoard[][ SIZE ] )
{
   // set all values on board to 0
   for ( int row = 0; row < SIZE; row++ )
   {
      for ( int col = 0; col < SIZE; col++ )
         workBoard[ row ][ col ] = 0;
   } // end for
} // end method clearBoard

// function to print the chessboard
void printBoard( const int workBoard[][ SIZE ] )
{
   cout << "   0  1  2  3  4  5  6  7\n";

   // print rows of chessboard
   for ( int row = 0; row < SIZE; row++ ) 
   {
      cout << row;

      // print columns of chess board
      for ( int col = 0; col < SIZE; col++ )
         cout << setw( 3 ) << workBoard[ row ][ col ];

      cout << '\n';
   } // end for

   cout << endl;
} // end function printBoard 

// function to determine if a move is valid
bool validMove( int row, int column, const int workBoard[][ SIZE ] )
{
   // NOTE: This test stops as soon as it becomes false
   return ( row >= 0 && row < SIZE && column >= 0 && column < SIZE
      && workBoard[ row ][ column ] == 0 );
} // end method validMove

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
