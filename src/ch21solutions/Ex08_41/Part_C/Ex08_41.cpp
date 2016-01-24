// Exercise 8.41 Part C Solution: Ex08_41.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

const int SIZE = 80;

int main()
{
   char text[ 3 ][ SIZE ];
   char *temp;
   char words[ 100 ][ 20 ] = { "" };
   int count[ 100 ] = {};
   int i;
   
   cout << "Enter three lines of text:\n";
   
   // make sure that there are three lines of text
   for ( i = 0; i <= 2; i++ )
      cin.getline( &text[ i ][ 0 ], SIZE );
      
   // make sure that each sentence gets processed
   for ( i = 0; i <= 2; i++ ) 
   {
      // uses function strtok to break each word into tokens
      temp = strtok( &text[ i ][ 0 ], ". \n" );
      
      // while temp is not empty 
      while ( temp ) 
      {
         int j; // indexing variable 

         for ( j = 0; words[ j ][ 0 ] && 
            strcmp( temp, &words[ j ][ 0 ] ) != 0; j++ )
            ; // empty body
         
         count[ j ]++;
         
         if ( !words[ j ][ 0 ] )
            strcpy( &words[ j ][ 0 ], temp );
            
         temp = strtok( 0, ". \n" ); // make another token
      } // end while
   } // end for 
   
   cout << '\n';
   
   // output the result
   for ( int k = 0; words[ k ][ 0 ] != '\0' && k <= 99; k++ )
      cout << "\"" << &words[ k ][ 0 ] << "\" appeared " << count[ k ]
         << " time(s)\n";

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
