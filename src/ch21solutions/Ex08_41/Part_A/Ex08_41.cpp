// Exercise 8.41 Part A Solution: Ex_08.cpp
#include <iostream> 
#include <iomanip> 
#include <cctype>
using namespace std;

const int SIZE = 80;

int main()
{
   char letters[ 26 ] = {};
   char text[ 3 ][ SIZE ];
   char i; // index variable
   
   cout << "Enter three lines of text:\n";
   
   // make sure there are three lines of text
   for ( i = 0; i <= 2; ++i )
      cin.getline( &text[ i ][ 0 ], SIZE );
      
   // for each line
   for ( i = 0; i <= 2; i++ )
      
      // for each word in the line
      for ( int j = 0; text[ i ][ j ] != '\0'; j++ )
         
         // function isalpha returns true if the element is 
         // an alphabetic character 
         if ( isalpha( text[ i ][ j ] ) )

            // increment the proper location in the letters array
            letters[ tolower( text[ i ][ j ] ) - 'a' ]++; 
   
   cout << "\nTotal letter counts:\n";
   
   // loop through and print the tally for each character
   for ( i = 0; i <= 25; i++ )
      cout << setw( 3 ) << static_cast< char > ( 'a' + i ) << ':' 
         << setw( 3 ) << static_cast< int > ( letters[ i ] ) << endl;
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
