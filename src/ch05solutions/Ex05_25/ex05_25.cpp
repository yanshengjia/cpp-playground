// Exercise 5.25 Solution: ex05_25.cpp
// Terminating a loop without break.
#include <iostream> 
using namespace std;

int main()
{
   int count; // control variable

   // indicates whether 'break' condition has been reached
   bool breakOut = false;
      
   // indicate early exit because of 'break' condition;
   // loop will end when breakOut has been set to true
   for ( count = 1; ( count <= 10 ) && ( !breakOut ); count++ )
   {
      if ( count == 5 ) // 'break' condition
         breakOut = true; // indicate that a break should occur
      else
         cout << count << " "; // skipped when 'break' condition is true
   } // end for  

   cout << "\nBroke out of loop because loop-continuation test "
      << "( !breakOut ) failed." << endl;
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
