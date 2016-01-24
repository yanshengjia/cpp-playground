// Exercise 6.32 Solution: Ex06_32.cpp
// Determine quality points on 0 to 4 scale
// for averages in 0 to 100 range.
#include <iostream>
using namespace std;

int qualityPoints( int ); // function prototype

int main()
{
   int average; // current average

   // loop for 5 inputs
   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cout << "\nEnter the student's average: ";
      cin >> average;

      // determine and display corresponding quality points
      cout << average << " on a 4 point scale is "
         << qualityPoints( average ) << endl;
   } // end for

   cout << endl;
} // end main

// qualityPoints takes average in range 0 to 100 and
// returns corresponding quality points on 0 to 4 scale
int qualityPoints( int average )
{
   if ( average >= 90 ) // 90 <= average <= 100
      return 4;
   else if ( average >= 80 ) // 80 <= average <= 89
      return 3;
   else if ( average >= 70 ) // 70 <= average <= 79
      return 2;
   else if ( average >= 60 ) // 60 <= average <= 69
      return 1;
   else // 0 <= average < 60
      return 0;
} // end function qualityPoints

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
