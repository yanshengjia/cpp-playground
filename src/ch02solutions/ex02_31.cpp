// Exercise 2.31 Solution: ex02_31.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   // variables to store statistics
   int miles, cost, mpg, parking, tolls;

   // prompt user for each variable and read it in
   cout << "Enter miles driven per day: ";
   cin >> miles;
   cout << "Enter cost per gallon of gas (in cents): ";
   cin >> cost;
   cout << "Enter average miles per gallon: ";
   cin >> mpg;
   cout << "Enter parking fees per day (in dollars): ";
   cin >> parking;
   cout << "Enter tolls per day (in dollars): ";
   cin >> tolls;

   // calculate their daily cost in dollars
   int total = miles * cost / mpg / 100 + parking + tolls;

   // display cost
   cout << "\nYour daily driving cost is: " << total << endl;
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
