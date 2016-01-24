// Exercise 5.9 Solution: ex05_09.cpp
// Calculate and print product of odd integers from 1 to 15.
#include <iostream>
using namespace std;

int main()
{
   int product = 1;

   // calculate product
   // increment counter i by 2 for odd numbers
   for ( int i = 3; i <= 15; i += 2 )
      product *= i;

   // display resulting product
   cout << "Product of the odd integers from 1 to 15 is: "
      << product << endl;
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
