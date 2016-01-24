// Exercise 5.20 Solution: ex05_20.cpp
// Find Pythagorean triples using brute force computing.
#include <iostream>
using namespace std;

int main()
{
   int count = 0; // number of triples found 
   long int hypotenuseSquared; // hypotenuse squared
   long int sidesSquared; // sum of squares of sides

   cout << "Side 1\tSide 2\tSide3" << endl;

   // side1 values range from 1 to 500
   for ( long side1 = 1; side1 <= 500; side1++ ) 
   {
      // side2 values range from current side1 to 500
      for ( long side2 = side1; side2 <= 500; side2++ ) 
      {
         // hypotenuse values range from current side2 to 500
         for ( long hypotenuse = side2; hypotenuse <= 500; hypotenuse++ ) 
         {
            // calculate square of hypotenuse value
            hypotenuseSquared = hypotenuse * hypotenuse;

            // calculate sum of squares of sides
            sidesSquared = side1 * side1 + side2 * side2;

            // if (hypotenuse)^2 = (side1)^2 + (side2)^2,
            // Pythagorean triple
            if ( hypotenuseSquared == sidesSquared ) 
            {
               // display triple
               cout << side1 << '\t' << side2 << '\t' 
                  << hypotenuse << '\n';
               count++; // update count
            } // end if
         } // end for
      } // end for
   } // end for
       
   // display total number of triples found
   cout << "A total of " << count << " triples were found." << endl;
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
