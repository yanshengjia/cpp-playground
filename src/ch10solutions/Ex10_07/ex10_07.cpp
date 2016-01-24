// Exercise 10.7 Solution: ex10_07.cpp
// Driver program for class SavingsAccount.
#include <iostream> 
#include <iomanip> 
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

int main()
{
   SavingsAccount saver1( 2000.0 );
   SavingsAccount saver2( 3000.0 );

   SavingsAccount::modifyInterestRate( .03 ); // change interest rate

   cout << "Initial balances:\nSaver 1: ";
   saver1.printBalance();
   cout << "\tSaver 2: ";
   saver2.printBalance();

   saver1.calculateMonthlyInterest();
   saver2.calculateMonthlyInterest();

   cout << "\n\nBalances after 1 month's interest applied at .03:\n"
      << "Saver 1: ";
   saver1.printBalance();
   cout << "\tSaver 2: ";
   saver2.printBalance();

   SavingsAccount::modifyInterestRate( .04 ); // change interest rate
   saver1.calculateMonthlyInterest();
   saver2.calculateMonthlyInterest();
   
   cout << "\n\nBalances after 1 month's interest applied at .04:\n"
      << "Saver 1: ";
   saver1.printBalance();
   cout << "\tSaver 2: ";
   saver2.printBalance();
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
