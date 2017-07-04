// Exercise 6.28 Solution: Ex06_28.cpp
// Determine perfect numbers between 1 and 1000.
// A number is perfect if it is equal to the sum of its factors.
#include <iostream>
using namespace std;

bool isPerfect( int ); // function prototype
void printSum( int ); // function prototype

int main()
{
   cout << "Perfect integers between 1 and 1000:" << endl;

   // loop from 2 to 1000
   for ( int j = 2; j <= 1000; j++ )
   {
      // if current integer is perfect 
      if ( isPerfect( j ) ) 
         printSum( j ); // print it as sum of factors
   } // end for

   cout << endl;
} // end main

// isPerfect returns true if value is perfect integer,
// i.e., if value is equal to sum of its factors
bool isPerfect( int value )
{
   int factorSum = 1; // current sum of factors

   // loop through possible factor values
   for ( int i = 2; i <= value / 2; i++ )
   {
      // if i is factor
      if ( value % i == 0 )
         factorSum += i; // add to sum
   } // end for

   // return true if value is equal to sum of factors
   return factorSum == value;
} // end function isPerfect

// printSum displays value followed by factors in summation form
void printSum( int value )
{
   cout << value << " = 1";

   // loop through possible factor values
   for ( int i = 2; i <= value / 2; i++ )
   {
      // if i is factor
      if ( value % i == 0 )
         cout << " + " << i; // display as part of sum
   } // end for

   cout << endl;
} // end function printSum

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
