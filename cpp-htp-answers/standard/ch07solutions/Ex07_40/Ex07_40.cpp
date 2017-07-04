// Exercise 7.40 Solution: Ex07_40.cpp
#include <iostream> 
#include <iomanip> 
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAXRANGE = 1000;
int recursiveMinimum( const vector< int > &, int, int );

int main()
{
   vector< int > array( 10 );
   int smallest;

   srand( time( 0 ) );

   // initialize elements of array to random numbers
   for ( size_t loop = 0; loop < array.size(); loop++ )
      array[ loop ] = 1 + rand() % MAXRANGE;

   // display array
   cout << "Array members are:\n";

   for ( size_t k = 0; k < array.size(); k++ )
      cout << setw( 5 ) << array[ k ];

   // find and display smallest array element
   cout << '\n';
   smallest = recursiveMinimum( array, 0, array.size() - 1 );
   cout << "\nSmallest element is: " << smallest << endl;
} // end main

// function to recursively find minimum array element
int recursiveMinimum( const vector< int > &array, int low, int high )
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
