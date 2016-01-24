// Exercise 8.17 Solution: Ex08_12.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;

const int RACE_END = 70;

// prototypes
void moveTortoise( int *const );
void moveHare( int *const );
void printCurrentPositions( const int *const, const int *const );

int main()
{
   int tortoise = 1;
   int hare = 1;
   int timer = 0;   

   srand( time( 0 ) );

   cout << "ON YOUR MARK, GET SET\nBANG               !!!!"
      << "\nAND THEY'RE OFF    !!!!\n";
   
   // loop through the events
   while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      moveTortoise( &tortoise );
      moveHare( &hare );
      printCurrentPositions( &tortoise, &hare );
      timer++;
   } // end loop

   if ( tortoise >= hare )
      cout << "\nTORTOISE WINS!!! YAY!!!\n";
   else
      cout << "Hare wins. Yuch.\n";

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;
}  // end main

// progress for the tortoise
void moveTortoise( int * const turtlePtr )
{
   int x = 1 + rand() % 10; // random number 1-10

   if ( x >= 1 && x <= 5 ) // fast plod
      *turtlePtr += 3;
   else if ( x == 6 || x == 7 ) // slip
      *turtlePtr -= 6;
   else // slow plod
      ++( *turtlePtr );
   
   if ( *turtlePtr < 1 )
      *turtlePtr = 1;
   else if ( *turtlePtr > RACE_END )
      *turtlePtr = RACE_END;
}  // end function moveTortoise

// progress for the hare
void moveHare( int * const rabbitPtr )
{
   int y = 1 + rand() % 10; // random number 1-10

   if ( y == 3 || y == 4 ) // big hop
      *rabbitPtr += 9;
   else if ( y == 5 )  // big slip
      *rabbitPtr -= 12;
   else if ( y >= 6 && y <= 8 ) // small hop
      ++( *rabbitPtr );
   else if ( y > 8 ) // small slip
      *rabbitPtr -= 2;

   if ( *rabbitPtr < 1 )
      *rabbitPtr = 1;
   else if ( *rabbitPtr > RACE_END )
      *rabbitPtr = RACE_END;
} // end function moveHare

// display new position
void printCurrentPositions( const int * const snapperPtr, 
   const int * const bunnyPtr )
{
   if ( *bunnyPtr == *snapperPtr ) 
      cout << setw( *bunnyPtr ) << "OUCH!!!";      
   else if ( *bunnyPtr < *snapperPtr ) 
      cout << setw( *bunnyPtr ) << 'H' 
         << setw( *snapperPtr - *bunnyPtr ) << 'T';
   else
      cout << setw( *snapperPtr ) << 'T' 
         << setw( *bunnyPtr - *snapperPtr ) << 'H';

   cout << '\n';
} // end function printCurrentPositions

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
