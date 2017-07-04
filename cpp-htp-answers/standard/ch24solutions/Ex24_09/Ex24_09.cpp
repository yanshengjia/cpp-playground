// Exercise 24.9 Solution: Ex24_09.cpp
#include <iostream> 
using namespace std;

// class Base definition
class Base 
{
public:
   Base( int n ) 
   {
      num = n;
   } // end Base constructor

   void print() 
   {
      cout << num;
   } // end function print

private:
   int num;
}; // end class Base

// class D1 definition
class D1 : virtual public Base 
{
public:
   D1(): Base( 3 ) {} // D1 constructor
}; // end class D1

// class D2 definition
class D2 : virtual public Base 
{
public:
   D2(): Base( 5 ) {} // D2 constructor
}; // end class D2

// class Multi definition
class Multi : public D1, D2 
{
public:
   Multi( int a ): Base( a ) {} // Multi constructor
}; // end class Multi

int main()
{
   Multi m( 9 );
   m.print();
   cout << endl;
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
