// Exercise 20.25 Solution: Ex20_25.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "Tree.h"
using namespace std;

int main()
{
   srand( time( 0 ) ); // randomize the random number generator

   Tree< int > intTree;
   int intVal;

   cout << "The values being placed in the tree are:\n";

   for ( int i = 1; i <= 15; i++ ) 
   {
      intVal = rand() % 100;
      cout << intVal << ' ';
      intTree.insertNode( intVal );
   } // end loop

   cout << "\n\nThe tree is:\n";
   intTree.outputTree();
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
