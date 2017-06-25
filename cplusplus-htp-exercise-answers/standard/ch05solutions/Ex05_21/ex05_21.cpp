// Exercise 5.21 Solution: ex05_21.cpp
// Calculate wages for each employee.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std; 

int main()
{
   int payCode; // current employee's pay code
   int pieces; // current pieceworker's number of pieces
   double salary; // current employee's salary
   double hours; // current hourly employee's hours
   double pay; // current employee's weekly pay

   // prompt for first employee input
   cout << "Enter paycode (-1 to end): ";
   cin >> payCode;   

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // loop until sentinel value read from user
   while ( payCode != -1 ) 
   {
      // switch to appropriate computation according to pay code
      switch ( payCode ) 
      {
         case 1: // pay code 1 corresponds to manager
            // prompt for weekly salary
            cout << "Manager selected.\nEnter weekly salary: ";
            cin >> salary;

            // manager's pay is weekly salary
            cout << "The manager's pay is $" << salary << '\n';
            break; // exit switch

         case 2: // pay code 2 corresponds to hourly worker
            // prompt for hourly salary
            cout << "Hourly worker selected.\n"
               << "Enter the hourly salary: ";
            cin >> salary;

            // prompt for number of hours worked
            cout << "Enter the total hours worked: ";
            cin >> hours;

            // pay fixed for up to 40 hours
            // 1.5 for hours over 40
            pay = ( hours > 40.0 ? ( hours - 40 ) * 1.5 * salary
                + salary * 40.0 : salary * hours );

            // display current employee's pay
            cout << "Worker's pay is $" << pay << '\n';
            break; // exit switch

         case 3: // pay code 3 corresponds to commission worker
            // prompt for gross weekly sales
            cout << "Commission worker selected.\n"
                 << "Enter gross weekly sales: ";
            cin >> salary;

            // pay $250 plus 5.7% of gross weekly sales
            pay = 250.0 + 0.057 * salary;

            // display current employee's pay
            cout << "Commission worker's pay is $" << pay << '\n';
            break; // exit switch

         case 4: // pay code 4 corresponds to pieceworker
            // prompt for number of pieces
            cout << "Pieceworker selected.\n" 
               << "Enter number of pieces: ";
            cin >> pieces;

            // prompt for wage per piece
            cout << "Enter wage per piece: ";
            cin >> salary;

            pay = pieces * salary; // compute pay 

            // display current employee's pay
            cout << "Pieceworker's pay is $" << pay << '\n';
            break; // exit switch

         default: // default case
            cout << "Invalid pay code.\n";
            break;
      } // end switch

      // prompt for next employee input
      cout << "\nEnter paycode (-1 to end): ";
      cin >> payCode;
   } // end while
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
