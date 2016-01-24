// Exercise 8.15 Solution: Ex08_15.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;
const int MAX_NUMBER = 1000;

// function prototypes
void quicksort( int * const, int, int );
int partition( int * const, int, int );
void swap( int * const, int * const );

int main()
{
   int arrayToBeSorted[ SIZE ] = {};
   int loop;

   srand( time( 0 ) );

   // randomly generate content 
   for ( loop = 0; loop < SIZE; loop++ )
      arrayToBeSorted[ loop ] = rand() % MAX_NUMBER;

   cout << "Initial array values are:\n";
   
   // print out values of the array
   for ( loop = 0; loop < SIZE; loop++ )
       cout << setw( 4 ) << arrayToBeSorted[ loop ];

   cout << "\n\n";

   // if there is only one element
   if ( SIZE == 1 )
      cout << "Array is sorted: " << arrayToBeSorted[ 0 ] << '\n';
   else 
   {
      quicksort( arrayToBeSorted, 0, SIZE - 1 );
      cout << "The sorted array values are:\n";

      for ( loop = 0; loop < SIZE; loop++ )
         cout << setw( 4 ) << arrayToBeSorted[ loop ];

      cout << endl;
   } // end else
} // end main

// recursive function to sort array
void quicksort( int * const array, int first, int last )
{
   int currentLocation;

   if ( first >= last )
      return;

   currentLocation = partition( array, first, last ); // place an element
   quicksort( array, first, currentLocation - 1 ); // sort left side
   quicksort( array, currentLocation + 1, last ); // sort right side
} // end function quicksort

// partition the array into multiple sections
int partition( int * const array, int left, int right )
{
   int position = left;

   // loop through the portion of the array
   while ( true ) 
   {
      while ( array[ position ] <= array[ right ] && position != right )
         right--;

      if ( position == right )
         return position;

      if ( array[ position ] > array[ right ]) 
      {
         swap( &array[ position ], &array[ right ] );
         position = right;
      } // end if

      while ( array[ left ] <= array[ position ] && left != position )
         left++;

      if ( position == left )
         return position;

      if ( array[ left ] > array[ position ] ) 
      {
         swap( &array[ position ], &array[ left ] );
         position = left;
      } // end if
   } // end while
} // end function partition

// swap locations
void swap( int * const ptr1, int * const ptr2 )
{
   int temp;

   temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;
} // end function swap

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
