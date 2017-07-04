// Exercise 7.36 Solution: Ex07_36.cpp
#include <iostream> 
#include <string>
using namespace std;

void stringReverse( string, int );

int main()
{
   string s = "Print this string backward.";
   cout << s << '\n'; // display original string

   stringReverse( s, 0 ); // reverse the string
   cout << endl;
} // end main

// function to reverse a string
void stringReverse( string stringToReverse, int startSubscript )
{
   // return when null character is encountered
   if ( startSubscript == stringToReverse.length() )
      return;

   // recursively call stringReverse with new substring
   stringReverse( stringToReverse, startSubscript + 1 );
   cout << stringToReverse[ startSubscript ]; // output character
} // end function stringReverse



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
