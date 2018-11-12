// Exercise 7.19 Solution: Ex07_19.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice(); // function prototype

int main()
{
   enum Outcome { CONTINUE, WIN, LOSE };
   const int SIZE = 22;
   const int ROLLS = 1000;
   int gameStatus;
   int sum;
   int myPoint;
   int roll;
   int length = 0;
   int wins[ SIZE ] = {};
   int losses[ SIZE ] = {};
   int winSum = 0; 
   int loseSum = 0;

   srand( time( 0 ) );
   
   // play 1000 times
   for ( int i = 1; i <= ROLLS; i++ ) 
   {
      sum = rollDice();
      roll = 1;
	
      // test if game won or lost on first roll
      switch ( sum ) 
      {
         case 7: case 11:
            gameStatus = WIN;
            break;
         case 2: case 3: case 12:
            gameStatus = LOSE;
            break;
         default:
            gameStatus = CONTINUE;
            myPoint = sum;
            break;
      } // end switch
	
      // continue while game not won or lost
      while ( gameStatus == CONTINUE ) 
      {
         sum = rollDice();
         roll++;

         if ( sum == myPoint )
            gameStatus = WIN;
         else if ( sum == 7 )
            gameStatus = LOSE;
      } // end while		

      // if more then 21 rolls taken, set number of rolls to 21
      if ( roll > 21 )
         roll = 21;

      // determine how many rolls were taken and
      // increment corresponding counter in either wins or losses array
      if ( gameStatus == WIN ) 
      {
         wins[ roll ]++;
         winSum++;
      } // end if
      else 
      {
         losses[ roll ]++;
         loseSum++;
      } // end else
   } // end for
   
   cout << "Games won or lost after the 20th roll" 
      << "\nare displayed as the 21st roll.\n\n";

   // display number of games won and lost for each number of rolls 
   for ( int z = 1; z <= 21; ++z ) 
      cout << setw( 3 ) << wins[ z ] << " games won and " << setw( 3 )
         << losses[ z ] << " games lost on roll " << z << '\n';
   
   // calculate chances of winning
   cout << fixed << showpoint << "\nThe chances of winning are " << winSum 
      << " / " << winSum + loseSum << " = " << setprecision( 2 )
      << 100.0 * winSum / ( winSum + loseSum ) << "%\n";
   
   // calculate and display average length of game
   for ( int k = 1; k <= 21; k++ )
      length += wins[ k ] * k + losses[ k ] * k;

   cout << "The average game length is " << setprecision( 2 )
      << length / 1000.0 << " rolls." << endl;
} // end main

// function to simulate dice rolling
int rollDice()
{
   int die1 = 1 + rand() % 6;
   int die2 = 1 + rand() % 6;
   return die1 + die2; // return total of two dice
} // end function rollDice

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
