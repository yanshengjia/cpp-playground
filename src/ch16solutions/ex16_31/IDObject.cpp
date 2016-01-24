// Exercise 16.31 Solution: IDObject.cpp
#include <iostream> 
#include "IDObject.h"
#include "InvalidIDException.h"
using namespace std;

// constructor takes an int
IDObject::IDObject( int id ) : idNumber( id )
{
   cout << "Constructor for IDObject " << idNumber << '\n';
      
   if ( idNumber < 0 ) // negative id
      throw InvalidIDException( "ERROR: Negative ID number" );
} // end IDObject constructor


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
