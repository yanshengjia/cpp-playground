// Exercise 6.26 Solution: Ex06_26.cpp
// Fahrenheit and Celsius equivalents.
#include <iostream>
#include <iomanip>
using namespace std;

int celsius( int ); // function prototype
int fahrenheit( int ); // function prototype

int main()
{
   // display table of Fahrenheit equivalents of Celsius temperatures
   cout << "Fahrenheit equivalents of Celsius temperatures:" << endl;

   // create 4 sets of table headers
   for ( int t = 0; t < 4; t++ )
      cout << setw( 7 ) << "Celsius" << setw( 12 ) << "Fahrenheit ";

   cout << endl;

   // display temperatures in blocks of 25
   for ( int i = 0; i < 25; i++ ) 
   {
      for ( int j = 0; j <= 75; j += 25 ) 
         cout << setw( 7 ) << i + j 
            << setw( 11 ) << fahrenheit( i + j ) << ' ';

      cout << endl;
   } // end for

   // display equivalent for 100
   cout << setw( 64 ) << 100 << setw( 11 ) << fahrenheit( 100 ) << endl;

   // display table of Celsius equivalents of Fahrenheit temperatures
   cout << "\nCelsius equivalents of Fahrenheit temperatures:" << endl;

   // create 4 sets of table headers
   for ( int t = 0; t < 4; t++ )
      cout << setw( 10 ) << "Fahrenheit" << setw( 9 ) << "Celsius ";

   cout << endl;

   // display temperatures in blocks of 45
   for ( int i = 32; i < 77; i++ ) 
   {
      for ( int j = 0; j <= 135; j += 45 ) 
         cout << setw( 10 ) << i + j 
            << setw( 8 ) << celsius( i + j ) << ' ';

      cout << endl;
   } // end for

   // display equivalent for 212
   cout << setw( 67 ) << 212 << setw( 8 ) << celsius( 212 ) << endl;
} // end main

// celsius returns Celsius equivalent of fTemp,
// given in Fahrenheit
int celsius( int fTemp )
{
   return static_cast< int > ( 5.0 / 9.0 * ( fTemp - 32 ) );
} // end function celsius

// fahrenheit returns Fahrenheit equivalent of cTemp,
// given in Celsius
int fahrenheit( int cTemp )
{
   return static_cast< int > ( 9.0 / 5.0 * cTemp + 32 );
} // end function fahrenheit

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
