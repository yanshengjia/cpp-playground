// Exercise 7.17 Solution: Ex07_17.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   const long ROLLS = 36000;
   const int SIZE = 13;

   // array expected contains counts for the expected
   // number of times each sum occurs in 36 rolls of the dice 
   int expected[ SIZE ] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
   int x; // first die
   int y; // second die
   int sum[ SIZE ] = {};

   srand( time( 0 ) );
   
   // roll dice 36,000 times
   for ( long i = 1; i <= ROLLS; i++ ) 
   {
      x = 1 + rand() % 6;
      y = 1 + rand() % 6;
      sum[ x + y ]++;
   } // end for
   
   cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
      << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;

   // display results of rolling dice
   for ( int j = 2; j < SIZE; j++ )
      cout << setw( 10 ) << j << setw( 10 ) << sum[ j ] 
         << setprecision( 3 ) << setw( 9 ) 
         << 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 )
         << setw( 9 ) << 100.0 * sum[ j ] / ROLLS << "%\n";
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


