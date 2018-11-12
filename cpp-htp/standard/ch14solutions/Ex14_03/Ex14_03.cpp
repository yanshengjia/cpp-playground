// Exercise 14.3 solution: Ex14_03.cpp
// This program puts values into an array, sorts the values into
// ascending order, and prints the resulting array.
#include <iostream> 
#include <iomanip> 
using namespace std;

// function template for insertionSort
template < typename T >
void insertionSort( T * const array, int size )
{
   T insert; // temporary variable to hold element to insert

   // loop over size elements
   for ( int next = 0; next < size; next++ )
   {
      insert = array[ next ]; // store value in current element
      int moveItem = next; // initialize location to place element

      // search for place to put current element
      while ( moveItem > 0 && array[ moveItem - 1 ] > insert )
      {
         // shift element right one slot
         array[ moveItem ] = array[ moveItem - 1 ];
         moveItem--;
      } // end while

      array[ moveItem ] = insert; // place inserted element
   } // end for
} // end function template insertionSort

// function template for printArray
template < typename T >
void printArray( T * const array, int size )
{
   for ( int i = 0; i < size; i++ )
      cout << setw( 6 ) << array[ i ];
} // end function template printArray

int main()
{ 
   const int SIZE = 10; // size of array
   int a[ SIZE ] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

   // display int array in original order
   cout << "int data items in original order\n";
   printArray( a, SIZE ); // print int array
   insertionSort( a, SIZE ); // sort int array

   // display int array in sorted order
   cout << "\nint data items in ascending order\n";
   printArray( a, SIZE );
   cout << "\n\n";

   // initialize double array
   double b[ SIZE ] = 
      { 10.1, 9.9, 8.8, 7.7, 6.6, 5.5, 4.4, 3.3, 2.2, 1.1 };
   
   // display double array in original order								 
   cout << "double point data items in original order\n";
   printArray( b, SIZE ); // print double array
   insertionSort( b, SIZE ); // sort double array
   
   // display sorted double array
   cout << "\ndouble point data items in ascending order\n";
   printArray( b, SIZE );
   cout << endl;
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
