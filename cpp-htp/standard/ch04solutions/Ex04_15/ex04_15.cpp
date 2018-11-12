// Exercise 4.15 Solution: ex04_15.cpp
// Calculate salesperson earnings.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std; // sets numeric output precision

int main()
{
   double sales; // gross weekly sales
   double wage; // commissioned earnings
   
   // processing phase
   // get first sales
   cout << "Enter sales in dollars (-1 to end): ";
   cin >> sales;

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // loop until sentinel value read from user
   while ( sales != -1.0 ) 
   {    
      wage = 200.0 + 0.09 * sales; // calculate wage
      cout << "Salary is: $" << wage; // display salary
      
      // prompt for next sales
      cout << "\n\nEnter sales in dollars (-1 to end): ";
      cin >> sales;
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
 *************************************************************************/
