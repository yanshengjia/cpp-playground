// Exercise 8.17 Solution: Ex08_17.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

enum Direction { DOWN, RIGHT, UP, LEFT };
const int MAX_DOTS = 100; // maximum possible dots for maze

// function prototypes
void mazeTraversal( char [][ 12 ], const int, const int, int, int, int );
void mazeGenerator( char [][ 12 ], int *, int * );
void printMaze( const char[][ 12 ] );
bool validMove( const char [][ 12 ], int, int );
bool coordsAreEdge( int, int );

int main()
{
   char maze[ 12 ][ 12 ];
   int xStart; // represent starting coordinates:
   int yStart;
   int x; // current coordinates:
   int y;

   srand( time( 0 ) );

   // loop to generate hashes (#)
   for ( int loop = 0; loop < 12; loop++ )

      for ( int loop2 = 0; loop2 < 12; loop2++ )
         maze[ loop ][ loop2 ] = '#';

   mazeGenerator( maze, &xStart, &yStart ); // generate the maze

   x = xStart; // initialize x
   y = yStart; // initialize y

   mazeTraversal( maze, xStart, yStart, x, y, RIGHT ); // traverse maze
} // end main

// Assume that there is exactly 1 entrance and exactly 1 exit to the maze.
void mazeTraversal( char maze[][ 12 ], const int xStart, const int yStart,
   int xCoord, int yCoord, int direction )
{
   static bool flag = false;

   maze[ xCoord ][ yCoord ] = 'x';
   printMaze( maze );

   if ( coordsAreEdge( xCoord, yCoord ) && xCoord != xStart && 
        yCoord != yStart ) 
   {
      cout << "\nMaze successfully exited!\n\n";
      return; // maze is complete
   } // end if
   else if ( xCoord == xStart && yCoord == yStart && flag ) 
   {
      cout << "\nArrived back at the starting location.\n\n";
      return;
   } // end else if
   else 
   {
      flag = true;

      // for loop uses switch to determine appropriate move   
      for ( int move = direction, count = 0; count < 4; count++, 
            move++, move %= 4 )
      {
         switch( move ) 
         {
            case DOWN: // move down
               if ( validMove( maze, xCoord + 1, yCoord ) ) 
               {
                  mazeTraversal( 
                     maze, xStart, yStart, xCoord + 1, yCoord, LEFT );
                  return;
               } // end if
               break;
            case RIGHT: // move right
               if ( validMove( maze, xCoord, yCoord + 1 ) ) 
               {
                  mazeTraversal( 
                     maze, xStart, yStart, xCoord, yCoord + 1, DOWN );
                  return;
               } // end if
               break;
            case UP: // move up
               if ( validMove( maze, xCoord - 1, yCoord ) )  
               {
                  mazeTraversal( 
                     maze, xStart, yStart, xCoord - 1, yCoord, RIGHT );
                  return;
               } // end if
               break;
            case LEFT: // move left
               if ( validMove( maze, xCoord, yCoord - 1 ) )  
               {
                  mazeTraversal( 
                     maze, xStart, yStart, xCoord, yCoord - 1, UP );
                  return;
               } // end if
               break;
         } // end switch
      } // end for
   } // end else
} // end function mazeTraversal

// validate move
bool validMove( const char maze[][ 12 ], int r, int c )
{
   return 
      ( r >= 0 && r <= 11 && c >= 0 && c <= 11 && maze[ r ][ c ] != '#' );
} // end function validMove

// check boundaries of coordinates
bool coordsAreEdge( int x, int y )
{
   if ( ( x == 0 || x == 11 ) && ( y >= 0 && y <= 11 ) )
      return true;
   else if ( ( y == 0 || y == 11 ) && ( x >= 0 && x <= 11 ) )
      return true;
   else
      return false;
} // end function coordsAreEdge

// print the maze
void printMaze( const char maze[][ 12 ] )
{
   for ( int x = 0; x < 12; x++ ) 
   {
      for ( int y = 0; y < 12; y++ )
         cout << maze[ x ][ y ] << ' ';

      cout << '\n';
   } // end for

   cout << "\nHit return to see next move\n";
   cin.get();
} // end function printMaze

// random feature of making a maze
void mazeGenerator( char maze[][ 12 ], int *xPtr, int *yPtr )
{
   int a; // store random numbers:
   int entry;
   int exit;
   int x;
   int y;

   do 
   {
      entry = rand() % 4;
      exit = rand() % 4;
   } while ( entry == exit );

   // Determine entry position
   if ( entry == 0 ) 
   {
      *xPtr = 1 + rand() % 10; // avoid corners
      *yPtr = 0;
      maze[ *xPtr ][ 0 ] = '.';
   } // end if
   else if ( entry == 1 ) 
   {
      *xPtr = 0;
      *yPtr = 1 + rand() % 10;
      maze[ 0 ][ *yPtr ] = '.';
   } // end else if
   else if ( entry == 2 ) 
   {
      *xPtr = 1 + rand() % 10;
      *yPtr = 11;
      maze[ *xPtr ][ 11 ] = '.';
   } // end if
   else 
   {
      *xPtr = 11;
      *yPtr = 1 + rand() % 10;
      maze[ 11 ][ *yPtr ] = '.';
   } // end else

   // Determine exit location
   if ( exit == 0 ) 
   {
      a = 1 + rand() % 10;
      maze[ a ][ 0 ] = '.';
   } // end if
   else if ( exit == 1 ) 
   {
      a = 1 + rand() % 10;
      maze[ 0 ][ a ] = '.';
   } // end else if
   else if ( exit == 2 ) 
   {
      a = 1 + rand() % 10;
      maze[ a ][ 11 ] = '.';
   } // end else if
   else 
   {
      a = 1 + rand() % 10;
      maze[ 11 ][ a ] = '.';
   } // end else

   for ( int loop = 1; loop < MAX_DOTS; loop++ ) // add dots randomly
   {
      x = 1 + rand() % 10;
      y = 1 + rand() % 10;
      maze[ x ][ y ] = '.';
   } // end for
} // end mazeGenerator

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
