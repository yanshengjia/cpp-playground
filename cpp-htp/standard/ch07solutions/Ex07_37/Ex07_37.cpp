// Exercise 7.37 Solution: Ex07_37.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAXRANGE = 1000;
int recursiveMinimum( const int [], int, int );

int main()
{
   const int SIZE = 10;
   int array[ SIZE ];
   int smallest;

   srand( time( 0 ) );

   // initialize elements of array to random numbers
   for ( int loop = 0; loop < SIZE; loop++ )
      array[ loop ] = 1 + rand() % MAXRANGE;

   // display array
   cout << "Array members are:\n";

   for ( int k = 0; k < SIZE; k++ )
      cout << setw( 5 ) << array[ k ];

   // find and display smallest array element
   cout << '\n';
   smallest = recursiveMinimum( array, 0, SIZE - 1 );
   cout << "\nSmallest element is: " << smallest << endl;
} // end main

// function to recursively find minimum array element
int recursiveMinimum( const int array[], int low, int high )
{
   static int smallest = MAXRANGE;

   // if first element of array is smallest so far
   // set smallest equal to that element
   if ( array[ low ] < smallest )
      smallest = array[ low ];

   // if only one element in array, return smallest
   // else recursively call recursiveMinimum with new subarray
   return low == high ? 
      smallest : recursiveMinimum( array, low + 1, high );
} // end function recursiveMinimum

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
