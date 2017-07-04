// Exercise 19.7 Solution: Ex19_07.cpp
// Test program that demonstrates bucket sort.
#include <iostream> 
#include "BucketSort.h" // BucketSort class definition
using namespace std;

int main()
{
   BucketSort sortVector( 12 ); // create BucketSort object

   cout << "Vector elements in original order:\n";
   sortVector.displayElements();

   sortVector.sort(); // sort the vector

   cout << "\nVector elements in sorted order:\n";
   sortVector.displayElements();
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
 *************************************************************************/
