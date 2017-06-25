// Exercise 20.10 solution: Ex20_10.cpp
#include <iostream> 
#include "Stack.h"
using namespace std;

int main()
{
   Stack< char > charStack; // a stack of char
   char c; // represent a character from the input stream

   cout << "Enter a sentence:\n";

   // push onto stack until a null terminator is reached
   while ( ( c = static_cast< char >( cin.get() ) ) != '\n' )
      charStack.push( c );

   cout << "\nThe sentence in reverse is:\n";

   while ( !charStack.isStackEmpty() )
   {
      charStack.pop( c );
      cout << c << ' ';
   } // end while

   cout << '\n';
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
