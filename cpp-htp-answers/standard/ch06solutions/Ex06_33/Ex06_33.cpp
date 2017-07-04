// Exercise 6.33 Solution: Ex06_33.cpp
// Simulate coin tossing.
#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int flip(); // function prototype

int main()
{
   int headsCount = 0; // total Heads count
   int tailsCount = 0; // total Tails count
   
   srand( time( 0 ) ); // seed random number generator
   
   // simulate coin toss 100 times
   for ( int loop = 1; loop <= 100; loop++ ) 
   {
      if ( flip() == 0 ) // simulate coin toss, 0 refers to tails
      {
         ++tailsCount; // update Tails count
         cout << "Tails "; // display result 
      } // end if
      else // 1 refers to heads
      {
         ++headsCount; // update Heads count
         cout << "Heads "; // display result
      } // end else

      if ( loop % 10 == 0 ) // 10 tosses per line
         cout << endl;
   } // end for

   // display totals
   cout << "\nThe total number of Heads was " << headsCount 
      << "\nThe total number of Tails was " << tailsCount << endl;
} // end main

// flip uses random number to simulate coin toss
int flip()
{
   return rand() % 2; // scale by 2 for binary result
} // end function flip

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
