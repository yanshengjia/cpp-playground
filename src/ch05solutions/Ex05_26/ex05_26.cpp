// Exercise 5.26 Solution: ex05_26.cpp
// Prints 5 groups of 3 lines, each containing 4 asterisks.
#include <iostream> 
using namespace std;

int main()
{
   for ( int i = 1; i <= 5; i++ ) 
   {
      for ( int j = 1; j <= 3; j++ ) 
      {
         for ( int k = 1; k <= 4; k++ )
            cout << '*';

         cout << endl;
      } // end inner for

      cout << endl;
   } // end outer for
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
