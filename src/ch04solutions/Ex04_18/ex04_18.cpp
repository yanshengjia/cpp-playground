// Exercise 4.18 Solution: ex04_18.cpp
// Print table of values with counter-controlled repetition.
#include <iostream>
using namespace std;

int main()
{
   int n = 0;
   
   // display table headers with tabbing
   cout << "N\t10*N\t100*N\t1000*N\n\n";

   while ( ++n <= 5 ) // loop 5 times
   {
      // calculate and display table values
      cout << n << '\t' << 10 * n << '\t' << 100 * n
         << '\t' << 1000 * n << '\n';
   } // end while

   cout << endl;
} // end main


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
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
