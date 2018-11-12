// Exercise 16.30 Solution: Ex16_30_b.cpp
#include <iostream> 
#include "TestException.h"
using namespace std;

int main()
{
   try // throw TestException
   {
      // throw an exception of the derived class
      throw TestException( "This is a TestException" ); 
   } // end try
   catch ( TestException &exception ) // catch TestException
   {
      cout << "TestException was caught\n" << exception.what() << endl;
   } // end catch
   catch ( runtime_error &exception ) // catch runtime_error exception
   {
      cout << "runtime_error was caught\n" << exception.what() << endl;
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
