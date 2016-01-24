// Exercise 6.30 Solution: Ex06_30.cpp
// Reverse the digits of a number.
#include <iostream>
#include <iomanip>
using namespace std;

int reverseDigits( int ); // function prototype

int main()
{
   int number; // input number

   cout << "Enter a number between 1 and 9999: ";
   cin >> number;

   cout << "The number with its digits reversed is: ";

   // find number with digits reversed
   cout << reverseDigits( number ) << endl;
} // end main

// reverseDigits returns number obtained by reversing digits of n
int reverseDigits( int n )
{
   int reverse = 0; // reversed number

   // loop until zero
   while ( n > 0 )
   {
      reverse *= 10; // shift digits in reverse left
      reverse += n % 10; // add least-significant digit of n to reverse
      n /= 10; // remove least-significant digit from n
   } // end while

   return reverse; // return reversed number
} // end function reverseDigits

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
