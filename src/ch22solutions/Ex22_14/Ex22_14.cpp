// Exercise 22.14 Solution: Ex22_14.cpp                            
#include <iostream> 
#include <iomanip> 
#include <cmath> // sqrt prototype
#include <bitset>
using namespace std;

int main()
{
   const int SIZE = 1024;
   int i;
   int value;
   int counter;
   bitset< SIZE > sieve; // create bitset of 1024 bits
   sieve.flip(); // flip all bits in sieve
   sieve.reset( 0 ); // reset first bit (number 0)         
   sieve.reset( 1 ); // reset second bit (number 1)        

   // perform Sieve of Eratosthenes
   int finalBit = sqrt( static_cast< double >( sieve.size() ) ) + 1;

   for ( i = 2; i < finalBit; i++ ) 
   {
      if ( sieve.test( i ) ) 
      {
         for ( int j = 2 * i; j < SIZE; j += i ) 
            sieve.reset( j );
      } // end if
   } // end for

   cout << "The prime numbers in the range 2 to 1023 are:\n";

   // display prime numbers in range 2-1023
   for ( i = 2, counter = 1; i < SIZE; i++ )
   {
      if ( sieve.test( i ) ) 
      {
         cout << setw( 5 ) << i;

         if ( counter++ % 12 == 0 ) 
            cout << '\n';
      } // end if            
   } // end for
   
   cout << endl;

   // get a value from the user to determine if it is prime
   cout << "\nEnter a value from 1 to 1023 (-1 to end): ";
   cin >> value;

   while ( value != -1 ) 
   {
      if ( sieve[ value ] )
         cout << value << " is a prime number\n";
      else 
      {
         cout << value << " is not a prime number\n"
            << "The unique prime factorization of " << value << " is: ";
         
         for ( int f = 2; f < SIZE; )             
         {
            if ( sieve.test( f ) && value % f == 0 ) 
            {
               cout << f; // output factor
               value /= f; // modify value

               if ( value <= 1 ) // time to stop
                  break;

               cout << " * ";

            } // end if
            else
               ++f; // move to next prime  
         } // end for
            
         cout << '\n';
      } // end else
      
      cout << "\nEnter a value from 2 to 1023 (-1 to end): ";
      cin >> value;

   } // end while
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
