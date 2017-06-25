// Exercise 4.27 Solution: ex04_27.cpp
// Convert a binary value to its decimal equivalent.
#include <iostream>
using namespace std; 

int main()
{
   int binary; // binary value
   int bit = 1; // bit positional value
   int decimal = 0; // decimal value

   // prompt for and read in a binary number
   cout << "Enter a binary number: ";
   cin >> binary;

   // convert to decimal equivalent
   while ( binary != 0 )
   {
      decimal += binary % 10 * bit;
      binary /= 10;
      bit *= 2;
   } // end while loop

   cout << "Decimal is: " << decimal << endl;
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
