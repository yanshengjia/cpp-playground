// Exercise 20.21 Solution: List2.h
// List2 class template definition
#ifndef LIST2_H
#define LIST2_H

#include <iostream> 
#include <new>
#include "ListNode.h"
#include "List.h"
using namespace std;

template< typename NODETYPE >
class List2 : public List< NODETYPE > 
{
public:
   NODETYPE *searchList( NODETYPE & ) const;
private:
   // utility function
   NODETYPE *recursiveSearchHelper( 
      ListNode< NODETYPE > *, NODETYPE & ) const;
}; // end class List2

// Search a List recursively.
template< typename NODETYPE >
NODETYPE *List2< NODETYPE >::searchList( NODETYPE &val ) const
{ 
   return recursiveSearchHelper( firstPtr, val ); 
} // end function recursiveSearch

// Helper for searching a list recursively.
template< typename NODETYPE >
NODETYPE *List2< NODETYPE >::recursiveSearchHelper( 
   ListNode< NODETYPE > *currentPtr, NODETYPE &value ) const
{
   if ( currentPtr == 0 )
      return 0;

   // if data is found
   if ( currentPtr->getData() == value )
      return currentPtr->getAddress();

   // continue recursive call 
   return recursiveSearchHelper( currentPtr->getNextPtr(), value );
} // end function recursiveSearchHelper

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
