// Exercise 11.9 Solution: ex11_09.cpp
// HugeInt test program.
#include <iostream>
#include "Hugeint.h"
using namespace std;

int main()
{
   HugeInt n1( 7654321 );
   HugeInt n2( 7891234 );
   HugeInt n3( "99999999999999999999999999999" );
   HugeInt n4( "1" );
   HugeInt n5( "12341234" );
   HugeInt n6( "7888" );
   HugeInt result;

   cout << "n1 is " << n1 << "\nn2 is " << n2
      << "\nn3 is " << n3 << "\nn4 is " << n4
      << "\nn5 is " << n5 << "\nn6 is " << n6
      << "\nresult is " << result << "\n\n";

   // test relational and equality operators
   if ( n1 == n2 )
      cout << "n1 equals n2" << endl;

   if ( n1 != n2 )
      cout << "n1 is not equal to n2" << endl;
   
   if ( n1 < n2 )
      cout << "n1 is less than n2" << endl;
   
   if ( n1 <= n2 )
      cout << "n1 is less than or equal to n2" << endl;
   
   if ( n1 > n2 )
      cout << "n1 is greater than n2" << endl;
   
   if ( n1 >= n2 )
      cout << "n1 is greater than or equal to n2" << endl;

   result = n1 + n2;
   cout << n1 << " + " << n2 << " = " << result << "\n\n";

   cout << n3 << " + " << n4 << "\n= " << ( n3 + n4 ) << "\n\n";

   result = n1 + 9;
   cout << n1 << " + " << 9 << " = " << result << endl;

   result = n2 + "10000";
   cout << n2 << " + " << "10000" << " = " << result << endl;

   result = n5 * n6;
   cout << n5 << " * " << n6 << " = " << result << endl;

   result = n5 - n6;
   cout << n5 << " - " << n6 << " = " << result << endl;

   result = n5 / n6;
   cout << n5 << " / " << n6 << " = " << result << endl;
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
