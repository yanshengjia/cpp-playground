// Exercise 7.35 Solution: Ex07_35.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray( const int [], int, int );

int main()
{
   const int SIZE = 10;
   const int MAXNUMBER = 500;
   int array[ SIZE ];

   srand( time( 0 ) );

   // initialize array elements to random numbers
   for ( int loop = 0; loop < SIZE; loop++ )
      array[ loop ] = 1 + rand() % MAXNUMBER;

   cout << "Array values printed in main:\n"; 

   for ( int j = 0; j < SIZE; j++ ) // print array elements
      cout << setw( 5 ) << array[ j ];

   cout << "\n\nArray values printed in printArray:\n";
   printArray( array, 0, SIZE - 1 );
   cout << endl;
} // end main

void printArray( const int array[], int low, int high )
{
   // print first element of array passed
   cout << setw( 5 ) << array[ low ];

   // return if array only has 1 element
   if ( low == high )
      return;
   else // recursively call printArray with new subarray as argument
      printArray( array, low + 1, high );
} // end function printArray

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
