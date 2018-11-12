// Exercise 16.33 Solution: Ex16_33.cpp
#include <iostream> 
#include "TestException1.h"
#include "TestException2.h"
using namespace std;

void f()
{
   throw TestException1( "TestException1" );
} // end function f

void g()
{
   try 
   {
      f();
   } // end try
   catch ( TestException2 &t2 ) // catch TestException2
   {
      cerr << "In g: Caught " << t2.what() << '\n';
   } // end catch
} // end function g

int main()
{
   try 
   {
      g();
   } // end try
   catch ( TestException1 &t1 ) // catch TestException1
   {
      cerr << "In main: Caught " << t1.what() << '\n';
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
