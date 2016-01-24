// Exercise 15.12 Solution: Ex15_12.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   double celsius; // holds celsius temperature

   // create column headings with fields of length 20
   cout << setw( 20 ) << "Fahrenheit " << setw( 20 ) << "Celsius\n"
      << fixed << showpoint;

   // convert fahrenheit to celsius and display temperatures
   // showing the sign for celsius temperatures
   for ( int fahrenheit = 0; fahrenheit <= 212; fahrenheit++ ) 
   {
       celsius = 5.0 / 9.0 * ( fahrenheit - 32 );
       cout << setw( 15 ) << noshowpos << fahrenheit << setw( 23 ) 
          << setprecision( 3 ) << showpos << celsius << '\n';
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
