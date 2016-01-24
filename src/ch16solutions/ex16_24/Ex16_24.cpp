// Exercise 16.24 Solution: Ex16_24.cpp
#include <iostream> 
#include "TestException.h"
using namespace std;

int main()
{
   // throw same exception from catch handler
   try 
   {
      throw TestException( "This is a test" );
   } // end try
   catch ( TestException &t ) 
   {
      cerr << t.what() << endl;
      throw TestException( "This is another test" );
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
