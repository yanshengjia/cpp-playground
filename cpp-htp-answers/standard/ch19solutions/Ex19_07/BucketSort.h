// Exercise 19.7 Solution: BucketSort.h
// Class BucketSort contains a vector of random integers and a function 
// that uses bucket sort to sort the integers.
#include <vector>
using namespace std;

class BucketSort
{
public:
   BucketSort( int ); // constructor initializes vector
   void displayElements() const; // display vector elements
   void sort(); // perform a bucket sort on vector
private:
   int size; // vector size
   vector< int > data; // vector of ints
   vector< vector < int > > bucket; // two-dimensional vector of ints

   // utility functions used by member function bucketSort
   void distributeElements( int );
   void collectElements();
   int numberOfDigits();
   void zeroBucket();
}; // end class BucketSort


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
