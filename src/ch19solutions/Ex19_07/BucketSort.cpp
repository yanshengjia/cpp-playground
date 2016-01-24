// Exercise 19.7 Solution: BucketSort.cpp
// BucketSort class member-function definitions.
#include <iostream> 
#include <cstdlib> // prototypes for functions srand and rand
#include <ctime> // prototype for function time
#include "BucketSort.h" // BucketSort class definition
using namespace std;

// constructor
BucketSort::BucketSort( int vectorSize )
{
   size = ( vectorSize > 0 ? vectorSize : 10 ); // validate vectorSize
   srand( time( 0 ) ); // seed using current time

   // fill vector with random ints in range 10-99
   for ( int i = 0; i < size; i++ )
      data.push_back( 10 + rand() % 90 ); // 10-99

   // create bucket vector of appropriate size
   for ( int i = 0; i < 10; i++ )
      bucket.push_back( vector < int >( size ) );
} // end BucketSort constructor

// display vector elements
void BucketSort::displayElements() const
{
   for ( int i = 0; i < size; i++ )
      cout << data[ i ] << " ";

   cout << endl; 
} // end function displayElements

// perform a bucket sort on vector
void BucketSort::sort()
{
   int totalDigits;
   zeroBucket();

   totalDigits = numberOfDigits();

   // put elements in buckets for sorting
   // once sorted, get elements from buckets
   for ( int i = 1; i <= totalDigits; i++ ) 
   {
      distributeElements( i );
      collectElements();

      if ( i != totalDigits )
         zeroBucket(); // set all bucket contents to zero
   } // end for
} // end function sort

// distribute elements into buckets based on specified digit
void BucketSort::distributeElements( int digit )
{
   int divisor = 10;
   int bucketNumber;
   int elementNumber;

   for ( int i = 1; i < digit; ++i ) // determine the divisor
      divisor *= 10; // used to get specific digit

   for ( int k = 0; k < size; ++k ) 
   {
      // bucketNumber example for hundreds digit:
      // (1234 % 1000 - 1234 % 100) / 100 --> 2
      bucketNumber = ( data[ k ] % divisor - data[ k ] %
         ( divisor / 10 ) ) / ( divisor / 10 );

      // retrieve value in bucket[bucketNumber][0] to determine
      // which element of the row to store a[i] in.
      elementNumber = ++bucket[ bucketNumber ][ 0 ];
      bucket[ bucketNumber ][ elementNumber ] = data[ k ];
   } // end for
} // end function distributeElements

// return elements to original array
void BucketSort::collectElements()
{
   int subscript = 0;

   // retrieve elements from bucket vector
   for ( int i = 0; i < 10; i++ )
   {
      for ( int j = 1; j <= bucket[ i ][ 0 ]; j++ )
         data[ subscript++ ] = bucket[ i ][ j ];
   } // end for
} // end function collectElements

// determine the number of digits in the largest number
int BucketSort::numberOfDigits()
{
   int largest = data[ 0 ];
   int digits = 0;

   // find largest vector element
   for ( int i = 1; i < size; i++ )
   {
      if ( data[ i ] > largest )
         largest = data[ i ];
   } // end for

   // find number of digits of largest element
   while ( largest != 0 ) 
   {
      ++digits;
      largest /= 10;
   } // end while

   return digits;
} // end function numberOfDigits

// set all buckets to zero
void BucketSort::zeroBucket()
{
   // set all vector elements to zero
   for ( int i = 0; i < 10; i++ )
   {
      for ( int j = 0; j < size; j++ )
         bucket[ i ][ j ] = 0;
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
 *************************************************************************/
