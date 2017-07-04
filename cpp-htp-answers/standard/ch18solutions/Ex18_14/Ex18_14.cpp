// Exercise 18.14 Solution: Ex18_14.cpp
// Program creates a cryptogram from a string.
#include <iostream> 
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;

// prototype
void convertToLower( string::iterator, string::iterator );

int main()
{
   string s;
   string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string::iterator is;
   string::iterator is2;
   string::iterator is3;    

   srand( time( 0 ) ); // random generator

   cout << "Enter a string: ";
   getline( cin, s, '\n' ); // allow white space to be read
   cout << "Original string:      " << s;

   is = s.begin(); // is points to the beginning of string s

   // function convertToLower runs through the end
   convertToLower( is, s.end() ); 

   string s2( s ); // instantiate s2 
   
   is3 = s2.begin(); // is3 points to the beginning of s2

   do 
   {
      is2 = is3; // position location on string s2

      // do not change spaces
      if ( *is == ' ' ) 
      {
         ++is;
         continue;
      } // end if

      int x = rand() % alpha.length(); // pick letter
      char c = alpha.at( x ); // get letter
      alpha.erase( x, 1 ); // remove picked letter

      // iterate along s2 doing replacement
      while ( is2 != s2.end() ) 
      {
         if ( *is2 == *is )
            *is2 = c;

         ++is2;
      } // end while
      
      ++is3; // position to next element
      ++is; // position to next element
   } while ( is != s.end() );

   is3 = s2.begin();
   convertToLower( is3, s2.end() ); // change s2 to lowercase
   cout << "\nCryptogram of string: " << s2 << endl; // output string
} // end main

// convert strings to lowercase characters
void convertToLower( string::iterator i, string::iterator e )
{
   // until the end is reached
   while ( i != e ) 
   {
      *i = tolower( *i );
      ++i;
   } // end while
} // end function convertToLower

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
