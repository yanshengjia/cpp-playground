// Exercise 7.32 Solution: Ex07_32.cpp
#include <iostream> 
#include <string>
using namespace std;

bool testPalindrome( string, int, int );

int main()
{
   string input;

   // get sentence to test from user
   cout << "Enter a sentence:\n";
   getline( cin, input );

   // Print whether or not sentence is palindrome
   if ( testPalindrome( input, 0, input.length() - 1 ) )
      cout << '\"' << input << "\" is a palindrome" << endl;
   else
      cout << '\"' << input << "\" is not a palindrome" << endl;
} // end main

// function to see if sentence is a palindrome
bool testPalindrome( string palindrome, int left, int right )
{
   // test array to see if a palindrome
   if ( left == right || left > right )
      return true;
   else if ( palindrome[ left ] != palindrome[ right ] )
      return false;
   else
      return testPalindrome( palindrome, left + 1, right - 1 );
} // end function testPalindrome

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
