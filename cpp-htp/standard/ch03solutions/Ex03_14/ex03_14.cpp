// Exercise 3.14 Solution: ex03_14.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include "Employee.h" // include definition of class Employee
using namespace std;

// function main begins program execution
int main()
{
   // create two Employee objects
   Employee employee1( "Lisa", "Roberts", 4500 );
   Employee employee2( "Mark", "Stein", 4000 );

   // display each Employee's yearly salary
   cout << "Employees' yearly salaries: " << endl;

   // retrieve and display employee1's monthly salary multiplied by 12
   int monthlySalary1 = employee1.getMonthlySalary();
   cout << employee1.getFirstName() << " " << employee1.getLastName() 
      << ": $" << monthlySalary1 * 12 << endl;

   // retrieve and display employee2's monthly salary multiplied by 12
   int monthlySalary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getLastName() 
      << ": $" << monthlySalary2 * 12 << endl;

   // give each Employee a 10% raise
   employee1.setMonthlySalary( monthlySalary1 + monthlySalary1 / 10 );
   employee2.setMonthlySalary( monthlySalary2 + monthlySalary2 / 10 );

   // display each Employee's yearly salary again
   cout << "\nEmployees' yearly salaries after 10% raise: " << endl;

   // retrieve and display employee1's monthly salary multiplied by 12
   monthlySalary1 = employee1.getMonthlySalary();
   cout << employee1.getFirstName() << " " << employee1.getLastName() 
      << ": $" << monthlySalary1 * 12 << endl;
   
   monthlySalary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getLastName() 
      << ": $" << monthlySalary2 * 12 << endl;
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
