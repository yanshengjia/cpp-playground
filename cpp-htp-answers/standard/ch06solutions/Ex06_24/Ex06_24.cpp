// Exercise 6.24 Solution: Ex06_24.cpp
// Print input number as series of digits,
// each pair of which is separated by two spaces.
#include <iostream>
using namespace std;

int quotient( int, int ); // function prototype
int remainder( int, int ); // function prototype
void printDigits( int ); // function prototype

int main()
{
   int number; // input number

   do
   {
      cout << "Enter an integer between 1 and 32767: ";
      cin >> number;
   } // end do
   while ( number < 1 || number > 32767 );

   cout << "The digits in the number are:\n";
   printDigits( number ); // call function to print digits
   cout << endl; // add trailing newline
} // end main

// Part A: determine quotient using integer division
int quotient( int a, int b )
{
   return a / b;
} // end function quotient

// Part B: determine remainder using the modulus operator
int remainder( int a, int b )
{
   return a % b;
} // end function remainder

// Part C: print digits of an integer separated by two spaces
void printDigits( int number )
{
   int divisor = 10000; // current divisor

   // prevent leading zeros from being printed
   while ( number < divisor )
      divisor = quotient( divisor, 10 );

   // determine and print each digit
   while ( divisor >= 1 )
   {
      // use quotient to determine current digit
      cout << quotient( number, divisor ) << "  ";

      // update number to be remainder
      number = remainder( number, divisor );

      // update divisor for next digit
      divisor = quotient( divisor, 10 );
   } // end while
} // end function printDigits


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
