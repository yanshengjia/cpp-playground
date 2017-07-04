// Exercise 19.8 Solution: Ex19_08.cpp
// Searching a vector with recursive linear search.
#include <iostream> 
#include <vector>
using namespace std;

int recursiveLinearSearch( vector < int > &, int, int, int );

int main()
{
   const int SIZE = 100;
   vector < int > data( SIZE );
   int searchKey;
   int element;

   // initialize vector elements
   for ( int loop = 0; loop < SIZE; loop++ )
      data[ loop ] = 2 * loop;

   // obtain search key from user
   cout << "Enter the integer search key: ";
   cin >> searchKey;

   // search array for search key
   element = recursiveLinearSearch( data, searchKey, 0, SIZE - 1 );

   // display if search key was found
   if ( element != -1 )
      cout << "Found value in element " << element << endl;
   else
      cout << "Value not found" << endl;
} // end main

// function to search vector for specified key
int recursiveLinearSearch( 
   vector < int > &array, int key, int low, int high )
{
   // search array for key
   if ( array[ low ] == key )
      return low;
   else if ( low == high )
      return -1;
   else 
      return recursiveLinearSearch( array, key, low + 1, high );
} // end function recursiveLinearSearch

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
