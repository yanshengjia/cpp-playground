// Exercise 21.30 Solution Part a: ex21_30a.cpp
// Printing ASCII characters based on codes entered by the user.
#include <iostream> 
using namespace std;

int main()
{
   int c;
   
   cout << "Enter an ASCII character code (-1 to end): ";
   cin >> c;

   // loop until user enters -1
   while ( c != -1 )
   {
      if ( c >= 0 && c <= 255 )
         cout << "The corresponding character is '" 
            << static_cast< char > ( c ) << "\'\n";
      else
         cout << "Invalid character code\n";
      
      // ask for another character
      cout << "\nEnter an ASCII character code (-1 to end): ";
      cin >> c;
   } // end while
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
