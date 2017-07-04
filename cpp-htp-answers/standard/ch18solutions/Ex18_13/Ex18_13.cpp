// Exercise 18.13 Solution: Ex18_13.cpp
// NOTE: The problem description should have asked
// the programmer to use a quicksort.
#include <iostream> 
#include <string> 
using namespace std;

// prototypes
void output( const string *, const int );
void quickSort( string [], int, int );
int partition( string [], int, int );

int main()
{
   const int SIZE = 19;

   // an array of strings containing animal names
   string animals[] = { "Macaw", "Lion", "Tiger", "Bear", "Toucan",
      "Zebra", "Puma", "Cat", "Yak", "Boar",  "Fox", "Ferret",
      "Crocodile", "Alligator", "Elk", "Ox",  "Horse", "Eagle", "Hawk" };

   cout << "before:";
   output( animals, SIZE ); // call output to display string array
   quickSort( animals, 0, SIZE ); // sort them in order

   cout << "\nafter:";
   output( animals, SIZE ); // call output to display array of animal
} // end main

// function to print out each string in the array
void output( const string * const ani, const int length )
{
   // loop through the array with the given length
   for ( int j = 0; j < length; ++j )
      cout << ( j % 10 ? ' ': '\n' ) << ani[ j ];

   cout << endl;
} // end function output

// function to sort the array
void quickSort( string a[], int first, int last )
{
   // call function partition 
   int currentLocation;

   if ( first >= last )
      return;   

   currentLocation = partition( a, first, last );
   
   // recursive calls to quickSort to continue the search
   quickSort( a, first, currentLocation - 1 );
   quickSort( a, currentLocation + 1, last );
} // end function quickSort

int partition( string b[], int left, int right )
{
   int pos = left;
   
   // while loop 
   while ( true ) 
   {
      // move through the array from left to right
      while ( b[ pos ] <= b[ right ] && pos != right )
         right--;

      // if the right is reached, return that position
      if ( pos == right )
         return pos;

      // if the element from the left is greater, swap the positions
      if ( b[ pos ] > b[ right ] ) 
      {
         b[ pos ].swap( b[ right ] );
         pos = right;
      } // end if

      // compare from the beginning to the pos index
      while ( b[ left ] <= b[ pos ] && pos != left )
         left++;

      if ( pos == left )
         return pos;

      if ( b[ left ] > b[ pos ] ) 
      {
         b[ pos ].swap( b[ left ] );
         pos = left;
      } // end if
   } // end while 
} // end function partition

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
