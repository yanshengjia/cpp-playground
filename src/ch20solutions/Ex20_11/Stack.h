// Fig. 20.13: Stack.h
// Template Stack class definition derived from class List.
#ifndef STACK_H
#define STACK_H

#include "List.h" // List class definition

template< typename STACKTYPE >
class Stack : private List< STACKTYPE > 
{
public:
   // push calls the List function insertAtFront
   void push( const STACKTYPE &data ) 
   { 
      insertAtFront( data ); 
   } // end function push

   // pop calls the List function removeFromFront
   bool pop( STACKTYPE &data ) 
   { 
      return removeFromFront( data ); 
   } // end function pop

   // isStackEmpty calls the List function isEmpty
   bool isStackEmpty() const 
   { 
      return isEmpty(); 
   } // end function isStackEmpty
 
   // printStack calls the List function print
   void printStack() const 
   { 
      print(); 
   } // end function print 
}; // end class Stack

#endif

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
