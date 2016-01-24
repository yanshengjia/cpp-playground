// Exercise 20.23 Solution: Tree.h
// Definition of class template Tree.
#ifndef TREE_H
#define TREE_H

#include <iostream> 
#include <new>
#include "TreeNode.h"
using namespace std;

template< typename NODETYPE >
class Tree 
{
public:
   Tree();
   void insertNode( const NODETYPE & );
   void preOrderTraversal() const;
   void inOrderTraversal() const;
   void postOrderTraversal() const;
   TreeNode< NODETYPE > *binaryTreeSearch( int ) const;
protected:
   TreeNode< NODETYPE > *rootPtr;
private:
   // utility functions
   void insertNodeHelper( TreeNode< NODETYPE > **, const NODETYPE & );
   void preOrderHelper( TreeNode< NODETYPE > * ) const;
   void inOrderHelper( TreeNode< NODETYPE > * ) const;
   void postOrderHelper( TreeNode< NODETYPE > * ) const;
   TreeNode< NODETYPE > 
      *binarySearchHelper( TreeNode< NODETYPE > *, int ) const;
}; // end class Tree

// constructor
template< typename NODETYPE >
Tree< NODETYPE >::Tree() 
{ 
   rootPtr = 0; 
} // end Tree constructor

// begin inserting node into Tree
template< typename NODETYPE >
void Tree< NODETYPE >::insertNode( const NODETYPE &value )
{ 
   insertNodeHelper( &rootPtr, value ); 
} // end function insertNode

// This function receives a pointer to a pointer so the
// pointer can be modified.
// NOTE: THIS FUNCTION WAS MODIFIED TO ALLOW DUPLICATES.
template< typename NODETYPE >
void Tree< NODETYPE >::insertNodeHelper( TreeNode< NODETYPE > **ptr,
   const NODETYPE &value )
{
   if ( *ptr == 0 ) // tree is empty
      *ptr = new TreeNode< NODETYPE >( value );
   else // tree is not empty
   {     
      // data to insert is less than data in current node
      if ( value <= ( *ptr )->data )
         insertNodeHelper( &( ( *ptr )->leftPtr ), value );
      else
         insertNodeHelper( &( ( *ptr )->rightPtr ), value );
   } // end else
} // end function insertNodeHelper

// begin preorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::preOrderTraversal() const 
{ 
   preOrderHelper( rootPtr ); 
} // end function preOrderTraversal

// utility function to perform preorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::preOrderHelper( TreeNode< NODETYPE > *ptr ) const
{
   if ( ptr != 0 ) 
   {
      cout << ptr->data << ' '; // process node
      preOrderHelper( ptr->leftPtr ); // go to left subtree
      preOrderHelper( ptr->rightPtr ); // go to right subtree
   } // end if
} // end function preOrderHelper

// begin inorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::inOrderTraversal() const 
{ 
   inOrderHelper( rootPtr ); 
} // end function inOrderTraversal

// utility function to perform inorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::inOrderHelper( TreeNode< NODETYPE > *ptr ) const
{
   if ( ptr != 0 ) 
   {
      inOrderHelper( ptr->leftPtr ); // go to left subtree
      cout << ptr->data << ' '; // process node
      inOrderHelper( ptr->rightPtr ); // go to right subtree
   } // end if
} // end function inOrderHelper

// begin postorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::postOrderTraversal() const 
{ 
   postOrderHelper( rootPtr ); 
} // end function postOrderTraversal

// utility function to perform postorder traversal
template< typename NODETYPE >
void Tree< NODETYPE >::postOrderHelper( TreeNode< NODETYPE > *ptr ) const
{
   if ( ptr != 0 ) 
   {
      postOrderHelper( ptr->leftPtr ); // go to left subtree
      postOrderHelper( ptr->rightPtr ); // go to right subtree
      cout << ptr->data << ' '; // process node
   } // end if
} // end postOrderHelper

// begin binary search
template< typename NODETYPE >
TreeNode< NODETYPE > *Tree< NODETYPE >::binaryTreeSearch( int val ) const
{ 
   return binarySearchHelper( rootPtr, val ); 
} // end function binaryTreeSearch

// do a binary search on the Tree
template< typename NODETYPE >
TreeNode< NODETYPE > *Tree< NODETYPE >::binarySearchHelper( 
   TreeNode< NODETYPE > *ptr, int value ) const
{
   // if value is not found
   if ( ptr == 0 )
      return 0;

   cout << "Comparing " << value << " to " << ptr->getData();

   if ( value == ptr->getData() ) // match
   {
      cout << "; search complete\n";
      return ptr;
   } // end if
   else if ( value < ptr->getData() ) // value is less than current data
   {
      cout << "; smaller, walk left\n";
      return binarySearchHelper( ptr->getLeftPtr(), value );
   } // end else...if
   else // search value is greater than current data
   {
      cout << "; larger, walk right\n";
      return binarySearchHelper( ptr->getRightPtr(), value );
   } // end else
} // end function binarySearchHelper

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
