// Fig. 12.21: fig12_21.cpp
// Testing class BasePlusCommissionEmployee.
#include <iostream>
#include <iomanip>

// BasePlusCommissionEmployee class definition
#include "BasePlusCommissionEmployee.h" 
using namespace std;

int main()
{
   // instantiate BasePlusCommissionEmployee object
   BasePlusCommissionEmployee 
      employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
   
   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission employee data
   cout << "Employee information obtained by get functions: \n" 
      << "\nFirst name is " << employee.getFirstName() 
      << "\nLast name is " << employee.getLastName() 
      << "\nSocial security number is " 
      << employee.getSocialSecurityNumber() 
      << "\nGross sales is " << employee.getGrossSales() 
      << "\nCommission rate is " << employee.getCommissionRate()
      << "\nBase salary is " << employee.getBaseSalary() << endl;

   employee.setBaseSalary( 1000 ); // set base salary

   cout << "\nUpdated employee information output by print function: \n" 
      << endl;
   employee.print(); // display the new employee information
    
   // display the employee's earnings
   cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
} // end main


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
