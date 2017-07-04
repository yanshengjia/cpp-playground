// Exercise 2.16 Solution: ex02_16.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number1; // first integer read from user 
   int number2; // second integer read from user  

   cout << "Enter two integers: "; // prompt user for data
   cin >> number1 >> number2; // read values from user

   // output the results
   cout << "The sum is " << number1 + number2 
      << "\nThe product is " << number1 * number2 
      << "\nThe difference is " << number1 - number2 
      << "\nThe quotient is " << number1 / number2 << endl;
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
