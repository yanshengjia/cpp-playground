// Exercise 6.3: Ex06_03.cpp
// Testing the math library functions.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   cout << fixed << setprecision( 1 ); 

   cout << "sqrt(" << 900.0 << ") = " << sqrt( 900.0 )
      << "\nsqrt(" << 9.0 << ") = " << sqrt( 9.0 );
   cout << "\nexp(" << 1.0 << ") = " << setprecision( 6 ) 
      << exp( 1.0 ) << "\nexp(" << setprecision( 1 ) << 2.0 
      << ") = " << setprecision( 6 ) << exp( 2.0 );
   cout << "\nlog(" << 2.718282 << ") = " << setprecision( 1 ) 
      << log( 2.718282 ) 
      << "\nlog(" << setprecision( 6 ) << 7.389056 << ") = "
      << setprecision( 1 ) << log( 7.389056 );
   cout << "\nlog10(" << 1.0 << ") = " << log10( 1.0 )
      << "\nlog10(" << 10.0 << ") = " << log10( 10.0 ) 
      << "\nlog10(" << 100.0 << ") = " << log10( 100.0 ) ;
   cout << "\nfabs(" << 13.5 << ") = " << fabs( 13.5 )
      << "\nfabs(" << 0.0 << ") = " << fabs( 0.0 )
      << "\nfabs(" << -13.5 << ") = " << fabs( -13.5 );
   cout << "\nceil(" << 9.2 << ") = " << ceil( 9.2 )
      << "\nceil(" << -9.8 << ") = " << ceil( -9.8 );
   cout << "\nfloor(" << 9.2 << ") = " << floor( 9.2 )
      << "\nfloor(" << -9.8 << ") = " << floor( -9.8 );
   cout << "\npow(" << 2.0 << ", " << 7.0 << ") = " 
      << pow( 2.0, 7.0 ) << "\npow(" << 9.0 << ", " 
      << 0.5 << ") = " << pow( 9.0, 0.5 );
   cout << setprecision(3) << "\nfmod("
      << 13.675 << ", " << 2.333 << ") = " 
      << fmod( 13.675, 2.333 ) << setprecision( 1 ); 
   cout << "\nsin(" << 0.0 << ") = " << sin( 0.0 ); 
   cout << "\ncos(" << 0.0 << ") = " << cos( 0.0 );
   cout << "\ntan(" << 0.0 << ") = " << tan( 0.0 ) << endl;
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
