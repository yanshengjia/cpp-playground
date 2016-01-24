// Exercise 19.6 Part B Solution: Ex19_06.cpp
#include <iostream> 
#include <iomanip> 
#include <vector>
using namespace std;

int main()
{
   const int SIZE = 10; 
   int data[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   vector < int > a; // declare vector< int > to sort

   // fill the vector with values
   for ( int i = 0; i < SIZE; i++ )
      a.push_back( data[ i ] );

   int hold;
   int numberOfComp = 0; // number of comparisons made
   int comp; // used to control for loop and for subscripts
   bool swapCheck = true; // was a swap made?

   // display original, unsorted vector
   cout << "Data items in original order\n";

   for ( int i = 0; i < SIZE; i++ )
      cout << setw( 4 ) << a[ i ];

   cout << "\n\n";

   // begin sorting the vector
   for ( int pass = 1; pass < SIZE && swapCheck; pass++ ) 
   {
      cout << "After pass " << pass - 1 << ": ";
      swapCheck = false; // assume no swaps will be made

      // traverse and compare unsorted part of vector
      for ( comp = 0; comp < SIZE - pass; comp++ )
      {
         ++numberOfComp;

         // compare adjacent vector elements
         if ( a[ comp ] > a[ comp + 1 ] ) 
         {
            hold = a[ comp ];
            a[ comp ] = a[ comp + 1 ];
            a[ comp + 1 ] = hold;
            swapCheck = true; // a swap has been made
         } // end if

         cout << setw( 3 ) << a[ comp ];
      } // end inner for

      cout << setw( 3 ) << a[ comp ] << '\n'; // print last vector value
   } // end outer for

   // diplay vector in sorted order
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
