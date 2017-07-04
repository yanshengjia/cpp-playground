// Exercise 6.37 Part A Solution: Ex06_37.cpp
// Nonrecursively calculate Fibonacci numbers.
#include <iostream>
using namespace std;

int fibonacci( int ); // function prototype

int main()
{
   // calculate the fibonacci values of 0 through 10
   for ( int counter = 0; counter <= 10; counter++ )
      cout << "fibonacci( " << counter << " ) = "
         << fibonacci( counter ) << endl;

   // display higher fibonacci values
   cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
   cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
   cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;
} // end main

// fibonacci nonrecursively calculates nth Fibonacci number
int fibonacci( int n )
{
   int fib0 = 0; // after iteration, holds fib(i-1), initially fib(0) = 0
   int fib1 = 1; // after iteration, holds fib(i), initially fib(1) = 1
   int temp; // temporary holder for updating fib0 and fib1
   
   if ( n == 0 ) // special case if n is 0
      return 0;

   // loop until nth number reached
   for ( int i = 2; i <= n; i++ ) 
   {
      // note at this point:
      // fib0 = fib(i-2)
      // fib1 = fib(i-1)

      temp = fib1; // temporarily hold fib(i-1)

      // update fib1 to hold fib(i), fib(i) = fib(i-1) + fib(i-2)
      fib1 = fib0 + fib1;  
      fib0 = temp; // update fib0 to hold fib(i-1)

      // note at this point:
      // fib0 = fib(i-1)
      // fib1 = fib(i)
   } // end for

   return fib1;
} // end function fibonacci

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
