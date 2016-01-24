// Exercise 15.14 Solution: Ex15_14.cpp
// PhoneNumber test program
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
   PhoneNumber telephone; // create PhoneNumber object

   // ask user to enter valid telephone number and store it
   cout << "Enter a phone number in the form (123) 456-7890:\n";
   cin >> telephone;

   // display phone number entered by user
   cout << "The phone number entered was:  " << telephone << endl;

   // ask user for invalid phone number and store it
   cout << "Now enter an invalid phone number:\n";
   cin >> telephone;
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
