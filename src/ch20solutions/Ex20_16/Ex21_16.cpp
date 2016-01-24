// Exercise 20.16 Solution: Ex20_16.cpp
// Driver to test class template Tree.
#include <iostream> 
#include <iomanip> 
#include "Tree.h"
using namespace std;

int main()
{
   Tree< int > intTree;
   int intVal;
   int i;

   cout << "Enter 10 integer values:\n";

   // insert input into intTree
   for ( i = 0; i < 10; i++ ) 
   {
      cin >> intVal;
      intTree.insertNode( intVal );
   } // end for

   cout << "\nPreorder traversal\n";
   intTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   intTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   intTree.postOrderTraversal();

   Tree< double > doubleTree;
   double doubleVal;

   cout << "\n\n\nEnter 10 double values:\n"
      << fixed << setprecision( 1 );

   // takes 10 double values
   for ( i = 0; i < 10; i++ ) 
   {
      cin >> doubleVal;
      doubleTree.insertNode( doubleVal );
   } // end for

   cout << "\nPreorder traversal\n";
   doubleTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   doubleTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   doubleTree.postOrderTraversal();
   cout << "\n";
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
