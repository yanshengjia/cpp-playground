// Exercise 2.19 Solution: ex02_19.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number1; // first integer read from user
   int number2; // second integer read from user
   int number3; // third integer read from user
   int smallest; // smallest integer read from user
   int largest; // largest integer read from user

   cout << "Input three different integers: "; // prompt
   cin >> number1 >> number2 >> number3; // read three integers

   largest = number1; // assume first integer is largest

   if ( number2 > largest ) // is number2 larger?
      largest = number2; // number2 is now the largest

   if ( number3 > largest ) // is number3 larger?
      largest = number3; // number3 is now the largest

   smallest = number1; // assume first integer is smallest

   if ( number2 < smallest ) // is number2 smaller?
      smallest = number2; // number2 is now the smallest

   if ( number3 < smallest ) // is number3 smaller?
      smallest = number3; // number3 is now the smallest

   cout << "Sum is " << number1 + number2 + number3 
      << "\nAverage is " << ( number1 + number2 + number3 ) / 3 
      << "\nProduct is " << number1 * number2 * number3 
      << "\nSmallest is " << smallest 
      << "\nLargest is " << largest << endl;
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
