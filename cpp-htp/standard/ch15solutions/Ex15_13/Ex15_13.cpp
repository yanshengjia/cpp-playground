// Exercise 15.13 Solution: Ex15_13.cpp
#include <iostream> 
#include <string>
using namespace std;

int main()
{
   string input; // string to hold input string

   // ask user to enter three strings and then 
   // store and display the strings
   for ( int k = 0; k < 3; k++ ) 
   {
      cout << "Enter a string: ";
      cin >> input;
      cout << "String is " << input << '\n';
   } // end for
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
