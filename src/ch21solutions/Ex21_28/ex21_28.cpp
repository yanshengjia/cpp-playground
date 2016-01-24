// Exercise 21.28 Solution: ex21_28.cpp
#include <iostream> 
using namespace std;

const int SIZE = 20;

int main()
{
   char array[ 5 ][ SIZE ];
   int i;

   // take in five strings
   for ( i = 0; i <= 4; i++ )
   {
      cout << "Enter a string: ";
      cin.getline( &array[ i ][ 0 ], SIZE );
   } // end for 
   
   cout << "\nThe strings starting with 'b' are:\n";
   
   // run through the array and see if any string started with 'b'
   for ( i = 0; i <= 4; i++ )

      if ( array[ i ][ 0 ] == 'b' )
         cout << &array[ i ][ 0 ] << '\n'; // print out the string
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
