// Exercise 19.9 Solution: BinarySearch.cpp
// BinarySearch class member-function definition.
#include <iostream>
#include <cstdlib> // prototypes for functions srand and rand
#include <ctime> // prototype for function time
#include <algorithm> // prototype for sort function
#include "BinarySearch.h" // class BinarySearch definition
using namespace std;

// constructor initializes vector with random ints and sorts the vector
BinarySearch::BinarySearch( int vectorSize )
{
   size = ( vectorSize > 0 ? vectorSize : 10 ); // validate vectorSize
   srand( time( 0 ) ); // seed using current time

   // fill vector with random ints in range 10-99
   for ( int i = 0; i < size; i++ )
      data.push_back( 10 + rand() % 90 ); // 10-99

   sort( data.begin(), data.end() ); // sort the data
} // end BinarySearch constructor

// perform a binary search on the data
int BinarySearch::binarySearch( int searchElement ) const
{
   int low = 0; // low end of the search area
   int high = size - 1; // high end of the search area

   return recursiveBinarySearch( searchElement, low, high );
} // end function binarySearch 

// perform a recursive binary search on the data             
int BinarySearch::recursiveBinarySearch( 
   int searchElement, int low, int high ) const
{
   if ( low > high ) // test base case; no element left to check
      return -1;

   // print remaining elements of vector to be searched
   displaySubElements( low, high );

   int middle = ( low + high + 1 ) / 2; // middle element

   // output spaces for alignment
   for ( int i = 0; i < middle; i++ )
      cout << "   ";

   cout << " * " << endl; // indicate current middle

   int location = -1; // variable to return; -1 if the value was not found

   // if the element is found at the middle
   if ( searchElement == data[ middle ] )
      location = middle; // location is the current middle
   else if ( searchElement < data[ middle ] ) // middle is too high
      // eliminate the higher half
      location = recursiveBinarySearch( searchElement, low, middle - 1 ); 
   else // middle element is too low
      // eliminate the lower half
      location = recursiveBinarySearch( searchElement, middle + 1, high );

   return location; // return location of search key
} // end function recursiveBinarySearch

// display values in vector
void BinarySearch::displayElements() const
{
   displaySubElements( 0, size - 1 );
} // end function displayElements 

// display certain values in vector
void BinarySearch::displaySubElements( int low, int high ) const
{
   for ( int i = 0; i < low; i++ ) // output spaces for alignment
      cout << "   ";

   for ( int i = low; i <= high; i++ ) // output elements left in vector
      cout << data[ i ] << " ";

   cout << endl;
} // end function displaySubElements


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
