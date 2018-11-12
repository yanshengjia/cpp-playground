// Exercise 7.29 Solution: Ex07_29.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   const int SIZE = 1000;
   int array[ SIZE ];
   int count = 0;

   // set all array elements to 1
   for ( int k = 0; k < SIZE; k++ )
      array[ k ] = 1;

   // test for multiples of current subscript
   for ( int i = 1; i < SIZE; i++ )
   {
      if ( array[ i ] == 1 && i != 1 )
      {
         for ( int j = i; j < SIZE; j++ )
         {
            if ( j % i == 0 && j != i )
               array[ j ] = 0;
         } // end for
      } // end if
   } // end for

   // display prime numbers
   // range 2 - 197
   for ( int q = 2; q < SIZE; q++ )
   {
      if ( array[ q ] == 1 ) 
      {
         cout << setw( 3 ) << q << " is a prime number.\n";
         count++;
      } // end if
   } // end for

   cout << "A total of " << count << " prime numbers were found." << endl;
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
