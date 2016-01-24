// Exercise 5.5 Solution: ex05_05.cpp
// Total a sequence of integers.
#include <iostream>
using namespace std;

int main()
{
   int total = 0; // current total
   int number; // number of values
   int value; // current value

   // display prompt
   cout << "Enter the number of values to be summed " 
      << "followed by the values: \n";
   cin >> number; // input number of values

   // loop number times
   for ( int i = 1; i <= number; i++ ) 
   {
      cin >> value;
      total += value;
   } // end for 

   // display total
   cout << "Sum of the " << number << " values is " << total << endl;
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
