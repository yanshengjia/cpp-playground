// Exercise 8.32 Solution: Ex08_32.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

const int SIZE = 100;

int main()
{
   // arrays declared for article, noun, verb, and preposition
   const char *article[] = { "the", "a", "one", "some", "any" };
   const char *noun[] = { "boy", "girl", "dog", "town", "car" };
   const char *verb[] = { "drove", "jumped", "ran", "walked", "skipped" };
   const char *preposition[] = { "to", "from", "over", "under", "on" };
   char sentence[ SIZE ] = ""; // to hold the sentence

   srand( time( 0 ) ); // seed random number generator

   // loop through and make 20 random sentences out of the given arrays
   for ( int i = 1; i <= 20; ++i ) 
   {
      // uses function strcat to concatenate random sentences
      strcat( sentence, article[ rand() % 5 ] );
      strcat( sentence, " " );
      strcat( sentence, noun[ rand() % 5 ] );
      strcat( sentence, " " );
      strcat( sentence, verb[ rand() % 5 ] );
      strcat( sentence, " " );
      strcat( sentence, preposition[ rand() % 5 ] );
      strcat( sentence, " " );
      strcat( sentence, article[ rand() % 5 ] );
      strcat( sentence, " " );
      strcat( sentence, noun[ rand() % 5 ] );
      
      // print the current sentence
      cout << static_cast< char > ( toupper( sentence[ 0 ] ) ) 
         << &sentence[ 1 ] << ".\n";
      
      sentence[ 0 ] = '\0'; // reset the sentence
   } // end for

   cout << endl;
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
