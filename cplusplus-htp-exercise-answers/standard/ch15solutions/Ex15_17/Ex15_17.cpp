// Exercise 15.17 Solution: Ex15_17.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   // display column headings and set field lengths
   cout << setw( 7 ) << "Decimal" << setw( 9 ) << "Octal " << setw( 15 )
      << "Hexadecimal " << setw( 13 ) << "Character" << showbase << '\n';

   // loop through ASCII values 33-126 and display corresponding
   // integer, octal and hexadecimal values
   for ( int loop = 33; loop <= 126; loop++ )
       cout << setw( 7 ) << dec << loop << setw( 9 ) << oct << loop 
          << setw( 15 ) << hex << loop << setw(13) 
          << static_cast< char >( loop ) << endl;
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
