// Exercise 6.12 Solution: Ex06_12.cpp
// Calculate charges for 3 cars at parking garage.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges( double ); // function prototype

int main()
{
   double hour; // number of hours for current car
   double currentCharge; // parking charge for current car
   double totalCharges = 0.0; // total charges
   double totalHours = 0.0; // total number of hours
   bool first = true; // used for printing table headers

   cout << fixed; // set floating-point number format
   cout << "Enter the hours parked for 3 cars: ";

   // loop 3 times for 3 cars
   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      totalHours += hour; // add current hours to total hours

      // if first time through loop, display headers
      if ( first )
      {
         cout << setw( 5 ) << "Car" << setw( 15 ) << "Hours"
            << setw( 15 ) << "Charge\n";

         first = false; // prevent from printing again
      } // end if

      // calculate current car's parking charge
      currentCharge = calculateCharges( hour );
      totalCharges += currentCharge; // update total charges

      // display row data for current car
      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour
         << setw( 14 ) << setprecision( 2 ) << currentCharge << "\n";
   } // end for

   // display row data for totals
   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
      << totalHours << setw( 14 ) << setprecision( 2 )
      << totalCharges << endl;
} // end main

// calculateCharges returns charge according to number of hours
double calculateCharges( double hours )
{
   double charge; // calculated charge

   if ( hours < 3.0 ) // $2 for up to 3 hours
      charge = 2.0;
   else // $.50 for each extra hour
      charge = 2.0 + .5 * ceil( hours - 3.0 );

   // return charge, ensuring charge is not over $10.00
   return ( charge > 10.0 ? 10.0 : charge );
} // end function calculateCharges

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
