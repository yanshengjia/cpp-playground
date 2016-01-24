// Exercise 20.26 Solution: Ex20_26.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "List.h"
using namespace std;

int main()
{
   srand( time( 0 ) ); // randomize the random number generator

   List< int > intList; // create new list

   for ( int i = 0; i < 10; i++ ) // populate list
      intList.insertAtBack( rand() % 101 );

   intList.print(); // display list

   int index; // index where values will be added or deleted
   int value; // value to be added or deleted
   int deletedValue; // value in a node that has been deleted

   cout << "Enter the index where you want the new value to appear: ";
   cin >> index;
   cout << "Enter the value you want added at this location: ";
   cin >> value;

   // insert value to list at index specified by the user
   if ( intList.insertByLocation( value, index ) ) 
      intList.print(); // display modified list if successful
   else
      cout << "Invalid index, no data added to list.\n\n";

   cout << "Enter an integer to delete: ";
   cin >> value;

   // delete first occurrence of data value
   if ( intList.deleteNodeByValue( value, deletedValue ) )
   {
      cout << deletedValue << " was deleted from the list\n";
      intList.print(); // display modified list if successful
   } // end if
   else
      cout << "Element was not found\n\n";

   cout << "Enter a location where you want a value deleted: ";
   cin >> value;

   // delete node at specified location
   if ( intList.deleteNodeByLocation( deletedValue, value ) )
   {
      cout << deletedValue << " was deleted from the list\n";
      intList.print(); // display modified list if successful
   } // end if
   else
      cout << "Invalid index, no data removed from list.\n\n";
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
