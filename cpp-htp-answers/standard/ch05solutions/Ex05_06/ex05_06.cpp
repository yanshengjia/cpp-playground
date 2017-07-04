// Exercise 5.6 Solution: ex05_06.cpp
// Average a sequence of integers.
#include <iostream>
using namespace std; 

int main()
{
   int value; // current value
   int count = 0; // number of inputs
   int total = 0; // sum of inputs

   // prompt for input
   cout << "Enter integers (9999 to end):" << endl;
   cin >> value;

   // loop until sentinel value read from user
   while ( value != 9999 )
   {
      total += value; // update sum
      count++; // update number of inputs

      cin >> value; // read in next value
   } // end while

   // if user entered at least one value
   if ( count != 0 )
      cout << "\nThe average is: "
         << static_cast< double > ( total ) / count << endl;
   else
      cout << "\nNo values were entered." << endl;
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
