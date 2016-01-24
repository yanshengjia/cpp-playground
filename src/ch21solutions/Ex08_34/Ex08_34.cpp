// Exercise 8.34 Solution: Ex08_34.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

const int SIZE = 80;

// function prototype
void printLatinWord( char const * const );

int main()
{
   char sentence[ SIZE ];
   char *tokenPtr;
   
   cout << "Enter a sentence:\n";
   cin.getline( sentence, SIZE ); // read in, but only up to 80 characters
   cout << "\nThe sentence in Pig Latin is:\n";
   
   // call function strtok to alter the sentence
   tokenPtr = strtok( sentence, " .,;" );
   
   // if there is still word in tokenPtr
   while ( tokenPtr ) 
   {
      printLatinWord( tokenPtr );
      tokenPtr = strtok( 0, " .,;" );
      
      if ( tokenPtr )
         cout << ' ';
   } // end while
   
   cout << '.' << endl;
} // end main

// print out the English word in Pig Latin form
void printLatinWord( char const * const wordPtr )
{
   int len = strlen( wordPtr );

   // loop through the word
   for (int i = 1; i < len; i++ )
      cout << *( wordPtr + i );

   cout << *wordPtr << "ay";
} // end printLatinWord

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
