// Exercise 10.7 Solution: SavingsAccount.h
// Header file for class SavingsAccount.
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount 
{
public:
   // constructor sets balance to value greater than or equal to zero
   SavingsAccount( double b ) 
   { 
      savingsBalance = ( b >= 0.0 ? b : 0.0 ); 
   } // end SavingsAccount constructor

   void calculateMonthlyInterest(); // calculate interest; add to balance
   static void modifyInterestRate( double );
   void printBalance() const;
private:
   double savingsBalance; // the account balance
   static double annualInterestRate; // the interest rate of all accounts
}; // end class SavingsAccount

#endif

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
