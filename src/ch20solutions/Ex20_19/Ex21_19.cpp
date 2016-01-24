// Exercise 20.19 Solution: Ex20_19.cpp
#include <iostream> 
#include "Tree.h"
using namespace std;

int main()
{
   Tree< int > intTree;
   int intVal;

   cout << "Enter 10 integer values:\n";

   // inserting value into tree
   for ( int i = 0; i < 10; i++ ) 
   {
      cin >> intVal;
      intTree.insertNode( intVal );
   } // end loop

   cout << "\nPreorder traversal\n";
   intTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   intTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   intTree.postOrderTraversal();

   cout << "\n\nThere are " << intTree.getDepth()
      << " levels in this binary tree\n";
} // end main


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
