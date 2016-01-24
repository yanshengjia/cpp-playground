// Exercise 6.53 Solution: Ex06_53.cpp
// Finding the minimum using a function template.
#include <iostream>
using namespace std;

// definition of function template minimum; finds the smaller value
template < class T >
T minimum( T value1, T value2 )   
{
   if ( value1 < value2 )
      return value1;
   else
      return value2;
} // end function template minimum

int main()
{
   // demonstrate minimum with int values
   int int1; // first int value
   int int2; // second int value

   cout << "Input two integer values: ";
   cin >> int1 >> int2;

   // invoke int version of minimum
   cout << "The smaller integer value is: " << minimum( int1, int2 );

   // demonstrate minimum with char values
   char char1; // first char value
   char char2; // second char value

   cout << "\n\nInput two characters: ";
   cin >> char1 >> char2;

   // invoke char version of minimum
   cout << "The smaller character value is: " << minimum( char1, char2 );

   // demonstrate minimum with double values
   double double1; // first double value
   double double2; // second double value

   cout << "\n\nInput two double values: ";
   cin >> double1 >> double2;

   // invoke double version of minimum
   cout << "The smaller double value is: " << minimum( double1, double2 )
      << endl;
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
