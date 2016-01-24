// Exercise 2.25 Solution: ex02_25.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number1; // first integer read from user
   int number2; // second integer read from user

   cout << "Enter two integers: "; // prompt
   cin >> number1 >> number2; // read two integers from user

   // using modulus operator
   if ( number1 % number2 == 0 )
      cout << number1 << " is a multiple of " << number2 << endl;

   if ( number1 % number2 != 0 )
      cout << number1 << " is not a multiple of " << number2 << endl;
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
