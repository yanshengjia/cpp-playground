// Exercise 21.29 Solution: ex21_29.cpp
#include <iostream> 
#include <cstring>
using namespace std;

const int SIZE = 20;

int main()
{
   int length, i;
   char array[ 5 ][ SIZE ];
      
   // takes five strings and store into character array
   for ( i = 0; i <= 4; i++ )
   {
      cout << "Enter a string: ";
      cin.getline( &array[ i ][ 0 ], SIZE );
   } // end for
   
   cout << "\nThe strings ending with \"ED\" are:\n";
   
   // review each string
   for ( i = 0; i <= 4; i++ )
   {
      length = strlen( &array[ i ][ 0 ] );
      
      // check if string ends with "ED"
      if ( strcmp( &array[ i ][ length - 2 ], "ED" ) == 0 )
         cout << &array[ i ][ 0 ] << '\n';
   } // end for
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

