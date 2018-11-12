// Exercise 4.34 Part C Solution: ex04_34.cpp
// Estimate the value of e to the x power to the specified accuracy.
#include <iostream>
using namespace std; 

int main()
{
   int number = 1; // counter
   int accuracy; // accuracy of estimate
   int factorial = 1; // value of factorial
   int x; // x value
   double e = 1.0; // estimate value of e
   double exponent = 1.0; // exponent value

   cout << "Enter exponent: ";
   cin >> x;

   cout << "Enter desired accuracy of e: ";
   cin >> accuracy;
      
   // calculate estimation
   while ( number < accuracy )
   {
      exponent *= x; // calculate value of x to current exponent
      factorial *= number; // calculate factorial for current accuracy
      e += exponent / factorial; // calculate e for current accuracy
      number++;
   } // end while

   cout << "e to the " << x << " is " << e << endl;
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
