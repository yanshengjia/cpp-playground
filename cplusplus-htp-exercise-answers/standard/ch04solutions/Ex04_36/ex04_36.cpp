// Exercise 4.36 Solution: ex04_36.cpp
// Calculate world population over time based on growth.
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main()
{
   // initialize variables; population must be a double because
   // int can hold only up to approximately 2 billion
   double population, growthRate;

   // read values from user
   cout << "Enter current population" << endl;
   cin >> population;
   cout << "Enter growth rate as a percentage" << endl;
   cin >> growthRate;

   // convert growth rate into growth factor to multiply with population
   double growthFactor = growthRate / 100 + 1.0;
   int year = 1; // initialize counter
   cout << "\nYear\tPopulation\tPopulation Change\n"; // output header
   cout << setprecision( 0 ) << fixed; // set floating-point formatting

   // loop until year exceeds 75
   while ( year <= 75 )
   {
      double oldPopulation = population; // save old population
      population = population * growthFactor; // calculate new population
      double difference = population - oldPopulation; // population change

      // display information
      cout << year << "\t" << population << "\t" << difference << endl;
      ++year; // increment year
   } // end while
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
