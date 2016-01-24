// Exercise 8.36 Solution: Ex08_36.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

void reverseTokens( char * const ); // prototype

int main()
{
   const int SIZE = 80;
   char text[ SIZE ];
   
   cout << "Enter a line of text:\n";
   cin.getline( text, SIZE );
   
   // call to function reverseTokens
   reverseTokens( text );
   cout << endl;
} // end main

// function to reverse the individual tokens 
void reverseTokens( char * const sentence )
{
   char *pointers[ 50 ]; // array to store entire sentence
   char *temp; // store each word

   int count = 0; // serve as array counter
   
   // call function strtok to take first word out of sentence
   temp = strtok( sentence, " " );
   
   // while temp is not empty
   while ( temp ) 
   {
      // add the word into the array
      pointers[ count++ ] = temp;
      
      // get each subsequent word from the sentence
      temp = strtok( 0, " " );
   } // end loop
   
   cout << "\nThe tokens in reverse order are:\n";

   // loop through the array backwards 
   for ( int i = count - 1; i >= 0; i-- )
      cout << pointers[ i ] << ' ';
} // end function reverseTokens

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
