// Exercise 7.12 Part B Solution: Ex07_12.cpp
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{   
   const int SIZE = 10; // size of array
   int a[ SIZE ] = { 6, 4, 2, 8, 10, 12, 37, 45, 68, 89 };
   int hold; // temporary variable used for swapping
   int numberOfComp = 0; // number of comparisons made
   int comp; // used to control loop and for subscripts
   bool swapCheck = true; // was a swap made?

   // display array in original order
   cout << "Data items in original order\n";

   for ( int i = 0; i < SIZE; ++i )
      cout << setw( 4 ) << a[ i ];

   cout << "\n\n";

   // sort the array
   // loop until end of array, or until no swaps have been made
   for ( int pass = 1; pass < SIZE - 1 && swapCheck == true; pass++ ) 
   {
      cout << "After pass " << pass - 1 << ": ";
      swapCheck = false; // assume no swaps will be made

      // traverse and compare unsorted part of array
      for ( comp = 0; comp < SIZE - pass; comp++ ) 
      {
         numberOfComp++;

         // compare two adjacent array elements
         // if swap is made, set swapCheck to true
         if ( a[ comp ] > a[ comp + 1 ] ) 
         {
            hold = a[ comp ];
            a[ comp ] = a[ comp + 1 ];
            a[ comp + 1 ] = hold;
            swapCheck = true; // a swap has been made
         } // end if

         cout << setw( 3 ) << a[ comp ];
      } // end inner for

      cout << setw( 3 ) << a[ comp ] << '\n'; // print last array value
   } // end outer for

   // print sorted array
   cout << "\nData items in ascending order\n";

   for ( int q = 0; q < SIZE; q++ )
      cout << setw( 4 ) << a[ q ];

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
