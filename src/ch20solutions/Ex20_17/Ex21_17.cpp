// Exercise 20.17 Solution: Ex20_17.cpp
#include <iostream> 
#include <string>
#include "Tree.h"
using namespace std;

int main()
{
   Tree< string > stringTree;
   char sentence[ 80 ];
   char *tokenPtr;

   cout << "Enter a sentence:\n";
   cin.getline( sentence, 80 );

   tokenPtr = strtok( sentence, " " );

   // until the token is empty
   while ( tokenPtr != 0 ) 
   {
      string *newString = new string( tokenPtr );
      stringTree.insertNode( *newString );
      tokenPtr = strtok( 0, " " );
   } // end while

   cout << "\nPreorder traversal\n";
   stringTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   stringTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   stringTree.postOrderTraversal();

   cout << endl;
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
