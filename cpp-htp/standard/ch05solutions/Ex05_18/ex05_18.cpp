// Exercise 5.18 Solution: ex05_18.cpp
// Display decimal, binary, octal and hexadecimal numbers.
#include <iostream>
using namespace std; 

int main()
{
   int number; // loop counter for binary numbers
   int factor; // current factor for binary numbers

   // use tabs to display table headers 
   cout << "Decimal\t\tBinary\t\tOctal\tHexadecimal\n";

   // loop from 1 to 256
   for ( int loop = 1; loop <= 256; loop++ ) 
   {
      cout << dec << loop << "\t\t";

      // output binary number
      // initialize variables for calculating binary equivalent
      number = loop;
      factor = 256;

      // output first digit
      cout << ( number == 256 ? '1' : '0' );
  
      // loop until factor is 1, i.e., last digit
      do 
      {       
         // output current digit
         cout << 
            ( number < factor && number >= ( factor / 2 ) ? '1' : '0' );

         // update factor and number variables
         factor /= 2;
         number %= factor;
      } while ( factor > 1 );

      // output octal number using oct stream manipulator
      cout << '\t' << oct << loop;

      // output hexadecimal number using hex stream manipulator
      cout << '\t' << hex << loop << endl;
   } // end for 
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
