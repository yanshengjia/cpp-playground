// Exercise 19.5 Solution: Ex19_05.cpp
// This program sorts a vector's values into ascending order.
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

   int hold; // temporary location used to swap vector elements

   cout << "Data items in original order\n";

   // output original vector
   for ( int i = 0; i < SIZE; i++ )
      cout << setw( 4 ) << a[ i ];

   // bubble sort
   // loop to control number of passes
   for ( int pass = 0; pass < SIZE - 1; pass++ )
   {
      // loop to control number of comparisons per pass
      for ( int j = 0; j < SIZE - 1; j++ )  
      {
         // compare side-by-side elements and swap them if 
         // first element is greater than second element
         if ( a[ j ] > a[ j + 1 ] ) 
         {      
            hold = a[ j ];        
            a[ j ] = a[ j + 1 ]; 
            a[ j + 1 ] = hold;  
         } // end if
      } // end for
   } // end for

   cout << "\nData items in ascending order\n";

   // output sorted vector
   for ( int k = 0; k < SIZE; k++ )
      cout << setw( 4 ) << a[ k ];

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
