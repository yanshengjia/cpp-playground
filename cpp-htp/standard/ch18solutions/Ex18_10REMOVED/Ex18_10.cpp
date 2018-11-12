// Exercise 18.10 Solution: Ex18_10.cpp
// Program passes a string by value and 
// passes a string by reference.
#include <iostream> 
#include <string> 
using namespace std;

// prototypes
void byValue( string );
void byReference( string& );

int main()
{
   string s = "Standard C++ draft standard";
   cout << "Original string: " << s;
   
   // call to function byValue
   byValue( s );
   cout << "\nAfter calling byValue: " << s;

   // call to function byReference
   byReference( s );
   cout << "\nAfter calling byReference: " << s << endl;
} // end main

// demonstrates passing by value
void byValue( string s )
{
   // call function erase to take out 4 characters from the string
   s.erase( 0, 4 );
} // end function byValue

// demonstrates passing by reference
void byReference( string& sRef )
{
   // erasing 9 characters from the string passed in
   sRef.erase( 0, 9 );
} // end function byReference

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
