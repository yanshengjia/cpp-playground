// Exercise 5.13 Solution: ex05_13.cpp
// Displaying bar charts using asterisks.
#include <iostream>
using namespace std; 

int main()
{
   int number; // current number

   cout << "Enter 5 numbers between 1 and 30: ";

   // loop 5 times
   for ( int i = 1; i <= 5; i++ ) 
   {
      cin >> number; // get a number from the user

      // print asterisks corresponding to current input
      for ( int j = 1; j <= number; j++ )
         cout << '*';

      cout << endl;
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
 *************************************************************************/
