// Exercise 3.16 Solution: ex03_16.cpp
// Driver program for HeartRates class
#include <iostream>
#include <string>
#include "HeartRates.h"
using namespace std;

int main()
{
   string first, last; // first name, last name
   int month, day, year; // birth month, day, year

   // get user input
   cout << "Please enter first and last name:" << endl;
   cin >> first >> last;
   cout << "Please enter month, day, and year of birth:" << endl;
   cin >> month >> day >> year;

   // create a HeartRates object
   HeartRates heartRates( first, last, month, day, year );

   // display user information
   cout << "First Name: " << heartRates.getFirstName() << "\n";
   cout << "Last Name: " << heartRates.getLastName() << "\n";
   cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
      << heartRates.getBirthDay() << "/"
      << heartRates.getBirthYear() << "\n";
   cout << "Age: " << heartRates.getAge() << "\n";
   cout << "Maximum Heart Rate: "
      << heartRates.getMaximumHeartRate() << "\n";
   cout << "Target Heart Rate: "
      << heartRates.getMinimumTargetHeartRate() << "-"
      << heartRates.getMaximumTargetHeartRate() << "\n";
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
