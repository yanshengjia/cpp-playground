// Exercise 18.7 Part B Solution: Ex18_07.cpp
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
   string m; // to store input
   int key = 13; // Our key for decryption

   cout << "Enter encrypted string: ";
   getline( cin, m );

   // define an iterator
   string::iterator mi = m.begin();

   // loop through the string
   while ( mi != m.end() ) 
   {
      *mi -= key;  
      mi++;
   } // end while

   cout << "\nDecrypted string is: " << m << endl;
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
