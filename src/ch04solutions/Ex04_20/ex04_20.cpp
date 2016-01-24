// Exercise 4.20 Solution: ex04_20.cpp
// Examination results problem: Validating input.
#include <iostream>
using namespace std;

int main()
{
   // initializing variables in declarations
   int passes = 0; // number of passes
   int failures = 0; // number of failures
   int studentCounter = 1; // student counter
   int result; // one exam result (1 = pass, 2 = fail)

   // process 10 students using counter-controlled loop
   while ( studentCounter <= 10 )
   {
      // prompt user for input and obtain value from user
      cout << "Enter result (1 = pass, 2 = fail): ";
      cin >> result;

      if ( result == 1 ) // 1 is a valid input
      {
         passes = passes + 1; // increment passes
         studentCounter = studentCounter + 1; // increment studentCounter
      } // end if
      else if ( result == 2 ) // 2 is a valid input
      {
         failures = failures + 1; // increment failures
         studentCounter = studentCounter + 1; // increment studentCount
      } // end else if
      else // invalid input; tell user and prompt again
      {
         cout << "Invalid input" << endl;
      } // end else
   } // end while

   // termination phase; display number of passes and failures
   cout << "Passed " << passes << "\nFailed " << failures << endl;

   // determine whether more than eight students passed
   if ( passes > 8 )
      cout << "Bonus to instructor!" << endl;
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
