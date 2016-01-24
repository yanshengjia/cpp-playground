// Exercise 8.39 Solution: Ex08_39.cpp
#include <iostream> 
using namespace std;

int stringCompare1( const char *, const char * );
int stringCompare2( const char *, const char * );
int stringNCompare1( const char *, const char *, unsigned );
int stringNCompare2( const char *, const char *, unsigned );

int main()
{
   char string1[ 100 ], string2[ 100 ];
   unsigned n = 3; // number of characters to be compared

   cout << "Enter two strings: ";
   cin >> string1 >> string2;

   cout << "The value returned from stringCompare1(\"" << string1
      << "\", \"" << string2 << "\") is "
      << stringCompare1(string1, string2) 
      << "\nThe value returned from stringCompare2(\"" << string1
      << "\", \"" << string2 << "\") is "
      << stringCompare2(string1, string2) << '\n';

   cout << "\nThe value returned from stringNCompare1(\"" << string1
      << "\", \"" << string2 << "\", " << n << ") is "
      << stringNCompare1(string1, string2, n) 
      << "\nThe value returned from stringNCompare2(\"" << string1
      << "\", \"" << string2 << "\", " << n << ") is "
      << stringNCompare2( string1, string2, n ) << endl;
} // end main

int stringCompare1( const char *s1, const char *s2 )
{
   int sub;

   // array subscript notation
   for ( sub = 0; s1[ sub ] == s2[ sub ]; sub++ )
      ; // empty statement

   sub--;

   if ( s1[ sub ] == '\0' && s2[ sub ] == '\0' )
      return 0;
   else if ( s1[ sub] < s2[ sub ] )
      return -1;
   else
      return 1; 
} // end function stringCompare1

int stringCompare2( const char *s1, const char *s2 )
{
   // pointer notation
   for ( ; *s1 == *s2; s1++, s2++ )
      ; // empty statement

   s1--;
   s2--;

   if ( *s1 == '\0' && *s2 == '\0' )
      return 0;
   else if ( *s1 < *s2 )
      return -1;
   else
      return 1;
} // end function stringCompare2

int stringNCompare1( const char *s1, const char *s2, unsigned n )
{
   unsigned sub;

   // array subscript notation
   for ( sub = 0; sub < n && ( s1[ sub ] == s2[ sub ] ); sub++ )
      ; // empty body

   sub--;

   if ( s1[ sub ] == s2[ sub ] ) 
      return 0;
   else if ( s1[ sub ] < s2[ sub ] )
      return -1;
   else
      return 1;
} // end function stringNCompare1

int stringNCompare2( const char *s1, const char *s2, unsigned n )
{
   // pointer notation
   for ( unsigned c = 0; c < n && (*s1 == *s2); c++, s1++, s2++ )
      ; // empty statement

   s1--;
   s2--;

   if ( *s1 == *s2 )
      return 0;
   else if ( *s1 < *s2 )
      return -1;
   else
      return 1;
} // end function stringNCompare2

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
