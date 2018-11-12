// Exercise 18.11 Solution: Ex18_11.cpp
#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std;

int main()
{
   string response; // "yes"/"no" input from user
   int w = 0; // index for current word
   const int WORDS = 4; // total number of words

   // loop will construct all necessary variables and begin game
   do 
   {
      const char body[] = " o/|\\|/\\";  // body parts

      string words[ WORDS ] = {  
         "MACAW", "SADDLE", "TOASTER", "XENOCIDE" };
      string xword( words[ w ].length(), '?' ); // masked display
      
      string::iterator i;
      string::iterator ix = xword.begin();

      char letters[ 26 ] = { '\0' }; // letters guessed
      
      int n = 0; // index variable
      int xcount = xword.length(); 
      bool found = false;
      bool solved = false;
      int offset = 0;
      int bodyCount = 0;
      bool hung = false;

      cout << "Guess the word: ";

      // display the word in Xs
      for ( unsigned loop = 0; loop < words[ w ].length(); loop++ )
         cout << "X";

      // loop to begin game
      do 
      {
         cout << "\n\nGuess a letter (case does not matter): "
            << xword << "\n?";
         
         char temp;
         cin >> temp; // letter guessed
      
         if ( !isalpha( temp ) ) // validate for letters
         {
            cout << "\nLETTERS ONLY PLEASE\n";   
            continue; // next iteration of do/while
         } // end if

         letters[ n ] = toupper( temp ); // convert to uppercase

         // seach word for letters
         i = words[ w ].begin(); // initialize iterator to beginning
         found = false; // assume letter is not found in word
         offset = 0; // initial position set to 0

         // replace letter in mask string in all the necessary
         // places. decrement count of characters masked such
         // that we know when word is solved.
         while ( i != words[ w ].end() ) 
         {
            if ( *i == letters[ n ] ) 
            {
               *( ix + offset ) = *i;
               found = true;
         
               if ( --xcount == 0 )
                  solved = true;
            } // end if

            i++;
            offset++;
         } // end while

         if ( !found ) // if the letter was not found
            bodyCount++; // increment our count of incorrect guesses.
      
         bool newline = false;
  
         // graphically draw the pieces of the body
         // based upon the number of incorrect answers.       
         for ( int q = 1; q <= bodyCount; q++ ) 
         {
            if ( q == 1 || q == 5 || q == 7 ) 
            {
               newline = true;
               cout << body[ 0 ]; // output space
            } // eend if
            else if ( q == 4 )
               newline = true;
            else
               newline = false;

            cout << body[ q ];

            if ( newline )
               cout << '\n';
         } // end for  

         // test to see if guesses were exceeded.
         if ( bodyCount == 7 ) 
         {
            cout << "\n\n...GAME OVER...\n";
            hung = true;
            break;
         } // end if

         cout << "\nYour guesses:\n";
   
         // display all guesses. note we did not provide
         // the code that would politely refuse duplicates
         for ( int k = 0; k <= n; k++ )
            cout << setw( 2 ) << letters[ k ];

         n++;
      } while ( !solved ); // end do...while

      cout << "\n\nWord: " << words[ w ] << "\n\n";

      if ( !hung )
         cout << "\nCongratulations!!! You guessed "
            << "my word.\n";
   
      // if we are out of words, then time to exit loop
      if ( w++ >= WORDS )
         break;
         
      // prompt user if they want to play again
      cout << "Play again (yes/no)? ";
      cin >> response;
      
   } while ( !response.compare( "yes" ) ); // end do...while

   cout << "\nThank you for playing hangman." << endl;
} // end main

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
