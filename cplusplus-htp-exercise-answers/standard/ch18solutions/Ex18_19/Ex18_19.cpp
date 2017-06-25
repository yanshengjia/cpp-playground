// Exercise 18.19 Solution: Ex18_19.cpp
// Program erases "by" or "BY" from strings.
#include <iostream> 
#include <string> 
using namespace std;

void deleteBy( string&, string ); // prototype

int main()
{
   string s;

   cout << "Enter a word: ";
   cin >> s;

   deleteBy( s, "by" ); // call function deleteBy to get rid of
   deleteBy( s, "BY" ); // any occurrences of "by" and "BY"

   cout << s << endl;
} // end main

// function to look for and get rid of "by" and "BY"
void deleteBy( string& sRef, string z )
{
   int x = sRef.find( z ); // use member function find of class string

   // until the end of the string is reached
   while ( x <= sRef.length() ) 
   {
      sRef.erase( x, 2 ); // erase the occurrence of "by" or "BY"
      x = sRef.find( z ); // find location of occurrence
   } // end while
} // end function deleteBy

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
