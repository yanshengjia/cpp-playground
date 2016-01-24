// Exercise 5.10 Solution: ex05_10.cpp
// Factorial program.
#include <iostream>
using namespace std;

int main()
{
   int factorial = 1; // current factorial value

   // display table headers
   cout << "x\tx!\n";

   // display factorial of numbers 1-5
   for ( int i = 1; i <= 5; i++ )
   {
      factorial *= i; // i!
      
      // display factorial value in table
      cout << i << '\t' << factorial << '\n';
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
