// Exercise 6.47 Solution: Ex06_47.cpp
// Test math library functions on range of values.
#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;

void testPositiveRange(); // function prototype
void testNegativePositiveRange(); // function prototype
void testTrig(); // function prototype

int main()
{
   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // display table testing sqrt, exp, log, log10 and pow
   testPositiveRange();
   cout << "\n\n\n";

   // display table testing fabs, ceil and floor
   testNegativePositiveRange();
   cout << "\n\n\n";

   testTrig(); // display table testing sin, cos and tan
   cout << endl;
} // end main

// testPositiveRange tests math library functions
// sqrt, exp, log, log10 and pow on range of positive numbers
void testPositiveRange()
{
   // table header for first column
   cout << "function";      

   for ( int a = 1; a < 6; a++ ) // table headers for value columns
      cout << setw( 12 ) << a << ' ';

   // row data for square root function
   cout << "\n\nsqrt()  ";

   for ( int b = 1; b < 6; b++ ) // display sqrt for range of values
      cout << setw( 12 ) << sqrt( static_cast< double > ( b ) ) << ' ';

   cout << "\nexp()   "; // row data for exponential function

   for ( int c = 1; c < 6; c++ ) // display exp for range of values
      cout << setw( 12 ) << exp( static_cast< double > ( c ) ) << ' ';

   cout << "\nlog()   "; // row data for natural log function

   // display natural log for range of values
   for ( int d = 1; d < 6; d++ )
      cout << setw( 12 ) << log( static_cast< double > ( d ) ) << ' ';

   cout << "\nlog10() "; // row data for log base 10 function

   // display log base 10 for range of values
   for ( int e = 1; e < 6; e++ )
      cout << setw( 12 ) << log10( static_cast< double > ( e ) ) << ' ';

   // row data for pow function, test with 2 as base
   cout << "\npow(2,x)";

   for ( int f = 1; f < 6; f++ ) // display pow for range of values
      cout << setw( 12 ) << pow( 2.0, f ) << ' ';
} // end function testPositiveRange

// testNegativePositiveRange tests math library functions
// fabs, ceil and floor on range of negative and positive numbers
void testNegativePositiveRange()
{
   cout << "function"; // table header for first column

   // table headers for value columns
   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << i / 10.0 << ' ';

   cout << "\n\nfabs()  "; // row data for absolute value function

   // display fabs for range of values
   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << fabs( i / 10.0 ) << ' ';

   cout << "\nceil()  "; // row data for ceiling function

   // display ceil for range of values
   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << ceil( i / 10.0 ) << ' ';

   cout << "\nfloor() "; // row data for floor function

   // display floor for range of values
   for ( int i = -15; i < 30; i += 11 )
      cout << setw( 12 ) << floor( i / 10.0 ) << ' ';
} // end function testNegativePositiveRange

// testTrig tests math library functions
// sin, cos and tan on range of radian numbers
void testTrig()
{
   double pi = 3.14159; // approximate value for pi
   cout << "function"; // table header for first column

   // table headers for value columns
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << i * pi / 2 << ' ';

   cout << "\n\nsin()   "; // row data for sine function

   // display sin for range of values
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << sin( i * pi / 2 ) << ' ';

   cout << "\ncos()   "; // row data for cosine function

   // display cos for range of values
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << cos( i * pi / 2 ) << ' ';

   cout << "\ntan()   "; // row data for tangent function

   // display tan for range of values
   for ( int i = -1; i < 4; i++ )
      cout << setw( 12 ) << tan( i * pi / 2 ) << ' ';
} // end function testTrig

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
