// Exercise 18.8 Solution: Ex18_08.cpp
// Program demonstrates rend and rbegin.
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
   string s( "abcdefghijklmnopqrstuvwxyz" ); // declare string s
   
   // re is set to the end of the reverse sequence of s
   string::reverse_iterator re = s.rend();  

   // rb is set to the beginning of the reverse sequence of s
   string::reverse_iterator rb = s.rbegin();

   cout << "Using rend() string is: ";

   // print from the end of the reversed string to the beginning
   while ( re >= s.rbegin() ) 
   {
      cout << *re;
      re--;
   } // end while 

   cout << "\nUsing rbegin() string is: ";

   // print from the beginning of the reversed string
   while ( rb != s.rend() ) 
   {
      cout << *rb;
      rb++;
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
