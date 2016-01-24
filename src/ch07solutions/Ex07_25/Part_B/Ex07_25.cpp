// Exercise 7.25 Part B Solution: Ex07_25.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 8;
const int TOURS = 1000;
const int MAXMOVES = 65;

bool validMove( int, int, int, const int [][ SIZE ] );

int main()
{
   int currentRow;
   int currentColumn;
   int moveType;
   int moveNumber;
   int testRow;
   int testColumn;
   int moveTotal[ MAXMOVES ] = {};
   int goodMove;
   int board[ SIZE ][ SIZE ];
   int horizontal[ SIZE ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
   int vertical[ SIZE ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
   bool done;

   srand( time( 0 ) );

   // set all squares equal to 0
   for ( int i = 0; i < TOURS; ++i ) 
   {
      for ( int row = 0; row < SIZE; row++ )
      {
         for ( int col = 0; col < SIZE; col++ )
            board[ row ][ col ] = 0;
      } // end for
      
      moveNumber = 1;
      
      currentRow = rand() % SIZE;
      currentColumn = rand() % SIZE;
      board[ currentRow ][ currentColumn ] = moveNumber++;
      done = false;
   
      // continue while knight still has valid moves
      while ( !done ) 
      {
         moveType = rand() % SIZE;
         testRow = currentRow + vertical[ moveType ];
         testColumn = currentColumn + horizontal[ moveType ];
         goodMove = validMove( testRow, testColumn, moveType, board );
      
         // if desired move is valid, move knight to square
         if ( goodMove ) 
         {
            currentRow = testRow;
            currentColumn = testColumn;
            board[ currentRow ][ currentColumn ] = moveNumber++;
         } // end if
         else 
         {
            // if move is invalid, test other possible moves
            for ( int count = 0; count < SIZE - 1 && !goodMove; count++ )
            {
               moveType = ++moveType % SIZE;
               testRow = currentRow + vertical[ moveType ];
               testColumn = currentColumn + horizontal[ moveType ];
               goodMove = validMove( 
                  testRow, testColumn, moveType, board );

               // if move is valid, move knight to square
               if ( goodMove ) 
               {
                  currentRow = testRow;
                  currentColumn = testColumn;
                  board[ currentRow ][ currentColumn ] = moveNumber++;
               } // end if
            } // end for

            // if no valid moves, while loop exits
            if ( !goodMove )
               done = true;
         } // end else
      
         // if full tour is made, while loop exits
         if ( moveNumber - 1 == 64 ) 
            done = true;
      } // end while
      
      moveTotal[ moveNumber ]++;
   } // end outer for

   // display how many tours of each move number were made
   for ( int j = 1; j < MAXMOVES; j++ )
   {
      if ( moveTotal[ j ] ) 
         cout << "There were " << moveTotal[ j ] << " tours of " << j
            << " moves." << endl;
   } // end for
} // end main

// function to determine if a move is legal
bool validMove(  
   int testRow, int testColumn, int moveType, const int board[][ SIZE ] )
{
   // test if square is on board and if knight has previously visited it
   if ( testRow >= 0 && testRow < SIZE && testColumn >= 0 && 
      testColumn < SIZE )
      return board[ testRow ][ testColumn ] != 0 ? false : true;
   else
      return false;
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
