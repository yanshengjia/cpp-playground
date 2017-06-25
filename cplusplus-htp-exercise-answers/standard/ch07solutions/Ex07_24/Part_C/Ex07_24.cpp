// Exercise 7.24 Part C Solution: Ex07_24.cpp
// Knight's Tour - access version
// runs one tour
#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 8;

void clearBoard( int [][ SIZE ] );
void printBoard( const int [][ SIZE ] );
bool validMove( int, int, const int [][ SIZE ] );

int main()
{
   int board[ SIZE ][ SIZE ];
   int currentRow;
   int currentColumn;
   int moveNumber = 1;
   int access[ SIZE ][ SIZE ] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  4, 6, 8, 8, 8, 8, 6, 4,
                                  3, 4, 6, 6, 6, 6, 4, 3,
                                  2, 3, 4, 4, 4, 4, 3, 2 };

   int testRow;
   int testColumn;
   int minRow;
   int minColumn; 
   int minAccess = 9;
   int accessNumber;
   int horizontal[ SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
   int vertical[ SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
   bool done;

   srand( time( 0 ) );
   
   clearBoard( board ); // initialize array board
   currentRow = rand() % 8;
   currentColumn = rand() % 8;
   board[ currentRow ][ currentColumn ] = moveNumber++;
   done = false;
   
   // continue while knight still has valid moves
   while ( !done ) 
   {
      accessNumber = minAccess;

      // loop through all move types
      for ( int moveType = 0; moveType < SIZE; ++moveType ) 
      {
         testRow = currentRow + vertical[ moveType ];
         testColumn = currentColumn + horizontal[ moveType ];

         // make sure move is valid
         if ( validMove( testRow, testColumn, board ) ) 
         {
            // if move is valid, and has lowest accessNumber
            // set square to accessNumber
            if ( access[ testRow ][ testColumn ] < accessNumber ) 
            {
               accessNumber = access[ testRow ][ testColumn ];
               minRow = testRow;
               minColumn = testColumn;
            } // end inner if

            access[ testRow ][ testColumn ]--;
         } // end outer if
      } // end for

      // end if knight has no moves
      if ( accessNumber == minAccess )
         done = true;
      else 
      {
         currentRow = minRow;
         currentColumn = minColumn;
         board[ currentRow ][ currentColumn ] = moveNumber++;
      } // end else
   } // end while

   cout << "The tour ended with " << moveNumber - 1 << " moves.\n";

   // determine and print if a full tour was made
   if ( moveNumber - 1 == 64 )
      cout << "This was a full tour!\n\n";
   else
      cout << "This was not a full tour.\n\n";

   cout << "The board for this test is:\n\n";
   printBoard( board );
} // end main

// function to clear chess board
void clearBoard( int workBoard[][ SIZE ] )
{
   // set all squares to zero
   for ( int row = 0; row < SIZE; row++ )
   {
      for ( int col = 0; col < SIZE; col++ )
         workBoard[ row ][ col ] = 0;
   } // end for
} // end function clearBoard

// function to print chess board
void printBoard( const int workBoard[][ SIZE ] )
{
   cout << "   0  1  2  3  4  5  6  7\n";

   // print squares
   for ( int row = 0; row < SIZE; row++ ) 
   {
      cout << row;

      for ( int col = 0; col < SIZE; col++ )
         cout << setw( 3 ) << workBoard[ row ][ col ];

      cout << '\n';
   } // end outer for 

   cout << endl;
} // end function printBoard

// function to determine if move is legal
bool validMove( int row, int column, const int workBoard[][ SIZE ] )
{
   // NOTE: This test stops as soon as it becomes false
   return ( row >= 0 && row < SIZE && column >= 0 && column < SIZE
      && workBoard[ row ][ column ] == 0 );
} // end function validMove

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
