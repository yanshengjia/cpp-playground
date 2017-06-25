// Exercise 4.26 Solution: ex04_26.cpp
// Determine whether a number is a palindrome.
#include <iostream>
using namespace std; 

int main()
{
   int number = 0; // user input number
   int digit1; // first digit
   int digit2; // second digit
   int digit4; // fourth digit; don’t care about third digit
   int digit5; // fifth digit
   int digits = 0; // number of digits in input

   // ask for a number until it is five digits
   while ( digits != 5 )
   {
      cout << "Enter a 5-digit number: "; // prompt for a number
      cin >> number; // get number

      // verify if number has 5 digits
      if ( number < 100000 )
      {
         if ( number > 9999 )
            digits = 5;
         else
            cout << "Number must be 5 digits" << endl;
      } // end if
      else
         cout << "Number must be 5 digits" << endl;
   } // end while 

   // get the digits
   digit1 = number / 10000;
   digit2 = number % 10000 / 1000;
   digit4 = number % 10000 % 1000 % 100 / 10;
   digit5 = number % 10000 % 1000 % 100 % 10;

   // print whether the number is a palindrome
   if ( digit1 == digit5 )
   {
      if ( digit2 == digit4 )
         cout << number << " is a palindrome!!!" << endl;
      else
         cout << number << " is not a palindrome." << endl;
   }
   else
      cout << number << " is not a palindrome." << endl;
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
