// Exercise 20.24 Solution: Queue.h
// Definition of template class Queue
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream> 
#include <new>
#include "QueueNode.h"
using namespace std;

template < typename T >
class Queue 
{
public:
   Queue(); // default constructor
   ~Queue(); // destructor
   void enqueue( T ); // insert item in queue
   T dequeue(); // remove item from queue
   bool isEmpty() const; // is the queue empty?
   void print() const; // output the queue
private:
   QueueNode< T > *headPtr; // pointer to first QueueNode
   QueueNode< T > *tailPtr; // pointer to last QueueNode
}; // end class

// Member function definitions for class Queue

// constructor
template < typename T >
Queue< T >::Queue()
{ 
   headPtr = tailPtr = 0; 
} // end Queue constructor

// destructor
template < typename T >
Queue< T >::~Queue()
{
   QueueNode< T > *tempPtr, *currentPtr = headPtr;

   while ( currentPtr != 0 )
   {
      tempPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
      delete tempPtr;
   } // end while loop
} // end Queue destructor

// enqueue function
template < typename T >
void Queue< T >::enqueue( T d )
{
   // create pointer to new node
   QueueNode< T > *newPtr = new QueueNode< T >( d );

   // if queue is empty
   if ( isEmpty() )
      headPtr = tailPtr = newPtr;
   else // add to end 
   {
      tailPtr->nextPtr = newPtr;
      tailPtr = newPtr;
   } // end else
} // end function enqueue

// dequeue function
template < typename T >
T Queue< T >::dequeue()
{
   QueueNode< T > *tempPtr = headPtr;

   headPtr = headPtr->nextPtr;
   T value = tempPtr->data;
   delete tempPtr;

   if ( headPtr == 0 ) 
      tailPtr = 0;

   return value; // return value taken out
} // end function dequeue

// is the queue empty?
template < typename T >
bool Queue< T >::isEmpty() const 
{ 
   return headPtr == 0; 
} // end function isEmpty

// print the queue
template < typename T >
void Queue< T >::print() const
{
   QueueNode< T > *currentPtr = headPtr;

   // Queue is empty
   if ( isEmpty() )  
      cout << "Queue is empty\n";
   else // Queue is not empty
   {
      cout << "The queue is:\n";

      while ( currentPtr != 0 ) 
      {
         cout << currentPtr->data << ' ';
         currentPtr = currentPtr->nextPtr;
      } // end while

      cout << endl;
   } // end if...else
} // end function print

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
