// Exercise 22.12 Solution: Ex22_12.cpp
#include <iostream> 
#include <vector> // vector class-template definition
using namespace std;

// function template palindrome definition
template < typename X >
bool palindrome( const vector< X > &vec )
{
   typename vector< X >::const_reverse_iterator r = vec.rbegin();
   typename vector< X >::const_iterator i = vec.begin();

   while ( r != vec.rend() && i != vec.end() )  
   {
      if ( *r != *i ) // values are not equal
         return false;

      ++r;
      ++i;
   } // end while 

   return true; // the vector is a palindrome
} // end function palindrome

// function template printVector definition
template < typename Y >
void printVector( const vector< Y > &vec )
{
   typename vector< Y >::const_iterator i;

   for ( i = vec.begin(); i != vec.end(); ++i )
      cout << *i << ' ';
} // end function palindrome

int main()
{
   vector< int > iv;
   vector< char > ic;
   int x = 0;

   for ( int i = 75; i >= 65; i-- )
   {
      iv.push_back( i );       
      ic.push_back( static_cast< char > ( i + x ) );

      if ( i <= 70 ) 
         x += 2;
   } // end for
   
   printVector( iv );
   cout << ( palindrome( iv ) ? " is " : " is not " ) << "a palindrome\n";

   printVector( ic );
   cout << ( palindrome( ic ) ? " is " : " is not " ) << "a palindrome\n";
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
