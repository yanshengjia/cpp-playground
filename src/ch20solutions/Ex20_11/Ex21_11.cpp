// Exercise 20.11 Solution: Ex20_11.cpp
#include <iostream> 
#include <cctype>
#include "Stack.h"
using namespace std;

int main()
{
   Stack< char > charStack;
   char c;
   char string1[ 80 ];
   char string2[ 80 ];
   int i = 0;

   cout << "Enter a sentence:\n";
  
   // get input 
   while ( ( c = static_cast< char >( cin.get() ) ) != '\n' )
   {
      if ( isalpha( c ) ) 
      {
         string1[ i++ ] = c;
         charStack.push( c );
      } // end if
   } // end while

   string1[ i ] = '\0';
   i = 0;

   // get stack elements
   while ( !charStack.isStackEmpty() )
      charStack.pop( string2[ i++ ] );

   string2[ i ] = '\0';

   if ( strcmp( string1, string2 ) == 0 )
      cout << "\nThe sentence is a palindrome\n";
   else
      cout << "\nThe sentence is not a palindrome\n";
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
