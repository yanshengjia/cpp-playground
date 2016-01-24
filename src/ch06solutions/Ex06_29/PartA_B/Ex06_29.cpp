// Exercise 6.29 Part A and B Solution: Ex06_29.cpp
// Testing for prime numbers.
#include <iostream> 
#include <iomanip> 
using namespace std;

bool isPrime( int ); // function prototype

int main()
{
   int count = 1;  // total number of primes found

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << setw( 6 ) << 2; // 2 is only even prime

   // loop through odd numbers; even numbers > 2 cannot be prime
   for ( int loop = 3; loop < 10000; loop += 2 )
   {
      if ( isPrime( loop ) ) // if current number prime
      {
         count++;
         cout << setw( 6 ) << loop;
      
         if ( count % 10 == 0 ) // new line after 10 values displayed
            cout << '\n';
      } // end if
   } // end for

   cout << endl << "Total of " << count 
      << " prime numbers between 1 and 10000." << endl;
} // end main

// isPrime returns true if n is prime
bool isPrime( int n )
{
   // loop through possible factors
   for ( int loop2 = 2; loop2 <= n / 2; loop2++ )
   {
      // if factor found, not prime
      if ( n % loop2 == 0 )
         return false;
   } // end for

   return true;
} // end function isPrime

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
