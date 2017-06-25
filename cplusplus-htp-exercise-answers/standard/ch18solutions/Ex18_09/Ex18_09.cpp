// Exercise 18.9 Solution: Ex18_09.cpp
// Program determines if string ends in 'r' or "ay".
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
   string s[ 5 ]; // declare a string array
   
   // loop to get user input
   for ( int i = 0; i < 5; i++ )
   {
      cout << "Enter a word: ";
      cin >> s[ i ];
   } // end for

   // use function rfind to find occurrences of "ay" or 'r'
   for ( int j = 0; j < 5; j++ ) 
   {
      // does the word end in "ay" or 'r'?
      if ( ( ( s[ j ].rfind( "ay" ) == s[ j ].length() - 2 ) )
          || ( s[ j ].rfind( "r" ) == s[ j ].length() - 1 ) )
         cout << s[ j ] << endl; // if match, display it
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
