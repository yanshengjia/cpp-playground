// Exercise 6.54 Solution: Ex06_54.cpp
// Finding the maximum using a function template.
#include <iostream>
using namespace std;

// definition of function template maximum; finds the larger value
template < class T >
T maximum( T value1, T value2 )   
{
   if ( value1 > value2 )
      return value1;
   else
      return value2;
} // end function template maximum

int main()
{
   // demonstrate maximum with int values
   int int1; // first int value
   int int2; // second int value

   cout << "Input two integer values: ";
   cin >> int1 >> int2;

   // invoke int version of maximum
   cout << "The larger integer value is: " << maximum( int1, int2 );

   // demonstrate maximum with char values
   char char1; // first char value
   char char2; // second char value

   cout << "\n\nInput two characters: ";
   cin >> char1 >> char2;

   // invoke char version of maximum
   cout << "The larger character value is: " << maximum( char1, char2 );

   // demonstrate maximum with double values
   double double1; // first double value
   double double2; // second double value

   cout << "\n\nInput two double values: ";
   cin >> double1 >> double2;

   // invoke double version of maximum
   cout << "The larger double value is: " << maximum( double1, double2 )
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
