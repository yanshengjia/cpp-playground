// Exercise 3.14 Solution: Employee.h
// Employee class definition.
#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee 
{
public:
   Employee( string, string, int ); // constructor sets data members
   void setFirstName( string ); // set first name
   string getFirstName(); // return first name
   void setLastName( string ); // set last name
   string getLastName(); // return last name
   void setMonthlySalary( int ); // set monthly salary
   int getMonthlySalary(); // return monthly salary
private:
   string firstName; // Employee's first name
   string lastName; // Employee's last name
   int monthlySalary; // Employee's salary per month
}; // end class Employee



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
