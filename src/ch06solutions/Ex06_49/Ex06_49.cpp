// Exercise 6.49 Solution: Ex06_49.cpp
// Craps game simulation with wagering.
#include <iostream> 
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;

// enumeration constants represent game status
enum Status { WON, LOST, CONTINUE };

int rollDice( void ); // function prototype
Status craps( void ); // function prototype
void chatter( void ); // function prototype

int main()
{
   Status result; // result of current game
   int wager = 0; // wager for current game
   int bankBalance = 1000; // current bank balance
   char playAgain; // whether user wants to play another game

   // randomize random number generator using current time
   srand( time( 0 ) );

   // loop until user enters sentinel value
   do 
   {
      // display current balance and prompt for wager
      cout << "You have $" << bankBalance 
         << " in the bank.\nPlace your wager: ";
      cin >> wager;

      // loop until valid wager
      while ( wager <= 0 || wager > bankBalance ) 
      {
         cout << "Please bet a valid amount.\n";
         cin >> wager;
      } // end while

      result = craps(); // play game of craps

      if ( result == LOST ) // if player lost current game
      {
         bankBalance -= wager; // decrease balance by wager

         // display  new balance
         cout << "Your new bank balance is $" << bankBalance << "\n";

         if ( bankBalance == 0 ) // balance is 0
         {
            // display message
            cout << "Sorry. You Busted! Thank You For Playing.\n";
            break; // break out of while loop
         } // end if
      } // end if
      else // else, player won current game
      {
         bankBalance += wager; // increase balance by wager

         // display new balance
         cout << "Your new bank balance is $" << bankBalance << "\n";
      } // end else

      // prompt for next game
      cout << "Would you like to try your luck again (y/n)? ";
      cin >> playAgain;

   } while ( playAgain == 'y' || playAgain == 'Y' );

   cout << endl;
} // end main

// roll dice, calculate sum and display results
int rollDice( void )
{
   int die1; // first die value
   int die2; // second die value
   int workSum; // sum of dice
   
   die1 = 1 + rand() % 6; // pick random die1 value
   die2 = 1 + rand() % 6; // pick random die2 value
   workSum = die1 + die2; // sum die1 and die2

   // display results of this roll
   cout << "Player rolled " << die1 << " + " << die2
      << " = " << workSum << endl;
   return workSum; // return sum of dice
} // end function rollDice

// craps plays one game of craps, returns result of game
Status craps( void )
{
   int sum; // current roll of dice
   int myPoint; // point value
   Status gameStatus; // can contain CONTINUE, WON or LOST

   sum = rollDice(); // first roll of dice

   // determine game status and point based on sum of dice
   switch ( sum ) 
   {
      case 7: // win on first roll
      case 11:
         gameStatus = WON;
         break;
      case 2: // lose on first roll
      case 3: 
      case 12:
         gameStatus = LOST;
         break;
      default: // remember point
         gameStatus = CONTINUE;
         myPoint = sum;
         cout << "Point is " << myPoint << '\n';
         break;
   } // end switch

   // while game not complete ...
   while ( gameStatus == CONTINUE ) 
   {
      chatter(); // create "chatter"
      sum = rollDice(); // roll dice again
   
      // determine game status
      if ( sum == myPoint )
         gameStatus = WON; // win by making point
      else 
      {
         if ( sum == 7 ) // lose by rolling 7
            gameStatus = LOST;
      } // end else
   } // end while

   // display won or lost message and return status
   if ( gameStatus == WON ) 
   {
      cout << "Player wins" << endl;
      return WON;
   } // end if
   else 
   {
      cout << "Player loses" << endl;
      return LOST;
   } // end else
} // end function craps

// chatter displays messages at random to create "chatter"
void chatter()
{
   // choose message at random
   switch ( rand() % 9 ) 
   {
      case 0:
         cout << "Oh, you're going for broke, huh?";
         break;
      case 1:
         cout << "Aw cmon, take a chance!";
         break;
      case 2:
         cout << "Hey, I think this guy is going to break the bank!!";
         break;
      case 3:
         cout << "You're up big. Now's the time to cash in your chips!";
         break;
      case 4:
         cout << "Way too lucky! Those dice have to be loaded!";
         break;
      case 5:
         cout << "Bet it all! Bet it all!";
         break;
      case 6:
         cout << "Can I borrow a chip?";
         break;
      case 7:
         cout << "Let's try our luck at another table.";
         break;
      case 8:
         cout << "You're a cheat! It is just a matter of time"
            << "\nbefore I catch you!!!";
         break;
   } // end switch

   cout << endl;
} // end function chatter

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
