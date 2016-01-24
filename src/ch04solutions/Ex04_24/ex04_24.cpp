// Exercise 4.24 Solution: ex04_24.cpp
// Dangling-else problem.
#include <iostream>
using namespace std;

int main()
{
   int x = 5; // initialize x to 5
   int y = 8; // initialize y to 8

   // part a
   if ( y == 8 ) 
   {
      if ( x == 5 )
         cout << "@@@@@" << endl;
      else 
         cout << "#####" << endl;
   } // end if

   cout << "$$$$$" << endl;
   cout << "&&&&&" << endl << endl;

   // part b
   if ( y == 8 )
   {
      if ( x == 5 )
         cout << "@@@@@" << endl;
      else 
      {
         cout << "#####" << endl;
         cout << "$$$$$" << endl;
         cout << "&&&&&" << endl;
      } // end inner else
   } // end outer if

   cout << endl;

   // part c
   if ( y == 8 )
   {
      if ( x == 5 )
         cout << "@@@@@" << endl;
      else 
      {
         cout << "#####" << endl;
         cout << "$$$$$" << endl;
      } // end inner else
   } // end outer if

   cout << "&&&&&" << endl << endl;

   // part d
   y = 7;

   if ( y == 8 ) 
   {
      if ( x == 5 )
         cout << "@@@@@" << endl;
   } // end if
   else 
   {
      cout << "#####" << endl;
      cout << "$$$$$" << endl;
      cout << "&&&&&" << endl;
   } // end else
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
