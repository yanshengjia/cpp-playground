// Exercise 16.25 Solution: Ex16_25.cpp
#include <iostream> 
#include "DerivedException1.h"
#include "DerivedException2.h"
using namespace std;

int main()
{
   try // throw DerivedException1
   {
      throw ( DerivedException1( "DerivedException1" ) );
   } // end try
   catch ( runtime_error &exception ) // exceptions of runtime_error
   {
      cerr << exception.what() << endl;
   } // end catch

   try // throw DerivedException2
   {
      throw ( DerivedException2( "DerivedException2" ) );
   } // end try
   catch ( runtime_error &exception ) // exceptions of runtime_error
   {
      cerr << exception.what() << endl;
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
