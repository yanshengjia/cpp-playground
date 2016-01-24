// Exercise 13.16 Solution: ex13_16.cpp
// Processing Accounts polymorphically.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;

int main()
{
   // create vector accounts
   vector < Account * > accounts( 4 );   

   // initialize vector with Accounts
   accounts[ 0 ] = new SavingsAccount( 25.0, .03 ); 
   accounts[ 1 ] = new CheckingAccount( 80.0, 1.0 );
   accounts[ 2 ] = new SavingsAccount( 200.0, .015 ); 
   accounts[ 3 ] = new CheckingAccount( 400.0, .5 );

   cout << fixed << setprecision( 2 );

   // loop through vector, prompting user for debit and credit amounts
   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      cout << "Account " << i + 1 << " balance: $" 
         << accounts[ i ]->getBalance();

      double withdrawalAmount = 0.0;
      cout << "\nEnter an amount to withdraw from Account " << i + 1 
         << ": ";
      cin >> withdrawalAmount;
      accounts[ i ]->debit( withdrawalAmount ); // attempt to debit

      double depositAmount = 0.0;
      cout << "Enter an amount to deposit into Account " << i + 1 
         << ": ";
      cin >> depositAmount;
      accounts[ i ]->credit( depositAmount ); // credit amount to Account

      // downcast pointer
      SavingsAccount *savingsAccountPtr =
         dynamic_cast < SavingsAccount * > ( accounts[ i ] );

      // if Account is a SavingsAccount, calculate and add interest
      if ( savingsAccountPtr != 0 )
      {
         double interestEarned = savingsAccountPtr->calculateInterest();
         cout << "Adding $" << interestEarned << " interest to Account "
            << i + 1 << " (a SavingsAccount)" << endl;
         savingsAccountPtr->credit( interestEarned );
      } // end if
      
      cout << "Updated Account " << i + 1 << " balance: $" 
         << accounts[ i ]->getBalance() << "\n\n";
   } // end for
} // end main


/**************************************************************************
 * (C) Copyright 1992-2008 by Deitel & Associates, Inc. and               *
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

