// Exercise 14.7 Solution: Ex14_07.cpp
#include <iostream>
#include <string>
#include "Array.h"
using namespace std;

int main()
{
   Array< int, 5 > intArray; // create intArray object

   // initialize intArray with user input values
   cout << "Enter " << intArray.getSize() << " integer values:\n";
   intArray.inputArray();

   // output intArray
   cout << "\nThe values in intArray are:\n";
   intArray.outputArray();

   Array< string, 7 > stringArray; // create stringArray

   // initialize stringArray with user input values
   cout << "\nEnter " << stringArray.getSize()
      << " one-word string values:\n";
   stringArray.inputArray();

   // output stringArray
   cout << "\nThe values in the stringArray are:\n";
   stringArray.outputArray();
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
