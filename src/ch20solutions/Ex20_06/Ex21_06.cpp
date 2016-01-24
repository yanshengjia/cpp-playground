// Exercise 20.6 solution: Ex20_06.cpp
#include <iostream> 
#include "List.h"
using namespace std;

template< typename T >
void concatenate( List< T > &first, List< T > &second )
{
   List< T > temp( second ); // create a copy of second 
   T value; // variable to store removed item from temp

   while ( !temp.isEmpty() ) 
   {
      temp.removeFromFront( value ); // remove value from temp list
      first.insertAtBack( value ); // insert at end of first list
   } // end loop
} // end function concatenate

int main()
{
   List< char > list1; // storage for first list
   List< char > list2; // storage for second list
   char c;

   // assign alphabets into first list, from a to e 
   for ( c = 'a'; c <= 'e'; c++ )
      list1.insertAtBack( c );

   // call function print to print the list
   list1.print();

   // assign from f to j into second list
   for ( c = 'f'; c <= 'j'; c++ )
      list2.insertAtBack( c );

   list2.print();

   // function concatenate will append list2 with list1
   concatenate( list1, list2 );
   cout << "The new list1 after concatenation is:\n";
   list1.print();
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
