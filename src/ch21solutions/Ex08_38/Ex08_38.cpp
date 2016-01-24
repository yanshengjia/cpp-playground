// Exercise 8.38 Solution: Ex08_38.cpp
#include <iostream> 
using namespace std;

// function prototypes
char *stringCopy1( char *, const char * );
char *stringCopy2( char *, const char * );
char *stringNCopy1( char *, const char *, unsigned );
char *stringNCopy2( char *, const char *, unsigned );
char *stringCat1( char *, const char * );
char *stringCat2( char *, const char * );
char *stringNCat1( char *, const char *, unsigned );
char *stringNCat2( char *, const char *, unsigned );

int main()
{
   int n = 4;
   char string1[ 100 ];
   char string2[ 100 ];

   cout << "Enter a string: ";
   cin >> string2;

   // copy string2 into string1 using different functions
   cout << "Copied string returned from stringCopy1 is "
      << stringCopy1( string1, string2 ) 
      << "\nCopied string returned from stringCopy2 is "
      << stringCopy2( string1, string2 );
 
   cout << "\nCopied " << n << " elements returned from stringNCopy1 is "
      << stringNCopy1( string1, string2, n )
      << "\nCopied " << n << " elements returned from stringNCopy2 is "
      << stringNCopy2(string1, string2, n);
   
   cout << "\nConcatenated string returned from stringCat1 is "
      << stringCat1( string1, string2 )
      << "\nConcatenated string returned from stringCat2 is "
      << stringCat2( string1, string2 );
   
   cout << "\nConcatenated string returned from stringNCat1 is "
      << stringNCat1( string1, string2, n )
      << "\nConcatenated string returned from stringNCat2 is "
      << stringNCat2( string1, string2, n ) << endl;
} // end main

// copying string with array subscripting
char *stringCopy1( char *s1, const char *s2 )
{
   // loop
   for ( int sub = 0; s1[ sub ] = s2[ sub ]; sub++ )
      ; // empty body

   return s1;
} // end function stringCopy1

// copying string with pointers and pointer arithmetic
char *stringCopy2( char *s1, const char *s2 )
{
   char *ptr = s1;

   for ( ; *s1 = *s2; s1++, s2++ )
      ; // empty body

   return ptr;
} // end function stringCopy2

// string copy using aray
char *stringNCopy1( char *s1, const char *s2, unsigned n )
{
   unsigned c;

   for ( c = 0; c < n && ( s1[ c ] = s2[ c ] ); c++ )
      ; // empty body

   s1[ c ] = '\0';
   return s1;
} // end function stringNCopy1

// string copy using pointers
char *stringNCopy2( char *s1, const char *s2, unsigned n )
{
   char *ptr = s1;
   
   for ( unsigned c = 0; c < n; c++, s1++, s2++ )
      *s1 = *s2;

   *s1 = '\0';
   return ptr;
} // end function stringNCopy2

// string concatenation using arrays
char *stringCat1( char *s1, const char *s2 )
{
   int x;

   for ( x = 0; s1[ x ] != '\0'; x++ )
      ; // empty body

   for ( int y = 0; s1[ x ] = s2[ y ]; x++, y++ )
      ; // empty body

   return s1;
} // end function stringCat1

// string concatenation using pointers
char *stringCat2( char *s1, const char *s2 )
{
   char *ptr = s1;

   for ( ; *s1 != '\0'; s1++ )
      ; // empty body

   for ( ; *s1 = *s2; s1++, s2++ )
      ; // empty body

   return ptr;
} // end function stringCat2

// another version of string concatenation using arrays
char *stringNCat1( char *s1, const char *s2, unsigned n )
{
   int x;

   for ( x = 0; s1[ x ] != '\0'; x++ )
      ; // empty body

   for ( unsigned y = 0; y < n && ( s1[ x ] = s2[ y ] ); x++, y++ )
      ; // empty body

   s1[ x ] = '\0';
   return s1;
} // end function stringNCat1

// another form of string concatenation using pointers
char *stringNCat2( char *s1, const char *s2, unsigned n )
{
   char *ptr = s1;

   for ( ; *s1 != '\0'; s1++ )
      ; // empty body

   for ( unsigned c = 0 ; c < n && ( *s1 = *s2 ); s1++, s2++ )
      ; // empty body

   *s1 = '\0';
   return ptr;
} // end function stringNCat2

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
