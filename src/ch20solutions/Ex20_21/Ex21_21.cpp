// Exercise 20.21 Solution: Ex20_20.cpp
#include <iostream> 
#include "List2.h"

int main()
{
   List2< int > intList;

   // create list
   for ( int i = 2; i <= 20; i += 2 )
      intList.insertAtBack( i );

   intList.print(); // print list

   int value;  
   int *ptr; // int pointer

   cout << "Enter a value to search for: ";
   cin >> value;
   ptr = intList.searchList( value );

   if ( ptr != 0 )
      cout << *ptr << " was found\n";
   else
      cout << "Element not found\n";
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
