// Exercise 20.20 Solution: List2.h
// List2 class template definition.
#ifndef LIST2_H
#define LIST2_H

#include <iostream> 
#include "ListNode.h"
#include "List.h"
using namespace std;

template< typename NODETYPE >
class List2 : public List< NODETYPE > 
{
public:
   void recursivePrintReverse() const;
private:
   void recursivePrintReverseHelper( ListNode< NODETYPE > * ) const;
}; // end class template List2

// print a list backward recursively.
template< typename NODETYPE >
void List2< NODETYPE >::recursivePrintReverse() const
{
   cout << "The list printed recursively backward is:\n";
   recursivePrintReverseHelper( firstPtr );
   cout << '\n';
} // end function recursivePrintReverse

// helper for printing a list backward recursively.
template< typename NODETYPE >
void List2< NODETYPE >::recursivePrintReverseHelper( 
   ListNode< NODETYPE > *currentPtr ) const
{
   if ( currentPtr == 0 )
      return;
      
   recursivePrintReverseHelper( currentPtr->getNextPtr() );
   cout << currentPtr->getData() << ' ';
} // end function recursivePrintReverseHelper

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
