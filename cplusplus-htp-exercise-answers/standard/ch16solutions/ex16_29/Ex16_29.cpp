// Exercise 16.29 Solution: Ex16_29.cpp
#include <iostream> 
#include <ctime> // prototype for time
#include <cstdlib> // prototypes for srand and rand
#include "TestException1.h"
#include "TestException2.h"
using namespace std;

void generateException();

int main()
{
   srand( time( 0 ) ); // using current time to randomize random number

   // loop 5 times to generate various exceptions
   for ( int i = 0; i < 5; i++ )
   {
      try // generate exception
      {
         generateException();
      } // end try
      catch( ... ) 
      {
         cerr << "The \"catch all\" exception handler was invoked\n";
      } // end catch
   } // end for
} // end main

// throw exception randomly
void generateException()
{
   int type = 1 + rand() % 3;
   TestException1 exception1;
   TestException2 exception2;

   switch( type )
   {
      case 1: // throw int exception
         cout << "\nThrowing exception of type int...\n";
         throw( 10 );
      case 2: // throw TestException1
         cout << "\nThrowing exception of type TestException1...\n";
         throw( exception1 );
      case 3: // throw TestException2
         cout << "\nThrowing exception of type TestException2...\n";
         throw( exception2 );
   } // end switch
} // end function generateException 

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
