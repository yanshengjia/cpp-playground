// Exercise 7.31 Solution: Ex07_31.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

void selectionSort( int [], int );

int main()
{
   const int SIZE = 10;
   const int MAXRANGE = 1000;
   int sortThisArray[ SIZE ] = {};

   srand( time( 0 ) );

   // fill array with random numbers between 1-1000
   for ( int i = 0; i < SIZE; i++ )
      sortThisArray[ i ] = 1 + rand() % MAXRANGE;

   cout << "\nUnsorted array is:\n";

   // display unsorted array
   for ( int j = 0; j < SIZE; j++ )
      cout << ' ' << sortThisArray[ j ] << ' ';

   selectionSort( sortThisArray, SIZE ); // sort the array

   cout << "\n\nSorted array is:\n"; 

   // display sorted array
   for ( int k = 0; k < SIZE; k++ )
      cout << ' ' << sortThisArray[ k ] << ' ';

   cout << '\n' << endl;
} // end main

// function to sort an array
void selectionSort( int array[], int size )
{
   int temp; // temporary variable used for swapping

   // sort array until only one element is left
   if ( size >= 1 ) 
   {
      // find smallest element and put it in first position
      for ( int loop = 0; loop < size; loop++ )
      {
         if ( array[ loop ] < array[ 0 ] ) 
         {
            temp = array[ loop ];
            array[ loop ] = array[ 0 ];
            array[ 0 ] = temp;
         } // end inner if
      } // end for

      // recursive call to selectionSort
      selectionSort( &array[ 1 ], size - 1 );
   } // end outer if
} // end method selectionSort

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
