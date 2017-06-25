// Exercise 2.23 Solution: ex02_23.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number1; // first integer read from user
   int number2; // second integer read from user
   int number3; // third integer read from user
   int number4; // fourth integer read from user
   int number5; // fifth integer read from user
   int smallest; // smallest integer read from user
   int largest; // largest integer read from user
   
   cout << "Enter five integers: "; // prompt user for data
   cin >> number1 >> number2 >> number3 >> number4 >> number5;

   largest = number1; // assume first integer is largest
   smallest = number1; // assume first integer is smallest

   if ( number2 > largest ) // is number2 larger?
      largest = number2; // number2 is new largest

   if ( number3 > largest ) // is number3 larger?
      largest = number3; // number3 is new largest

   if ( number4 > largest ) // is number4 larger?
      largest = number4; // number4 is new largest

   if ( number5 > largest ) // is number5 larger?
      largest = number5; // number5 is new largest

   if ( number2 < smallest ) // is number2 smaller?
      smallest = number2; // number2 is new smallest

   if ( number3 < smallest ) // is number3 smaller?
      smallest = number3; // number3 is new smallest

   if ( number4 < smallest ) // is number4 smaller?
      smallest = number4; // number4 is new smallest

   if ( number5 < smallest ) // is number5 smaller?
      smallest = number5; // number5 is new smallest

   cout << "Largest is " << largest 
      << "\nSmallest is " << smallest << endl;
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
