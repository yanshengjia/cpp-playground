// Exercise 5.8 Solution: ex05_08.cpp
// Find the smallest of several integers.
#include <iostream>
using namespace std; 

int main()
{
   int number; // number of values
   int value; // current value
   int smallest; // smallest value so far

   cout << "Enter the number of integers to be processed ";
   cout << "followed by the integers: " << endl;
   cin >> number >> smallest;

   // loop (number -1) times
   for ( int i = 2; i <= number; i++ ) 
   {
      cin >> value; // read in next value

      // if current value less than smallest, update smallest
      if ( value < smallest )
         smallest = value;
   } // end for

   // display smallest integer 
   cout << "\nThe smallest integer is: " << smallest << endl;
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
