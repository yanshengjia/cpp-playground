// Exercise 18.21 Solution: Ex18_21.cpp
// Program prints a string backward.
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
   string s;

   cout << "Enter a string: ";
   getline( cin, s, '\n' );

   // reverse_iterator rd points to the beginning 
   // of the reversed string
   string::reverse_iterator rb = s.rbegin();

   // go to the end of the string
   while ( rb != s.rend() ) 
   {
      cout << *rb; // dereference and print
      ++rb; // advanced one position
   } // end while  

   cout << endl;
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
