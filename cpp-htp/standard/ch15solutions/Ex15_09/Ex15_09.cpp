// Exercise 15.9 Solution: Ex15_09.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   // values used for testing output in various field lengths
   int x = 12345;
   double y = 1.2345;

   // display values in fields the size of loop counter
   for ( int loop = 0; loop <= 10; loop++ )
      cout << x << "  printed in a field of size " << setw( 2 ) 
         << loop << " is " << setw( loop ) << x << '\n' << y 
         << " printed in a field of size " << setw( 2 ) 
         << loop << " is " << setw( loop ) << y << '\n';
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
