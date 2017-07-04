// Exercise 16.28 Solution: ItemGroup.cpp
// Class ItemGroup member function definition.
#include <iostream> 
#include "ItemGroup.h"
using namespace std;

// constructor 
ItemGroup::ItemGroup() 
   : item1( 1 ), item2( 2 ), item3( 3 ), item4( 4 ), item5( 5 )
{ 
   cout << "ItemGroup constructor called\n"; 
} // end ItemGroup constructor

// destructor
ItemGroup::~ItemGroup() 
{ 
   cout << "ItemGroup destructor called\n"; 
} // end ItemGroup destructor


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
