// Exercise 21.21 Solution: ex21_21.cpp
#include <iostream> 
#include <cstdlib>
using namespace std;

const int SIZE = 6;

int main()
{
   char stringValue[ SIZE ];
   int sum = 0;
   
   for ( int i = 1; i <= 4; ++i )
   {
      cout << "Enter an integer string: ";
      cin >> stringValue;
      sum += atoi( stringValue ); // add converted stringValue to sum
   } // end for
   
   cout << "The total of the values is " << sum << endl;
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
 *************************************************************************/

