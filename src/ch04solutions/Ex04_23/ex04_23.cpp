// Exercise 4.23 Solution: ex04_23.cpp
// Dangling-else problem. 
#include <iostream>
using namespace std;

int main()
{
   // part A, x=9 and y=11
   int x = 9;
   int y = 11;
   cout << "Output for part A, x=9 and y=11:" << endl;

   if ( x < 10 )
      if ( y > 10 )
         cout << "*****" << endl; 
      else
         cout << "#####" << endl;

   cout << "$$$$$" << endl;

   // part A, x=11 and y=9
   x = 11;
   y = 9;
   cout << endl << "Output for part A, x=11 and y=9:" << endl;

   if ( x < 10 )
      if ( y > 10 )
         cout << "*****" << endl; 
      else
         cout << "#####" << endl;

   cout << "$$$$$" << endl;

   // part B, x=9 and y=11
   x = 9;
   y = 11;
   cout << endl << "Output for part B, x=9 and y=11:" << endl;
   
   if ( x < 10 )
   {
      if ( y > 10 )
         cout << "*****" << endl;  
   } // end outer if
   else
   {
      cout << "#####" << endl;
      cout << "$$$$$" << endl;
   } // end else

   // part B, x=11 and y=9
   x = 11;
   y = 9;
   cout << endl << "Output for part B, x=11 and y=9:" << endl;
   
   if ( x < 10 )
   {
      if ( y > 10 )
         cout << "*****" << endl;  
   } // end outer if
   else
   {
      cout << "#####" << endl;
      cout << "$$$$$" << endl;
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
