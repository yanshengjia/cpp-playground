// Exercise 19.10 Solution: Ex19_10.cpp
// Quick sort of a vector.
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// function prototypes
void quickSortHelper( vector < int > &, int, int );
int partition( vector < int > &, int, int );
void swap( int * const, int * const );

int main()
{
   const int MAX_NUMBER = 100;
   const int SIZE = 10;
   vector < int > vectorToBeSorted( SIZE );
   int loop;

   srand( time( 0 ) );

   // randomly generate content 
   for ( loop = 0; loop < SIZE; loop++ )
      vectorToBeSorted[ loop ] = rand() % MAX_NUMBER;

   cout << "Initial vector values are:\n";
   
   // print out values of the vector
   for ( loop = 0; loop < SIZE; loop++ )
       cout << setw( 4 ) << vectorToBeSorted[ loop ];

   cout << "\n\n";

   // if there is only one element
   if ( SIZE == 1 )
      cout << "Vector is sorted: " << vectorToBeSorted[ 0 ] << '\n';
   else 
   {
      quickSortHelper( vectorToBeSorted, 0, SIZE - 1 );
      cout << "The sorted vector values are:\n";

      for ( loop = 0; loop < SIZE; loop++ )
         cout << setw( 4 ) << vectorToBeSorted[ loop ];

      cout << endl;
   } // end else
} // end main

// recursive function to sort vector
void quickSortHelper( vector < int > &data, int first, int last )
{
   int currentLocation;

   if ( first >= last )
      return;

   currentLocation = partition( data, first, last ); // place an element
   quickSortHelper( data, first, currentLocation - 1 ); // sort left side
   quickSortHelper( data, currentLocation + 1, last ); // sort right side
} // end function quickSortHelper

// partition the vector into multiple sections
int partition( vector < int > &data, int left, int right )
{
   int position = left;

   // loop through the portion of the vector
   while ( true ) 
   {
      while ( data[ position ] <= data[ right ] && position != right )
         --right;

      if ( position == right )
         return position;

      if ( data[ position ] > data[ right ]) 
      {
         swap( &data[ position ], &data[ right ] );
         position = right;
      } // end if

      while ( data[ left ] <= data[ position ] && left != position )
         ++left;

      if ( position == left )
         return position;

      if ( data[ left ] > data[ position ] ) 
      {
         swap( &data[ position ], &data[ left ] );
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
 *************************************************************************/
