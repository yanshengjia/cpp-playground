// Exercise 16.28 Solution: Item.cpp
// Class Item member function definition.
#include <iostream> 
#include <stdexcept>
#include "Item.h"
using namespace std;

// constructor takes int parameter
Item::Item( int val ) : value( val )
{ 
   cout << "Item " << value << " constructor called\n"; 

   // if value is 3, throw an exception for demonstration purposes
   if ( value == 3 ) 
      throw runtime_error( "An exception was thrown" );
} // end Items constructor

// destructor
Item::~Item() 
{ 
   cout << "Item " << value << " destructor called\n"; 
} // end Items destructor


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
