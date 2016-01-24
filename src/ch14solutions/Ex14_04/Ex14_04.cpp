// Exercise 14.4 solution: Ex14_04.cpp
// Using template functions
#include <iostream> 
using namespace std;

// function template printArray definition
// original function from Fig. 14.1
template< typename T >
void printArray( const T *array, int count )
{
   // display array
   for ( int i = 0; i < count; i++ )
      cout << array[ i ] << " ";

   cout << endl;
} // end function printArray

// overloaded function template printArray
// takes upper and lower subscripts to print
template< typename T >
int printArray( T const * array, int size, int lowSubscript, 
   int highSubscript )
{
   // check if subscript is negative or out of range
   if ( size < 0 || lowSubscript < 0 || highSubscript >= size )
      return 0;   

   int count = 0; 

   // display array
   for ( int i = lowSubscript; i <= highSubscript; i++ ) 
   {
      count++;
      cout << array[ i ] << ' ';
   } // end for

   cout << endl;
   return count; // number of elements output
} // end overloaded function printArray

int main()
{
   const int ACOUNT = 5; // size of array a
   const int BCOUNT = 7; // size of array b
   const int CCOUNT = 6; // size of array c

   // declare and initialize arrays
   int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
   double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
   char c[ CCOUNT ] = "HELLO"; // 6th position for null
   int elements;

   // display array a using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( a, ACOUNT );

   // display array a using new printArray function
   cout << "Array a contains:\n";
   elements = printArray( a, ACOUNT, 0, ACOUNT - 1 );
   cout << elements << " elements were output\n";

   // display elements 1-3 of array a
   cout << "Array a from positions 1 to 3 is:\n";
   elements = printArray( a, ACOUNT, 1, 3 );
   cout << elements << " elements were output\n";

   // try to print an invalid element
   cout << "Array a output with invalid subscripts:\n";
   elements = printArray( a, ACOUNT, -1, 10 );
   cout << elements << " elements were output\n\n";

   // display array b using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( b, BCOUNT );

   // display array b using new printArray function
   cout << "Array b contains:\n";
   elements = printArray( b, BCOUNT, 0, BCOUNT - 1 );
   cout << elements << " elements were output\n";

   // display elements 1-3 of array b
   cout << "Array b from positions 1 to 3 is:\n";
   elements = printArray( b, BCOUNT, 1, 3 );
   cout << elements << " elements were output\n";

   // try to print an invalid element
   cout << "Array b output with invalid subscripts:\n";
   elements = printArray( b, BCOUNT, -1, 10 );
   cout << elements << " elements were output\n\n";

   // display array c using original printArray function
   cout << "\nUsing original printArray function\n";
   printArray( c, CCOUNT );

   // display array c using new printArray function
   cout << "Array c contains:\n";
   elements = printArray( c, CCOUNT, 0, CCOUNT - 2 );
   cout << elements << " elements were output\n";

   // display elements 1-3 of array c
   cout << "Array c from positions 1 to 3 is:\n";
   elements = printArray( c, CCOUNT, 1, 3 );
   cout << elements << " elements were output\n";

   // try to display an invalid element
   cout << "Array c output with invalid subscripts:\n";
   elements = printArray( c, CCOUNT, -1, 10 );
   cout << elements << " elements were output" << endl;
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
