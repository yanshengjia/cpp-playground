// Exercise 20.8 Solution: List2.h
// List2 class template definition
// Enhances List by adding insertInOrder.
#ifndef LIST2_H
#define LIST2_H

#include "ListNode.h"
#include "List.h"

template< typename NODETYPE >
class List2 : public List< NODETYPE > 
{
public:
   void insertInOrder( const NODETYPE & );
}; // end class List2

// insert a node in order
template< typename NODETYPE >
void List2< NODETYPE >::insertInOrder( const NODETYPE &value )
{
   if ( isEmpty() ) // list is empty
   {
      ListNode< NODETYPE > *newPtr = getNewNode( value );
      firstPtr = lastPtr = newPtr;
   } // end if
   else // list is not empty
   {
      if ( firstPtr->getData() > value ) // value is the smallest
         insertAtFront( value );
      else if ( lastPtr->getData() < value ) // value is the largest
         insertAtBack( value );
      else 
      {
         ListNode< NODETYPE > *currentPtr = firstPtr->getNextPtr();
         ListNode< NODETYPE > *previousPtr = firstPtr;
         ListNode< NODETYPE > *newPtr = getNewNode( value );

         while ( currentPtr != lastPtr && currentPtr->getData() < value )
         {
            previousPtr = currentPtr;
            currentPtr = currentPtr->getNextPtr();
         } // end while

         previousPtr->setNextPtr( newPtr );
         newPtr->setNextPtr( currentPtr );
      } // end else
   } // end else
} // end function insertInOrder

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
