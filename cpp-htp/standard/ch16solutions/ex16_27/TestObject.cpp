// Exercise 16.27 Solution: TestObject.cpp
// Class TestObject member function definition.
#include <iostream> 
#include "TestObject.h"
using namespace std;

// constructor takes int parameter
TestObject::TestObject( int val ) : value( val )
{ 
   cout << "TestObject " << value << " constructor\n"; 
} // end TestObject constructor

// destructor
TestObject::~TestObject() 
{ 
   cout << "TestObject " << value << " destructor\n"; 
} // end TestObject destructor


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
