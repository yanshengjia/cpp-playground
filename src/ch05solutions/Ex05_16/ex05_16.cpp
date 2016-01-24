// Exercise 5.16 Solution: ex05_16.cpp
// Calculate compound interest using only integers.
#include <iostream> 
#include <iomanip>  // parameterized stream manipulators
#include <cmath>
using namespace std;

int main()
{
   int amount; // amount on deposit, in pennies
   int principal = 100000; // starting principal, in pennies ($1000)
   int dollars; // dollar portion of amount
   int cents; // cents portion of amount
   double rate = .05; // interest rate

   // display headers for table
   cout << "Year" << setw( 24 ) << "Amount on deposit\n";

   // loop 10 times
   for ( int year = 1; year <= 10; year++ )
   {
      // determine new amount (in pennies)
      amount = static_cast< int >( principal * pow( 1.0 + rate, year ) );

      // determine cents portion of amount (last two digits)
      cents = amount % 100;

      // determine dollars portion of amount
      // integer division truncates decimal places
      dollars = amount / 100;  

      // display year, dollar portion followed by period
      cout << setw( 4 ) << year << setw( 20 ) << dollars << '.';

      // display cents portion
      // if cents portion only 1 digit, insert 0
      if ( cents < 10 )
         cout << '0' << cents << endl;
      else // else, display cents portion
         cout << cents << endl;
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
 **************************************************************************/
