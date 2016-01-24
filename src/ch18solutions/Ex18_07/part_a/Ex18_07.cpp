// Exercise 18.7 Part A Solution: Ex18_07.cpp
// When solving Part B of this exercise, you might find it more 
// convenient to only use uppercase letters for your input.
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
   string m; // to store input
   int key = 13; // Our key for encryption

   cout << "Enter a string: ";
   getline( cin, m );

   string::iterator mi = m.begin(); // using function begin

   // loop through the string
   while ( mi != m.end() ) 
   {
      *mi += key;  
      mi++;
   } // end while

   cout << "\nEncrypted string is: " << m << endl;
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
