// Exercise 16.27 Solution: Ex16_27.cpp
#include <iostream> 
#include <stdexcept>
#include "TestObject.h"
using namespace std;

int main()
{
   try // create objects and throw exception
   {
      // create three TestObjects
      TestObject a( 1 ); 
      TestObject b( 2 );
      TestObject c( 3 );
      cout << '\n';

      // throw an exception to show that all three Objects created above
      // will have their destructors called before the block expires
      throw runtime_error( "This is a test exception" );
   } // end try
   
   // catch the Error
   catch ( runtime_error &exception ) 
   {
      cerr << exception.what() << "\n";
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
