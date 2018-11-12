// Exercise 16.24 Solution: TestException.h
#include <string>
#include <stdexcept> // standard C++ library class runtime_error
using namespace std;

// class TestException definition
class TestException : public runtime_error 
{
public:
   // constructor specifies error message
   TestException( const string& message ) 
      : runtime_error( message ) {}
}; // end class TestException



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
