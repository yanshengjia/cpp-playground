// Exercise 20.21 Solution: ListNode.h
// ListNode class template definition.
#ifndef LISTNODE_H
#define LISTNODE_H

template< typename T > class List; // forward declaration

template< typename NODETYPE >
class ListNode 
{
   friend class List< NODETYPE >; // make List a friend
public:
   ListNode( const NODETYPE & ); // constructor
   NODETYPE getData() const; // return the data in the node

   // set the next pointer
   void setNextPtr( ListNode *nPtr ) 
   { 
      nextPtr = nPtr; 
   } // end function setNextPtr

   // get the next pointer
   ListNode *getNextPtr() const 
   { 
      return nextPtr; 
   } // end function getNextPtr

   // get the address
   NODETYPE *getAddress() 
   { 
      return &data; 
   } // end function getAddress
private:
   NODETYPE data; // data
   ListNode *nextPtr; // next node in the list
}; // end class ListNode

// constructor
template< typename NODETYPE >
ListNode< NODETYPE >::ListNode( const NODETYPE &info )
{
   data = info;
   nextPtr = 0;
} // end ListNode constructor

// return a copy of the data in the node
template< typename NODETYPE >
NODETYPE ListNode< NODETYPE >::getData() const 
{ 
   return data; 
} // end getData

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
