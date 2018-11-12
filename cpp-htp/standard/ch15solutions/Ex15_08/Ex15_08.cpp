// Exercise 15.8 Solution: Ex15_08.cpp
#include <iostream> 
using namespace std;

int main()
{
   // string to cast into integer formats
   char *string = "test";

   // display data stored in string and 
   // address of string using static_cast
   cout << "Value of string is            : " << string << '\n'
        << "Value of static_cast<void *>( string ) is    : " 
        << static_cast<void *>( string ) << '\n'

        // The Following generate errors.
        // reinterpret_cast will allow this type of casting.
        // See Ch. 24 for a discussion of reinterpret_cast.

/*      << "Value of static_cast<char>(string) is      : " 
        << static_cast<char>( string ) << '\n'
        << "Value of static_cast<int>(string) is       : " 
        << static_cast<int>( string ) << '\n'
        << "Value of static_cast<long>(string) is      : " 
        << static_cast<long>( string ) << '\n'
        << "Value of static_cast<short>(string) is     : " 
        << static_cast<short>( string ) << '\n'
        << "Value of static_cast<unsigned>(string) is  : " 
        << static_cast<unsigned>( string ) 
*/
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
