// Exercise 16.26 Solution: Ex16_26.cpp
#include <iostream>
using namespace std;

int main()
{
   try // throw int
   {
      int a = 7;
      double b = 9.9;

      // throw int to show that only the double catch handler executes
      throw a < b ? a : b;
   } // end try
   catch ( int x ) // catch ints
   {
      cerr << "The int value " << x << " was thrown\n";
   } // end catch
   catch ( double y ) // catch doubles
   {
      cerr << "The double value " << y << " was thrown\n";
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
