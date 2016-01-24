// Exercise 10.8 Solution: ex10_08.cpp
// Driver program for class IntegerSet.
#include <iostream> 
#include "IntegerSet.h" // IntegerSet class definition
using namespace std;

int main()
{
   IntegerSet a;
   IntegerSet b;
   IntegerSet c;
   IntegerSet d;

   cout << "Enter set A:\n";
   a.inputSet();
   cout << "\nEnter set B:\n";
   b.inputSet();
   c = a.unionOfSets( b );
   d = a.intersectionOfSets( b );
   cout << "\nUnion of A and B is:\n";
   c.printSet();
   cout << "Intersection of A and B is:\n";
   d.printSet();

   if ( a.isEqualTo( b ) )
      cout << "Set A is equal to set B\n";
   else
      cout << "Set A is not equal to set B\n";

   cout << "\nInserting 77 into set A...\n";
   a.insertElement( 77 );
   cout << "Set A is now:\n";
   a.printSet();

   cout << "\nDeleting 77 from set A...\n";
   a.deleteElement( 77 );
   cout << "Set A is now:\n";
   a.printSet();

   const int arraySize = 10;
   int intArray[ arraySize ] = { 25, 67, 2, 9, 99, 105, 45, -5, 100, 1 };
   IntegerSet e( intArray, arraySize );

   cout << "\nSet E is:\n";
   e.printSet();

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
