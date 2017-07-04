// Exercise 21.26 Solution: ex21_26.cpp
#include <iostream> 
#include <iomanip>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZE1 = 80;
const int SIZE2 = 26;

int main()
{
   char text[ 3 ][ SIZE1 ];
   char *searchPtr;
   int characters[ SIZE2 ] = { 0 };
   
   cout << "Enter three lines of text:\n";
   
   for ( int i = 0; i <= 2; i++ )
      cin.getline( &text[ i ][ 0 ], SIZE1 );

   // convert letters to lowercase
   for ( int k = 0; k <= 2; k++ )

      for ( int j = 0; text[ k ][ j ] != '\0'; j++ )
      {
         char c = static_cast< char >( tolower( text[ k ][ j ] ) );
         text[ k ][ j ] = c;
      } // end for
         
   // run through the alphabet
   for ( int q = 0; q < SIZE2; q++ )
   {     
      for ( int j = 0; j <= 2; j++ )
      {
         searchPtr = &text[ j ][ 0 ];
      
         while ( searchPtr = strchr( searchPtr, 'a' + q ) )
         {
            characters[ q ]++; // increment each time the character occurs 
            searchPtr++;
         } // end while
      } // end inner for
   } // end outer for
   
   cout << "\nThe total number of occurrences of each character:\n";

   for ( int w = 0; w < SIZE2; w++ )
      cout << setw( 3 ) << static_cast< char >( 'a' + w ) << ':'
         << setw( 3 ) << characters[ w ] << '\n';
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
 *************************************************************************/


