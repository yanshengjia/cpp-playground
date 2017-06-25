// Exercise 5.31 Solution: ex05_31.cpp
// Calculates the tax the user would owe under the FairTax plan.
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
   int amount; // amount the user pays for each expense
   int total = 0;

   // display the expense categories for the user
   cout << "Welcome to the Fair Tax Calculator!\n"
      << "Here are some common expense categories:\n"
      << "1: Housing, 2: Food, 3: Clothing, 4: Transportation,\n"
      << "5: Education, 6: Health care, 7: Vacations\n";

   // prompt for and input the amount the user paid in each category
   for ( int i = 1; i <= 7; ++i )
   {
      cout << "Total spending for category " << i << ": ";
      cin >> amount;
      total += amount;
   } // end for

   // calculate and display tax
   double tax = total * 0.3;
   cout << "Your total Fair Tax would be $" << setprecision( 2 )
      << fixed << tax << endl;
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
