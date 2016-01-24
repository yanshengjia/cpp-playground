// Exercise 13.12 Solution: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee( const string &first, const string &last,
   const string &ssn, int month, int day, int year )
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn ),
     birthDate( month, day, year )
{
   // empty body 
} // end Employee constructor

// set first name
void Employee::setFirstName( const string &first ) 
{ 
   firstName = first;  
} // end function setFirstName

// return first name
string Employee::getFirstName() const 
{ 
   return firstName;  
} // end function getFirstName

// set last name
void Employee::setLastName( const string &last )
{
   lastName = last;   
} // end function setLastName

// return last name
string Employee::getLastName() const
{
   return lastName;   
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;   
} // end function getSocialSecurityNumber

// set birthday
void Employee::setBirthDate( int month, int day, int year )
{
   birthDate.setDate( month, day, year );
} // end function setBirthDate

// return birthday
Date Employee::getBirthDate() const
{
   return birthDate;
} // end function getBirthDate

// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{ 
   cout << getFirstName() << ' ' << getLastName() 
      << "\nbirthday: " << getBirthDate()
      << "\nsocial security number: " << getSocialSecurityNumber(); 
} // end function print

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
