// Exercise 20.8 solution: Ex20_08.cpp
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "List2.h"
using namespace std;

// integer specific list sum
int sumList( List2< int > &listRef )
{
   List2< int > temp( listRef );
   int sum = 0;
   int value;

   // until temp is empty
   while ( !temp.isEmpty() ) 
   {
      temp.removeFromFront( value ); // remove from the front
      sum += value; // add value to sum
   } // end while

   return sum;
} // end function sumList

// integer specific list average
double aveList( List2< int > &listRef )
{
   List2< int > temp( listRef );
   int sum = 0;
   int value;
   int count = 0;

   // go through copy of listRef
   while ( !temp.isEmpty() ) 
   {
      temp.removeFromFront( value ); // remove each element
      count++; // increment the count
      sum += value; // add into sum
   } // end while

   // return the average
   return static_cast< double >( sum ) / count;
} // end function aveList

int main()
{
   srand( time( 0 ) ); // randomize the random number generator
   
   List2< int > intList;

   // fill intList with 25 random numbers
   for ( int i = 1; i <= 25; i++ )
      intList.insertInOrder( rand() % 101 );

   intList.print();

   int sum = sumList( intList ); // calculate sum
   double average = aveList( intList ); // calculate average

   cout << "The sum of the elements is: " << sum << '\n';
   cout << "The average of the elements is: " << average << '\n';
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
