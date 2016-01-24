// Exercise 3.17 Solution: ex03_17.cpp
// Driver program for HealthProfile class
#include <iostream>
#include <string>
#include "HealthProfile.h"
using namespace std;

int main()
{
   string first, last; // first name, last name
   int month, day, year; // birth month, day, year
   int height, weight; // height (inches) and weight (pounds)
   char gender; // gender (M or F)

   // get user input
   cout << "Please enter first and last name:\n";
   cin >> first >> last;
   cout << "Please enter gender (M or F):\n";
   cin >> gender;
   cout << "Please enter month, day, and year of birth:\n";
   cin >> month >> day >> year;
   cout << "Please enter height (in inches) and weight (in pounds):\n";
   cin >> height >> weight;

   // create a HealthProfile object
   HealthProfile profile( first, last, gender,
      month, day, year, height, weight );

   // display user information
   cout << "First Name: " << profile.getFirstName() << "\n";
   cout << "Last Name: " << profile.getLastName() << "\n";
   cout << "Gender: " << profile.getGender() << "\n";
   cout << "Date of Birth: " << profile.getBirthMonth() << "/"
      << profile.getBirthDay() << "/"
      << profile.getBirthYear() << "\n";
   cout << "Height (inches): " << profile.getHeight() << "\n";
   cout << "Weight (pounds): " << profile.getWeight() << "\n";
   cout << "Age: " << profile.getAge() << "\n";
   cout << "Maximum Heart Rate: "
      << profile.getMaximumHeartRate() << "\n";
   cout << "Target Heart Rate: "
      << profile.getMinimumTargetHeartRate() << "-"
      << profile.getMaximumTargetHeartRate() << "\n";
   cout << "Body Mass Index: " << profile.getBodyMassIndex() << "\n\n";

   // display BMI information table
   cout << "BMI VALUES                        \n";
   cout << "Underweight: less than 18.5       \n";
   cout << "Normal:      between 18.5 and 24.9\n";
   cout << "Overweight:  between 25 and 29.9  \n";
   cout << "Obese:       30 or greater        \n";
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
