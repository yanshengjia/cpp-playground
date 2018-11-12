// Exercise 5.29 Solution: ex05_29.cpp
// Peter Minuit Problem:
// calculating compound interest with several interest rates.
#include <iostream>
#include <iomanip>
#include <cmath> // standard C++ math library
using namespace std;

int main()
{
   double amount; // amount on deposit at end of each year
   double principal = 24.0; // initial amount before interest
   double rate; // interest rate

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // loop through interest rates 5% to 10%
   for ( int rate = 5; rate <= 10; rate++ ) 
   {
       // display headers
       cout << "\nInterest rate: " << rate << "%\n"
          << "Year" << setw( 30 ) << "Amount on deposit" << endl;

       // calculate amount on deposit for each of 384 years
       for ( int year = 1; year <= 384; year++ ) 
       {
          // calculate new amount for specified year
          amount = principal * pow( 1.0 + rate / 100.0, year );

          // display the year and the amount
          cout << setw( 4 ) << year << setw( 30 ) << amount << endl;
       } // end inner for 
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
