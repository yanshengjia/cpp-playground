// Exercise 16.32 Solution: Ex16_32.cpp
#include <iostream> 
#include "TestException.h"
using namespace std;

// function f throws a TestException
void f() 
{ 
   throw TestException( "Test exception thrown" ); 
} // end function f

// function g calls function f
// and rethrows any exception thrown from f
void g()
{
   try 
   {
      f();
   } // end try
   catch ( ... ) // catch any exception and rethrow it
   {
      cerr << "Exception caught in function g(). Rethrowing...\n";
      throw;
   } // end catch
} // end function g

int main()
{
   try 
   {
      g(); // start function call chain
   } // end try
   catch ( ... ) // catch any exception thrown from g
   {
      cerr << "Exception caught in function main()\n";
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
