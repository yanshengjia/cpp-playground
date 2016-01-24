// Exercise 4.35 Solution: encrypt.cpp
// Encrypt a number.
#include <iostream>
using namespace std;

int main()
{
   int number; // original number

   // enter four-digit number to be encrypted
   cout << "Enter a four-digit number: ";
   cin >> number;

   // encrypt (digit numbers are counted from left)
   int digit1 = ( number / 1000 + 7 ) % 10;
   int digit2 = ( number % 1000 / 100 + 7 ) % 10;
   int digit3 = ( number % 100 / 10 + 7 ) % 10;
   int digit4 = ( number % 10 + 7 ) % 10;

   int encryptedNumber =
      digit1 * 10 + digit2 + digit3 * 1000 + digit4 * 100;

   cout << "Encrypted number is " << encryptedNumber << endl;
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
