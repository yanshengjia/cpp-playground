// Exercise 8.41 Part B Solution: Ex08_41.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

int main()
{
   const int SIZE = 80;
   char text[ 3 ][ SIZE ];
   char *temp;
   int lengths[ 20 ] = {};
   int i;   

   cout << "Enter three lines of text:\n";
   
   // gets three lines of text
   for ( i = 0; i <= 2; i++ )
      cin.getline( &text[ i ][ 0 ], SIZE );
      
   // break each word into tokens by using function strtok
   for ( i = 0; i <= 2; i++ ) 
   {
      temp = strtok( &text[ i ][ 0 ], ". \n" );
      
      // while there is still a word
      while ( temp ) 
      {
         // increment the proper place in the length array
         lengths[ strlen( temp ) ]++;

         // continue to break down the sentence
         temp = strtok( 0, ". \n" );
      } // end while 
   } // end for
   
   cout << '\n';
   
   // produce the output
   for ( i = 1; i <= 19; i++ )

      if ( lengths[ i ] )
         cout << lengths[ i ] << " word(s) of length: " << i << endl;
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
