// Exercise 6.51 Solution: Ex06_51.cpp
// Comparing call by value and call by reference.
#include <iostream>
using namespace std;

int tripleByValue( int ); // function prototype
void tripleByReference( int & ); // function prototype

int main()
{
   int count; // local variable for testing

   // prompt for count value
   cout << "Enter a value for count: ";
   cin >> count;  

   // using call by value
   cout << "\nValue of count before call to tripleByValue() is: "
      << count << "\nValue returned from tripleByValue() is: "
      << tripleByValue( count ) 
      << "\nValue of count (in main) after tripleCallByValue() is: " 
      << count;

   // using call by reference
   cout << "\n\nValue of count before call to tripleByReference() is: "
      << count << endl;

   tripleByReference( count );

   cout << "Value of count (in main) after call to "    
      << "tripleByReference() is: " << count << endl;
} // end main

// tripleByValue uses call-by-value parameter passing to triple the value
int tripleByValue( int value )
{
   return value *= 3;
} // end function tripleByValue

// tripleByReference uses call-by-reference parameter passing
// to triple the variable referenced by valueRef
void tripleByReference( int &valueRef )
{
   valueRef *= 3;
} // end function tripleByReference

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
