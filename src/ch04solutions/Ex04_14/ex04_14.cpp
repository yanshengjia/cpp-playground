// Exercise 4.14 Solution: ex04_14.cpp
// Calculate credit balances.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;

int main()
{
   int account; // account number
   double balance; // account balance
   double charges; // total charges
   double credits; // total credits
   double creditLimit; // allowed credit limit

   cout << "Enter account number (or -1 to quit): ";
   cin >> account; // read in account number

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // exit if the input is -1; otherwise proceed with the program
   while ( account != -1 )
   {
      cout << "Enter beginning balance: ";
      cin >> balance; // read in original balance

      cout << "Enter total charges: ";
      cin >> charges; // read in charges

      cout << "Enter total credits: ";
      cin >> credits; // read in credits

      cout << "Enter credit limit: ";
      cin >> creditLimit; // read in credit limit

      // calculate and display new balance
      balance = balance + charges - credits;
      cout << "New balance is " << balance;

      // display a warning if the user has exceed the credit limit
      if ( balance > creditLimit )
         cout << "\nAccount:      " << account
            << "\nCredit limit: " << creditLimit 
            << "\nBalance:      " << balance 
            << "\nCredit Limit Exceeded.";

      cout << "\n\nEnter account number (or -1 to quit): ";
      cin >> account; // read in next account number
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
