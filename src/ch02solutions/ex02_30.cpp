// Exercise 2.30 Solution: ex02_30.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int weight, height; // variables to store weight and height

   // prompt the user for their weight and height and read them in
   cout << "Enter weight (lbs): ";
   cin >> weight;
   cout << "Enter height (in): ";
   cin >> height;

   // calculate bmi (rounds down due to integer division)
   int bmi = ( weight * 703 ) / ( height * height );

   cout << "\nYour BMI is: " << bmi << "\n\n"; // display user's BMI

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
