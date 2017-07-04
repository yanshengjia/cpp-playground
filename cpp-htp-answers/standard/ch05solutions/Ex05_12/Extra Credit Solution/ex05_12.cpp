// Exercise 5.12 Extra Credit Solution: ex05_12.cpp
// Create triangles of asterisks side-by-side using nested for loops
#include <iostream>
using namespace std; 

int main()
{
   int row; // the row position
   int column; // the column position
   int space; // number of spaces to print

   // print one row at a time, tabbing between triangles
   for ( row = 1; row <= 10; row++ )
   {
      // first triangle
      for ( column = 1; column <= row; column++ )
         cout << "*";

      for ( space = 1; space <= 10 - row; space++ )
         cout << " ";

      cout << "\t";

      // second triangle
      for ( column = 10; column >= row; column-- )
         cout << "*";

      for ( space = 1; space < row; space++ )
         cout << " ";

      cout << "\t";

      // third triangle
      for ( space = 1; space < row; space++ )
         cout << " ";

      for ( column = 10; column >= row; column-- )
         cout << "*";

      cout << "\t";

      // fourth triangle
      for ( space = 10; space > row; space-- )
         cout << " ";

      for ( column = 1; column <= row; column++ )
         cout << "*";

      cout << endl;
   } // end for
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
 *************************************************************************/
