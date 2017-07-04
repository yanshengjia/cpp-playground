// Exercise 15.7 Solution: Ex15_07.cpp
#include <iostream> 
#include <iomanip> 
#include <string>
using namespace std;

void show( const string message )
{
   int integer; // holds values input by user

   // prompt user to enter data in decimal format
   cout << "\n" << message;
   cin >> integer; // store data in integer
   
   // display integer in decimal, octal and hexadecimal format
   cout << showbase << "As a decimal number "  << dec 
      << integer << "\nAs an octal number " << oct << integer
      << "\nAs a hexadecimal number " << hex << integer << endl;
} // end function show

int main()
{
   show( "Enter an integer: " );
   cin >> oct;
   show( "Enter an integer in octal format: " );
   cin >> hex;
   show( "Enter an integer in hexadecimal format: " );
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
