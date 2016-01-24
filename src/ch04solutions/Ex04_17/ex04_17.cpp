// Exercise 4.17 Solution: ex04_17.cpp
// Finding the largest number.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std; 

int main()
{
   int counter = 0; // counter for 10 repetitions 
   int number; // current number input
   int largest; // largest number found so far
   
   cout << "Enter the first number: "; // prompt for first number
   cin >> largest; // get first number

   while ( ++counter < 10 ) // loop 10 times
   {
      cout << "Enter the next number : "; // prompt for next input 
      cin >> number; // get next number
      
      // if current number input is greater than largest number,
      // update largest
      if ( number > largest )
         largest = number;
   } // end while
   
   cout << "Largest is " << largest << endl; // display largest number
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
