// Exercise 20.24 Solution: QueueNode.h
// Definition of template class QueueNode
#ifndef QUEUENODE_H
#define QUEUENODE_H

template< typename T > class Queue; // forward declaration

template < typename T >
class QueueNode 
{
   friend class Queue< T >;
public:
   QueueNode( const T & = 0 );
   T getData() const;
private:
   T data;
   QueueNode *nextPtr;
}; // end class QueueNode

// Member function definitions for class QueueNode

// constructor for class QueueNode
template < typename T >
QueueNode< T >::QueueNode( const T &d )
{
   data = d;
   nextPtr = 0;
} // end Queue constructor

// get function returns data
template < typename T >
T QueueNode< T >::getData() const 
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
