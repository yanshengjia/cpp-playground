// Exercise 16.27 Solution: Ex16_27.cpp
#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

int main()
{
   long double *ptr[ 10 ];
   
   try // generate exception
   {
      // loop will cause memory exhaustion
      for ( int i = 0; i < 10; i++ ) 
      {
         ptr[ i ] = new long double[ 50000000 ];
         cout << "Allocated 50000000 long doubles in ptr[ " << i 
            << " ]\n";
      } // end for
   } // end try
   catch ( bad_alloc ex ) // catch bad_alloc exception
   {
      cerr << "Memory Allocation Failed.\n";
      exit( EXIT_FAILURE );
   } // end catch
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
