// Exercise 13.12 Solution: HourlyEmployee.cpp
// HourlyEmployee class member-function definitions.
#include <iostream>
#include "HourlyEmployee.h" // HourlyEmployee class definition
using namespace std;

// constructor
HourlyEmployee::HourlyEmployee( const string &first, const string &last, 
   const string &ssn, int month, int day, int year, 
   double hourlyWage, double hoursWorked )
   : Employee( first, last, ssn, month, day, year )   
{
   setWage( hourlyWage ); // validate hourly wage
   setHours( hoursWorked ); // validate hours worked
} // end HourlyEmployee constructor

// set wage
void HourlyEmployee::setWage( double hourlyWage ) 
{ 
   wage = ( hourlyWage < 0.0 ? 0.0 : hourlyWage ); 
} // end function setWage

// return wage
double HourlyEmployee::getWage() const
{
   return wage;
} // end function getWage

// set hours worked
void HourlyEmployee::setHours( double hoursWorked )
{ 
   hours = ( ( ( hoursWorked >= 0.0 ) &&
      ( hoursWorked <= hoursPerWeek ) ) ? hoursWorked : 0.0 );
} // end function setHours

// return hours worked
double HourlyEmployee::getHours() const
{
   return hours;
} // end function getHours

// calculate earnings;
// override pure virtual function earnings in Employee
double HourlyEmployee::earnings() const 
{ 
   if ( getHours() <= 40 ) // no overtime
      return getWage() * getHours();
   else               
      return 40 * getWage() + ( ( getHours() - 40 ) * getWage() * 1.5 );
} // end function earnings

// print HourlyEmployee's information 
void HourlyEmployee::print() const
{
   cout << "hourly employee: ";
   Employee::print(); // code reuse
   cout << "\nhourly wage: " << getWage() << 
      "; hours worked: " << getHours();
} // end function print

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
