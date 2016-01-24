// Exercise 20.12 Solution: StackNode.h
// Definition of class template StackNode.
#ifndef STACKNODE_H
#define STACKNODE_H

template< typename T > class Stack; // forward declaration

template < typename T >
class StackNode 
{
   friend class Stack< T >;
public:
   StackNode( const T & = 0, StackNode * = 0 );
   T getData() const;

   // set point to next stack node
   void setNextPtr( StackNode *nPtr ) 
   { 
      nextPtr = nPtr; 
   } // end function setNextPtr
   
   // get point to next stack node
   StackNode *getNextPtr() const 
   { 
      return nextPtr; 
   } // end function getNextPtr

private:
   T data;
   StackNode *nextPtr;
}; // end class StackNode

// member-function definitions for class StackNode
// constructor
template < typename T >
StackNode< T >::StackNode( const T &d, StackNode< T > *ptr )
{
   data = d;
   nextPtr = ptr;
} // end constructor

// get data
template < typename T >
T StackNode< T >::getData() const 
{ 
   return data; 
} // end function getData

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
