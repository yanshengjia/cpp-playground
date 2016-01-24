// Exercise 8.40 Solution: Ex08_40.cpp
#include <iostream> 
using namespace std;

// prototype
unsigned long stringLength1( const char * );
unsigned long stringLength2( const char * );

int main()
{
   char string[ 100 ];

   cout << "Enter a string: ";
   cin >> string;

   cout << "\nAccording to stringLength1 the string length is: "
      << stringLength1( string ) 
      << "\nAccording to stringLength2 the string length is: "
      << stringLength2( string ) << endl;
} // end main

// finding string length using arrays
unsigned long stringLength1( const char *sPtr )
{
   int length;

   // array subscript notation
   for ( length = 0; sPtr[ length ] != '\0'; length++ )
      ; // empty body

   return length;
} // end function stringLength1

// finding string length using pointers
unsigned long stringLength2( const char *sPtr )
{
   int length;

   // pointer notation
   for ( length = 0; *sPtr != '\0'; sPtr++, length++ )
      ; // empty body

   return length;
} // end function stringLength2

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
