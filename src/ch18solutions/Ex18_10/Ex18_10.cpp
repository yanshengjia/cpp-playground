// Exercise 18.10 Solution: Ex18_10.cpp
// Program reads a first name and last name and concatenates the two.
#include <iostream>
#include <string> 
using namespace std;

int main()
{
   // declare two strings
   string first;
   string last;

   cout << "Enter first name: ";
   cin >> first;

   cout << "Enter last name: ";
   cin >> last;

   // use function append to insert space and string last
   first.append( " " ).append( last );
   cout << "The full name is: " << first << endl;
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
