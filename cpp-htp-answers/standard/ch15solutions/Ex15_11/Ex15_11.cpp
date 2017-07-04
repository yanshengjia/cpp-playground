// Exercise 15.11 Solution: Ex15_11.cpp
#include <iostream> 
#include <iomanip> 
#include <string>
using namespace std;

int main()
{
   string input; // string to hold input string
   int stringLength; // variable used to hold length of string

   // ask user for string and store in character array
   cout << "Enter a string: ";
   cin >> input;

   stringLength = input.length(); // get length of string

   // display length of string
   cout << "the length of the string is " << stringLength << endl;

   // print string using twice the length as field with
   cout << setw( 2 * stringLength ) << input << endl;
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
