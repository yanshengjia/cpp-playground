// Exercise 7.30 Solution: Ex07_30.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

// constant size must be defined as the array size for bucketSort to work
const int SIZE = 12;

void bucketSort( int [] ); 
void distributeElements( int [], int [][ SIZE ], int );
void collectElements( int [], int [][ SIZE ] );
int numberOfDigits( int [], int );
void zeroBucket( int [][ SIZE ] );

int main()
{
   int array[ SIZE ] = { 19, 13, 5, 27, 1, 26, 31, 16, 2, 9, 11, 21 };

   // display the unsorted array
   cout << "Array elements in original order:\n";

   for ( int i = 0; i < SIZE; i++ )
      cout << setw( 3 ) << array[ i ];

   cout << '\n';
   bucketSort( array ); // sort the array

   cout << "\nArray elements in sorted order:\n";

   // display sorted array
   for ( int j = 0; j < SIZE; j++ )
      cout << setw( 3 ) << array[ j ];

   cout << endl;
} // end main

// Perform the bucket sort algorithm
void bucketSort( int a[] )
{
   int totalDigits;
   int bucket[ 10 ][ SIZE ] = {};

   totalDigits = numberOfDigits( a, SIZE );

   // put elements in buckets for sorting
   // once sorted, get elements from buckets
   for ( int i = 1; i <= totalDigits; i++ ) 
   {
      distributeElements( a, bucket, i );
      collectElements( a, bucket );

      if ( i != totalDigits )
         zeroBucket( bucket ); // set all bucket contents to zero
   } // end for
} // end function bucketSort

// Determine the number of digits in the largest number
int numberOfDigits( int b[], int arraySize )
{
   int largest = b[ 0 ];
   int digits = 0;

   // find largest array element
   for ( int i = 1; i < arraySize; i++ )
   {
      if ( b[ i ] > largest )
         largest = b[ i ];
   } // end for

   // find number of digits of largest element
   while ( largest != 0 ) 
   {
      digits++;
      largest /= 10;
   } // end while

   return digits;
} // end function numberOfDigits

// Distribute elements into buckets based on specified digit
void distributeElements( int a[], int buckets[][ SIZE ], int digit )
{
   int divisor = 10;
   int bucketNumber;
   int elementNumber;

   for ( int i = 1; i < digit; ++i ) // determine the divisor
      divisor *= 10; // used to get specific digit

   for ( int k = 0; k < SIZE; ++k ) 
   {
      // bucketNumber example for hundreds digit:
      // (1234 % 1000 - 1234 % 100) / 100 --> 2
      bucketNumber = ( a[ k ] % divisor - a[ k ] %
         ( divisor / 10 ) ) / ( divisor / 10 );

      // retrieve value in buckets[bucketNumber][0] to determine
      // which element of the row to store a[i] in.
      elementNumber = ++buckets[ bucketNumber ][ 0 ];
      buckets[ bucketNumber ][ elementNumber ] = a[ k ];
   } // end for
} // end function distributeElements

// Return elements to original array
void collectElements( int a[], int buckets[][ SIZE ])
{
   int subscript = 0;

   // retrieve elements from buckets
   for ( int i = 0; i < 10; i++ )
   {
      for ( int j = 1; j <= buckets[ i ][ 0 ]; j++ )
         a[ subscript++ ] = buckets[ i ][ j ];
   } // end for
} // end function collectElements

// Set all buckets to zero
void zeroBucket( int buckets[][ SIZE ] )
{
   // set all array elements to zero
   for ( int i = 0; i < 10; i++ )
   {
      for ( int j = 0; j < SIZE; j++ )
         buckets[ i ][ j ] = 0;
   } // end for
} // end function zeroBucket

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
