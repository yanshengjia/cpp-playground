// Exercise 6.35 Solution: Ex06_35.cpp
// Randomly generate numbers between 1 and 1000 for user to guess;
// analyze number of guesses before correct response.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessGame(); // function prototype
bool isCorrect( int, int ); // function prototype
void analyzeCount( int ); // function prototype

int main()
{
   srand( time( 0 ) ); // seed random number generator
   guessGame();
} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess
void guessGame()
{
   int answer; // randomly generated number
   int guess; // user's guess
   int total; // number of guesses
   char response; // 'y' or 'n' response to continue game

   // loop until user types 'n' to quit game
   do 
   {
      // generate random number between 1 and 1000
      // 1 is shift, 1000 is scaling factor
      answer = 1 + rand() % 1000;
      total = 0; // clear total

      // prompt for guess
      cout << "I have a number between 1 and 1000.\n" 
         << "Can you guess my number?\n" 
         << "Please type your first guess." << endl << "? ";
      cin >> guess;
      total++;

      // loop until correct number
      while ( !isCorrect( guess, answer ) ) 
      {
         cin >> guess;      
         total++; 
      } // end while

      cout << "\nExcellent! You guessed the number!\n";
      analyzeCount( total );

      // prompt for another game
      cout << "Would you like to play again (y or n)? ";
      cin >> response;
      cout << endl;
   } while ( response == 'y' );
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
bool isCorrect( int g, int a )
{
   if ( g == a ) // guess is correct
      return true;

   // guess is incorrect; display hint
   if ( g < a ) 
      cout << "Too low. Try again.\n? ";
   else
      cout << "Too high. Try again.\n? ";

   return false;
} // end function isCorrect

// analyzeCount determines if user knows "secret"
void analyzeCount( int count )
{
   if ( count < 10 )
      cout << "Either you know the secret or you got lucky!\n";
   else if ( count == 10 )
      cout << "Ahah! You know the secret!\n";
   else
      cout << "You should be able to do better!\n\n";
} // end function analyzeCount

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
