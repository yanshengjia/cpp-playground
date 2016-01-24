// Exercise 16.25 Solution: DerivedException1.h
#include <string>
#include <stdexcept> // standard C++ library class runtime_error
using namespace std;

// class DerivedException1 definition
class DerivedException1 : public runtime_error 
{
public:
   // constructor specifies error message
   DerivedException1( const string& message ) 
      : runtime_error( message ) {}
}; // end class DerivedException1

/**************************************************************************
 * (C) Copyright 1992-2008 by Deitel & Associates, Inc. and               *
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
