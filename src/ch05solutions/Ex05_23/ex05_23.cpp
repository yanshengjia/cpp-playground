// Exercise 5.23 Solution: ex05_23.cpp
// Drawing a diamond shape with asterisks using nested control statements.
#include <iostream>
using namespace std; 

int main()
{
   // top half
   for ( int row = 1; row <= 5; row++ ) 
   {
      // print preceding spaces
      for ( int space = 1; space <= 5 - row; space++ )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= 2 * row - 1; asterisk++ ) 
         cout << '*';

      cout << '\n';
   } // end for

   // bottom half
   for ( int row = 4; row >= 1; row-- ) 
   {
      // print preceding spaces
      for ( int space = 1; space <= 5 - row; space++ )
         cout << ' ';

      // print asterisks
      for ( int asterisk = 1; asterisk <= 2 * row - 1; asterisk++ ) 
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
