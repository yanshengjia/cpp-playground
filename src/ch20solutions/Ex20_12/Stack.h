// Exercise 20.12 Solution: Stack.h
// Definition of class template Stack.
// NOTE: This Stack class is a standalone Stack class template.
#ifndef STACK_H
#define STACK_H

#include <iostream> 
#include <new>
#include "StackNode.h"
using namespace std;

template < typename T >
class Stack 
{
public:
   Stack(); // default constructor
   ~Stack(); // destructor

   void push( T & ); // insert item in stack
   T pop(); // remove item from stack
   bool isEmpty() const; // is the stack empty?
   T stackTop() const; // check the top value
   void print() const; // output the stack

   // return pointer to first stack node
   StackNode< T > *getTopPtr() const 
   { 
      return topPtr; 
   } // end function getTopPtr

private:
   StackNode< T > *topPtr; // pointer to fist StackNode
}; // end class template Stack

// member-function definitions for class template Stack
template < typename T >
Stack< T >::Stack() 
{ 
   topPtr = 0; 
} // end constructor

template < typename T >
Stack< T >::~Stack()
{
   StackNode< T > *tempPtr, *currentPtr = topPtr;

   while ( currentPtr != 0 ) 
   {
      tempPtr = currentPtr;
      currentPtr = currentPtr->getNextPtr();
      delete tempPtr;
   } // end while
} // end destructor

// push node
template < typename T >
void Stack< T >::push( T &d )
{
   StackNode< T > *newPtr = new StackNode< T >( d, topPtr );
   topPtr = newPtr;
} // end function push

// pop node
template < typename T >
T Stack< T >::pop()
{
   StackNode< T > *tempPtr = topPtr;

   topPtr = topPtr->nextPtr;
   T poppedValue = tempPtr->data;
   delete tempPtr;
   return poppedValue;
} // end function pop

// is the stack empty?
template < typename T >
bool Stack< T >::isEmpty() const 
{ 
   return topPtr == 0; 
} // end function isEmpty 

// get the top node
template < typename T >
T Stack< T >::stackTop() const 
{ 
   return !isEmpty() ? getTopPtr()->getData() : static_cast< T >( 0 ); 
} // end function stackTop

// display the stack
template < typename T >
void Stack< T >::print() const
{
   StackNode< T > *currentPtr = topPtr;

   if ( isEmpty() ) // Stack is empty
      cout << "Stack is empty\n";
   else // Stack is not empty
   {
      cout << "The stack is:\n";

      while ( currentPtr != 0 ) 
      {
         cout << currentPtr->data << ' ';
         currentPtr = currentPtr->nextPtr;
      } // end while

      cout << '\n';
   } // end else
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
