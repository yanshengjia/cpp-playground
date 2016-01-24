// Exercise 11.8 Solution: ex11_08.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
   Complex x, y( 4.3, 8.2 ), z( 3.3, 1.1 ), k;

   cout << "Enter a complex number in the form: (a, b)\n? ";
   cin >> k; // demonstrating overloaded >>
   cout << "x: " << x << "\ny: " << y << "\nz: " << z << "\nk: "
      << k << '\n'; // demonstrating overloaded <<
   x = y + z; // demonstrating overloaded + and =
   cout << "\nx = y + z:\n" << x << " = " << y << " + " << z << '\n';
   x = y - z; // demonstrating overloaded - and =
   cout << "\nx = y - z:\n" << x << " = " << y << " - " << z << '\n';
   x = y * z; // demonstrating overloaded * and =
   cout << "\nx = y * z:\n" << x << " = " << y << " * " << z << "\n\n";

   if ( x != k ) // demonstrating overloaded !=
      cout << x << " != " << k << '\n';

   cout << '\n';
   x = k;

   if ( x == k ) // demonstrating overloaded ==
      cout << x << " == " << k << '\n';
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
