// Exercise 18.22 Solution: Ex18_22.cpp
// Program recursively prints a string backwards.
#include <iostream> 
#include <string> 
using namespace std;

void printBackward( const string::reverse_iterator, 
   string::reverse_iterator ); // prototype

int main()
{
   string s;

   cout << "Enter a string: ";
   getline( cin, s );

   // reverse_iterator r points 
   // one location beyond the end of the reverse string
   string::reverse_iterator r = s.rend();

   // call recursive function printBackward
   printBackward( s.rbegin(), r - 1 );
   cout << endl;
} // end main

// function to print the reverse string
void printBackward( const string::reverse_iterator s, 
   string::reverse_iterator rb )
{
   // if the end is reached, return
   if ( rb == s - 1 )
      return;

   // recursive call to go through the string
   printBackward( s, rb - 1 ); 
   cout << *rb;      
} // end function printBackward

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
