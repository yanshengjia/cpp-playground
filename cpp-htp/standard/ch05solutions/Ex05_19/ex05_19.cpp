// Exercise 5.19 Solution: ex05_19.cpp
// Approximate value for pi.
#include <iostream> 
#include <iomanip> // parameterized stream manipulators
using namespace std;

int main()
{
   long double pi = 0.0; // approximated value for pi 
   long double denom = 1.0; // denominator of current term
   long accuracy = 1000; // number of terms

   // set floating-point number format
   cout << fixed << setprecision( 8 );

   // display table headers
   cout << "Accuracy set at: " << accuracy << "\n\nterm\t\tpi\n";

   // loop through each term
   for ( long loop = 1; loop <= accuracy; loop++ ) 
   {
      if ( loop % 2 != 0 ) // if odd-numbered term, add current term
         pi += 4.0 / denom;
      else // if even-numbered term, subtract current term
         pi -= 4.0 / denom;

      // display number of terms and 
      // approximated value for pi with 8 digits of precision
      cout << loop << "\t\t" << pi << '\n';

      denom += 2.0; // update denominator
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
