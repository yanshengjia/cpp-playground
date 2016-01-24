// Exercise 7.12 Part A Solution: Ex07_12.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   const int SIZE = 10; // size of array
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int hold;
   int numberOfComp = 0; // number of comparisons made
   int comp; // used to control for loop and for subscripts

   // display original, unsorted array
   cout << "Data items in original order\n";

   for ( int i = 0; i < SIZE; ++i )
      cout << setw( 4 ) << a[ i ];

   cout << "\n\n";

   // begin sorting the array
   for ( int pass = 1; pass < SIZE; pass++ ) 
   {
      cout << "After pass " << pass - 1 << ": ";

      // traverse and compare unsorted part of array
      for ( comp = 0; comp < SIZE - pass; comp++ )
      {
         numberOfComp++;

         // compare adjacent array elements
         if ( a[ comp ] > a[ comp + 1 ] ) 
         {
            hold = a[ comp ];
            a[ comp ] = a[ comp + 1 ];
            a[ comp + 1 ] = hold;
         } // end if

         cout << setw( 3 ) << a[ comp ];
      } // end inner for

      cout << setw( 3 ) << a[ comp ] << '\n'; // print last array value
   } // end outer for

   // diplay array in sorted order
   cout << "\nData items in ascending order\n";

   for ( int j = 0; j < SIZE; j++ )
      cout << setw( 4 ) << a[ j ];

   // display the number of comparisons made
   cout << "\nNumber of comparisons = " << numberOfComp << endl;
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
