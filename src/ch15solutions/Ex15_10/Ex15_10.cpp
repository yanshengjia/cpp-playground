// Exercise 15.10 Solution: Ex15_10.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   double x = 100.453627; // value to test precision outputs

   cout << fixed; // display output using fixed point notation

   // display output using loop counter as precision
   for ( int loop = 0; loop <= 5; loop++ )
      cout << setprecision( loop ) << "Rounded to " << loop 
          << " digit(s) is " << x << endl;
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
