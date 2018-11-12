// Exercise 21.24 Solution: ex21_24.cpp
#include <iostream> 
#include <cstring>
#include <cctype>
using namespace std;

const int SIZE1 = 80;
const int SIZE2 = 20;

int main()
{
   char text[ 3 ][ SIZE1 ];
   char search[ SIZE2 ];
   char *searchPtr;
   int count = 0;
   int i;
   
   cout << "Enter three lines of text:\n";
 
   for ( i = 0; i <= 2; i++ )
      cin.getline( &text[ i ][ 0 ], SIZE1 );

   // make all characters lowercase
   for ( i = 0; i <= 2; i++ )

      for ( int j = 0; text[ i ][ j ] != '\0'; j++ )
      {
         char c = static_cast< char >( tolower( text[ i ][ j ] ) );
         text[ i ][ j ] = c;
      } // end for

   cout << "\nEnter a search string: ";
   cin >> search;

   for ( i = 0; i <= 2; i++ )
   {
      searchPtr = &text[ i ][ 0 ];
      
      while ( searchPtr = strstr( searchPtr, search ) )
      {
         ++count; 
         ++searchPtr;
      } // end while
   } // end for
   
   cout << "\nThe total number of occurrences of \"" << search
      << "\" in the text is: " << count << endl;
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
