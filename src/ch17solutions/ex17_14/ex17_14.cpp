// Exercise 17.14 Solution: ex17_14.cpp
#include <iostream> 
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
   // assign stream to file and open file
   ofstream outFile( "datasize.dat" );
   
   // terminate program if output file cannot be opened
   if ( !outFile ) 
   {
      cerr << "Unable to open \"datasize.dat\".\n";
      exit( 1 );
   } // end if

   // write size of char, unsigned char,
   // short int, unsigned short int and int to file
   outFile << "Data type" << setw( 24 ) << "Size\nchar" << setw( 21 )
      << sizeof( char ) << "\nunsigned char" << setw( 12 )
      << sizeof( unsigned char ) << "\nshort int" << setw( 16 )
      << sizeof( short int ) << "\nunsigned short int" << setw( 7 )
      << sizeof( unsigned short ) << "\nint" << setw( 22 ) 
      << sizeof( int ) << '\n';

   // write size of unsigned int, long int, unsigned long int
   // float, double and long double to file
   outFile << "unsigned int" << setw( 13 ) << sizeof( unsigned ) 
      << "\nlong int" << setw( 17 ) << sizeof( long )
      << "\nunsigned long int" << setw( 8 ) << sizeof( unsigned long )
      << "\nfloat" << setw( 20 ) << sizeof( float ) 
      << "\ndouble" << setw( 19 ) << sizeof( double ) 
      << "\nlong double" << setw( 14 ) << sizeof( long double ) << endl;
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
