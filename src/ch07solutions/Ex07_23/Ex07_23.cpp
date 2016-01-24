// Exercise 7.23 Solution: Ex07_23.cpp
#include <iostream> 
using namespace std;

// constant global variables
const int MAXCOMMANDS = 100;
const int SIZE = 20;

int turnRight( int ); // function prototype
int turnLeft( int ); // function prototype
void getCommands( int [][ 2 ] ); // function prototype
void movePen( int, int [][ SIZE ], int, int ); // function prototype
void printArray( const int [][ SIZE ] ); // function prototype

int main()
{
   int floor[ SIZE ][ SIZE ] = {};
   int command;
   int direction = 0;
   int commandArray[ MAXCOMMANDS ][ 2 ] = {};
   int distance;
   int count = 0;
   bool penDown = false;

   getCommands( commandArray );
   command = commandArray[ count ][ 0 ];
   
   // continue receiving input until 9 is entered
   while ( command != 9 ) 
   {
      // determine what command was entered and perform desired action
      switch ( command ) 
      {
         case 1:
            penDown = false;
            break;
         case 2:
            penDown = true;
            break;
         case 3:
            direction = turnRight( direction );
            break;
         case 4:
            direction = turnLeft( direction );
            break;
         case 5:
            distance = commandArray[ count ][ 1 ];
            movePen( penDown, floor, direction, distance );
            break;
         case 6:
            cout << "\nThe drawing is:\n\n";
            printArray( floor );
            break;
      } // end switch
      
      command = commandArray[ ++count ][ 0 ]; 
   } // end while
} // end main

// function that prompts user for and keeps track of commands
void getCommands( int commands[][ 2 ] )
{
   int tempCommand, i;

   cout << "Enter command (9 to end input): ";
   cin >> tempCommand;
   
   // receive commands until 9 or 100 commands are entered
   for ( i = 0; tempCommand != 9 && i < MAXCOMMANDS; i++ ) 
   {
      commands[ i ][ 0 ] = tempCommand;

      // ignore comma after 5 is entered
      if ( tempCommand == 5 ) 
      {
         cin.ignore(); // skip comma
         cin >> commands[ i ][ 1 ];
      } // end if

      cout << "Enter command (9 to end input): ";
      cin >> tempCommand;
   } // end for

   commands[ i ][ 0 ] = 9; // last command
} // end function getCommands 

// function to turn turtle to the right
int turnRight( int d ) 
{
   return ++d > 3 ? 0 : d;
} // end function turnRight

// function to turn turtle to the left
int turnLeft( int d ) 
{
   return --d < 0 ? 3 : d;
} // end function turnLeft

// function to move the pen 
void movePen( int down, int a[][ SIZE ], int dir, int dist )
{
   static int xPos = 0;
   static int yPos = 0;
   int j; // looping variable

   // determine which way to move pen
   switch ( dir ) 
   {
      case 0: // move to the right
         for ( j = 0; j < dist && yPos + j < SIZE; j++ )
         {
            if ( down )
               a[ xPos ][ yPos + j ] = 1;
         } // end for

         yPos += j - 1;
         break;
      case 1: // move down
         for ( j = 0; j < dist && xPos + j < SIZE; j++ )
         {
            if ( down )
               a[ xPos + j ][ yPos ] = 1;
         } // end for
            
         xPos += j - 1;
         break;
      case 2: // move to the left
         for ( j = 0; j < dist && yPos - j >= 0; j++ )
         {
            if ( down )
               a[ xPos ][ yPos - j ] = 1;
         } // end for
            
         yPos -= j - 1;
         break;
      case 3: // move up
         for ( j = 0; j < dist && xPos - j >= 0; j++ )
         {
            if ( down )
               a[ xPos - j ][ yPos ] = 1;
         } // end for
            
         xPos -= j - 1;
         break;
   } // end switch
} // end function movePen

// function to print array drawing
void printArray( const int a[][ SIZE ] )
{
   // display array
   for ( int i = 0; i < SIZE; i++ ) 
   {
      for ( int j = 0; j < SIZE; j++ )
         cout << ( a[ i ][ j ] ? '*' : ' ' );

      cout << endl;
   } // end outer for
} // end function printArray

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
