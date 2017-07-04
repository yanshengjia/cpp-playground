// Exercise 18.26 Solution: Ex18_26.cpp
#include <iostream> 
#include <string>
using namespace std;

// prototypes
void output( const string *, const int );
void selectionSort( string [], const int );
void swap( string * const, string * const );

int main()
{
   const int SIZE = 19;

   string animals[ SIZE ] = { "Macaw", "Lion", "Tiger", "Bear", "Toucan", 
      "Zebra", "Puma", "Cat", "Yak", "Boar", "Fox", "Ferret",
       "Crocodile", "Alligator", "Elk", "Ox", "Horse", "Eagle", "Hawk" };

   cout << "before:";
   output( animals, SIZE );
   
   selectionSort( animals, SIZE ); // sort string

   cout << "\nafter:";
   output( animals, SIZE );
} // end main

// function output to print array of animal names
void output( const string * ani, const int length )
{
   for ( int j = 0; j < length; j++ )
      cout << ( j % 10 ? ' ': '\n' ) << ani[ j ];

   cout << endl;
} // end function output

// function to sort array
void selectionSort( string animals[], const int size )
{
   int smallest; // index of smallest element

   // loop over size - 1 elements
   for ( int i = 0; i < size - 1; i++ )
   {
      smallest = i; // first index of remaining vector

      // loop to find index of smallest (or largest) element
      for ( int index = i + 1; index < size; index++ )
         if ( animals[ smallest ] > animals[ index ] )
            smallest = index;

      swap( &animals[ smallest ], &animals[ i ] );
   } // end if
} // end function selectionSort

// swap values at memory locations to which 
// element1Ptr and element2Ptr point
void swap( string * const element1Ptr, string * const element2Ptr )
{
   string hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap

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
