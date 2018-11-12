// Exercise 3.14 Solution: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// Employee constructor initializes the three data members
Employee::Employee( string first, string last, int salary )
{ 
   setFirstName( first ); // store first name
   setLastName( last ); // store last name
   setMonthlySalary( salary ); // validate and store monthly salary
} // end Employee constructor

// set first name
void Employee::setFirstName( string name )
{
   firstName = name; // no validation needed
} // end function setFirstName

// return first name
string Employee::getFirstName()
{
   return firstName;
} // end function getFirstName

// set last name
void Employee::setLastName( string name )
{
   lastName = name; // no validation needed
} // end function setLastName

// return last name
string Employee::getLastName()
{
   return lastName;
} // end function getLastName

// set monthly salary; if not positive, set to 0
void Employee::setMonthlySalary( int salary )
{ 
   if ( salary > 0 ) // if salary is positive
      monthlySalary = salary; // set monthlySalary to salary

   if ( salary <= 0 ) // if salary is not positive
      monthlySalary = 0; // set monthlySalary to 0
} // end function setMonthlySalary

// return monthly salary
int Employee::getMonthlySalary()
{
   return monthlySalary;
} // end function getMonthlySalary



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
