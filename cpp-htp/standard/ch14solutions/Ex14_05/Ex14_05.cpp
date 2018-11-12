// Exercise 14.5 Solution: Ex14_05.cpp
// Using template functions
#include <iostream> 
#include <iomanip> 
#include <string>
using namespace std;

// function template printArray
template< typename T >
void printArray( T const * array, int size )
{
   // display elements of array
   for ( int i = 0; i < size; i++ )
      cout << array[ i ] << ' ';

   cout << endl;
} // end function printArray

// function that prints array of strings in tabular format
void printArray( const string stringArray[], int size )
{
   // display elements of array
   for ( int i = 0; i < size; i++ ) 
   {
      cout << setw( 10 ) << stringArray[ i ];

      if ( ( i + 1 ) % 4 == 0 ) // create rows
         cout << '\n';
   } // end for

   cout << endl;
} // end function printArray

int main()
{
   const int ACOUNT = 5; // size of array a
   const int BCOUNT = 7; // size of array b
   const int CCOUNT = 6; // size of array c
   const int SCOUNT = 8; // size of array strings

   // initialize arrays
   int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
   double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
   char c[ CCOUNT ] = "HELLO"; // 6th position for null
   string strings[ SCOUNT ] = 
      { "one", "two", "three", "four", "five", "six", "seven", "eight" };

   cout << "Array a contains:\n";
   printArray( a, ACOUNT ); // integer template function

   cout << "\nArray b contains:\n";
   printArray( b, BCOUNT ); // float template function

   cout << "\nArray c contains:\n";
   printArray( c, CCOUNT ); // character template function

   cout << "\nArray strings contains:\n";
   printArray( strings, SCOUNT ); // function specific to string arrays
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
