// Exercise 20.9 solution: Ex20_09.cpp
#include <iostream> 
#include "List.h"
using namespace std;

// function template that takes two List objects as arguments
// and makes a copy of the second argument reversed in the first argument.
template< typename T >
void reverseList( List< T > &first, List< T > &second )
{
   List< T > temp( second ); // create a copy of second 
   T value; // variable to store removed item from temp

   // loop through the list until it is empty
   while ( !temp.isEmpty() ) 
   {
      temp.removeFromFront( value ); // remove value from temp list
      first.insertAtFront( value ); // insert at beginning of first list
   } // end while
} // end reverseList template function

int main()
{
   List< char > list1;
   List< char > list2;

   // insert a - g onto list1
   for ( char c = 'a'; c <= 'j'; c++ )
      list1.insertAtBack( c );

   list1.print(); // print list
   reverseList( list2, list1 ); // call to function reverseList

   cout << "The list after reversing:\n";
   list2.print(); // print list
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
