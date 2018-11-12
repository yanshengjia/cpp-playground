// Exercise 17.13 Solution: ex17_13.cpp
#include <iostream> 
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void wordGenerator( const int * const );

int main()
{
   int phoneNumber[ 7 ] = { 0 }; // holds phone number

   // prompt user to enter phone number
   cout << "Enter a phone number (digits 2 through 9) "
      << "in the form: xxx-xxxx\n";

   // loop until we've read 7 valid values;
   // ignore everything not between 2 and 9
   for ( int v = 0; v < 7; )
   {
      int i = cin.get();

      // test if i is between 2 and 9
      if ( i >= '2' && i <= '9' )
         phoneNumber[ v++ ] = i - '0';
   } // end for
  
   wordGenerator( phoneNumber ); // form words from phone number
} // end main

// function to form words based on phone number
void wordGenerator( const int * const n )
{
   // set output stream and open output file
   ofstream outFile( "phone.dat" ); 

   // letters corresponding to each number
   const string phoneLetters[ 10 ] = { "", "", "ABC", "DEF", "GHI",
      "JKL", "MNO", "PRS", "TUV", "WXY" };
   
   // terminate if file could not be opened
   if ( !outFile ) 
   {
      cerr << "\"phone.dat\" could not be opened.\n";
      exit( 1 );
   } // end if

   int count = 0; // number of words found

   // output all possible combinations
   for ( int i1 = 0; i1 <= 2; i1++ )
   {
      for ( int i2 = 0; i2 <= 2; i2++ )
      {
         for ( int i3 = 0; i3 <= 2; i3++ )
         {
            for ( int i4 = 0; i4 <= 2; i4++ )
            {
               for ( int i5 = 0; i5 <= 2; i5++ )
               {
                  for ( int i6 = 0; i6 <= 2; i6++ )
                  {
                     for ( int i7 = 0; i7 <= 2; i7++ ) 
                     {
                        outFile << phoneLetters[ n[ 0 ] ][ i1 ]
                           << phoneLetters[ n[ 1 ] ][ i2 ]
                           << phoneLetters[ n[ 2 ] ][ i3 ]
                           << phoneLetters[ n[ 3 ] ][ i4 ]
                           << phoneLetters[ n[ 4 ] ][ i5 ]
                           << phoneLetters[ n[ 5 ] ][ i6 ]
                           << phoneLetters[ n[ 6 ] ][ i7 ] << ' ';

                        if ( ++count % 9 == 0 ) // form rows
                           outFile << '\n';
                     } // end for
                  } // end for
               } // end for
            } // end for
         } // end for
      } // end for
   } // end for

   // output phone number
   outFile << "\nPhone number is ";

   for ( int i = 0; i < 7; i++ ) 
   {
      if ( i == 3 )
         outFile << '-';

      outFile << n[ i ];
   } // end for
} // end function wordGenerator



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
