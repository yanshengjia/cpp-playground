// Exercise 8.37 Solution: Ex08_37.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

const int SIZE = 50;

void insertionSort( char [][ SIZE ] ); // prototype

int main()
{
   char array[ 10 ][ SIZE ]; // character array
   int i; // index

   // loop to take in 10 strings
   for ( i = 0; i < 10; i++ ) 
   {
      cout << "Enter a string: ";
      cin >> &array[ i ][ 0 ];
   } // end for
   
   // call function insertionSort to sort the array content
   insertionSort( array );
   cout << "\nThe strings in sorted order are:\n";
   
   // print out the sorted array
   for ( i = 0; i < 10; i++ )
      cout << &array[ i ][ 0 ] << endl;
} // end main

// sorting function
void insertionSort( char a[][ SIZE ] )
{
   char insert[ SIZE ]; // temporary variable to hold element to insert

   // loop over elements
   for ( int next = 1; next < 10; next++ )
   {
      strcpy( insert, a[ next ] ); // store value in current element
      int moveItem = next; // initialize location to place element

      // search for place to put current element
      while ( moveItem > 0 && strcmp( a[ moveItem - 1 ], insert ) > 0 )
      {
         // shift element right one slot
         strcpy( a[ moveItem ], a[ moveItem - 1 ] );
         moveItem--;
      } // end while

      strcpy( a[ moveItem ], insert ); // place inserted element
   } // end for
} // end function insertionSort

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
