// Exercise 6.38 Solution: Ex06_38.cpp
// Towers of Hanoi problem.
#include <iostream>
using namespace std;

void towers( int, int, int, int ); // function prototype

int main()
{
   int nDisks; // number of disks
   
   cout << "Enter the starting number of disks: ";
   cin >> nDisks;

   // print instructions for moving disks from
   // peg 1 to peg 3 using peg 2 for temporary storage
   towers( nDisks, 1, 3, 2 );
} // end main

// towers recursively prints instructions for moving disks from 
// start peg to end peg using temp peg for temporary storage
void towers( int disks, int start, int end, int temp )
{
   if ( disks == 1 ) // base case
      cout << start << " --> " << end << '\n';
   else // recursion step
   {
      // move disks - 1 disks from start to temp
      towers( disks - 1, start, temp, end );

      // move last disk from start to end
      cout << start << " --> " << end << '\n';

      // move disks - 1 disks from temp to end
      towers( disks - 1, temp, end, start );
   } // end else
} // end function towers

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
