// Exercise 10.7 Solution: SavingsAccount.cpp
// Member-function defintions for class SavingsAccount.
#include <iostream> 
#include <iomanip>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

// initialize static data member
double SavingsAccount::annualInterestRate = 0.0;

// calculate monthly interest for this savings account
void SavingsAccount::calculateMonthlyInterest()
{ 
   savingsBalance += savingsBalance * ( annualInterestRate / 12.0 ); 
} // end function calculateMonthlyInterest

// function for modifying static member variable annualInterestRate
void SavingsAccount::modifyInterestRate( double i )
{ 
   annualInterestRate = ( i >= 0.0 && i <= 1.0 ) ? i : 0.03; 
} // end function modifyInterestRate

// prints balance of the savings account
void SavingsAccount::printBalance() const
{
   cout << fixed << '$' << setprecision( 2 ) << savingsBalance;
} // end function printBalance


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
