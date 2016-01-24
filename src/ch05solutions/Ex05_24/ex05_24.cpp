// Exercise 5.24 Solution: ex05_24.cpp
// Drawing a diamond shape with the specified size.
#include <iostream>
using namespace std; 

int main()
{
   int size; // number of rows in diamond

   // loop until valid input
   do 
   {    
      cout << "Enter an odd number for the diamond size (1-19): \n";
      cin >> size;
   } while ( ( size < 1 ) || ( size > 19 ) || ( ( size % 2 ) != 1 ) );

   // top half
   for ( int rows = 1; rows <= size - 2; rows += 2 ) 
   {
      // print preceding spaces
      for ( int space = ( size - rows ) / 2; space > 0; space-- )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= rows; asterisk++ )
         cout << '*';

      cout << '\n';
   } // end for

   // bottom half
   for ( int rows = size; rows >= 0; rows -= 2 ) 
   {
      // print preceding spaces
      for ( int space = ( size - rows ) / 2; space > 0; space-- )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= rows; asterisk++ )
         cout << '*';

      cout << '\n';
   } // end for

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
