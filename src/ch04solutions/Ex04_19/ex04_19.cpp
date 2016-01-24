// Exercise 4.19 Solution: ex04_19.cpp
// Find the two largest numbers.
#include <iostream>
using namespace std; 

int main()
{
   int counter = 0; // counter for 10 repetitions
   int number; // current number input
   int largest; // largest number found
   int secondLargest; // second-largest number found

   cout << "Enter the first number: "; // prompt for first number
   cin >> largest; // get first number
      
   cout << "Enter next number: "; // prompt for second number
   cin >> number; // get second number
   
   // compare second number with first number
   if ( number > largest )
   {
      secondLargest = largest;
      largest = number;
   } // end if
   else
      secondLargest = number;

   counter = 2; // set counter

   // get rest of the numbers and find the largest and secondLargest
   while ( counter < 10 ) 
   {
      cout << "Enter next number: "; // prompt for next number
      cin >> number; // get next number
         
      // compare current number with largest and secondLargest
      if ( number > largest ) 
      {
         secondLargest = largest;
         largest = number;
      } // end if
      else if ( number > secondLargest )
         secondLargest = number;

      counter++; // increment counter
   } // end while

   // display largest two numbers
   cout << "\nLargest is " <<  largest 
      << "\nSecond largest is " << secondLargest << endl;
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
