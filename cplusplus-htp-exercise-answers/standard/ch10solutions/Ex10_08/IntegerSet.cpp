// Exercise 10.8 Solution: IntegerSet.cpp
// Member-function definitions for class IntegerSet.
#include <iostream> 
#include <iomanip> 
#include "IntegerSet.h" // IntegerSet class definition
using namespace std;

// constructor creates a set from array of integers
IntegerSet::IntegerSet( int array[], int size )
   : set( setSize )
{
   for ( int i = 0; i < size; i++ )
      insertElement( array[ i ] );
} // end IntegerSet constructor

// input a set from the user
void IntegerSet::inputSet()
{
   int number;

   do 
   {
      cout << "Enter an element (-1 to end): ";
      cin >> number;

      if ( validEntry( number ) )
         set[ number ] = true;
      else if ( number != -1 )
         cerr << "Invalid Element\n";
   } while ( number != -1 ); // end do...while

   cout << "Entry complete\n";
} // end function inputSet

// prints the set to the output stream
void IntegerSet::printSet() const
{
   int x = 1;
   bool empty = true; // assume set is empty
   
   cout << '{';

   for ( int i = 0; i < setSize; i++ )
   {
      if ( set[ i ] ) 
      {
         cout << setw( 4 ) << i << ( x % 10 == 0 ? "\n" : "" );
         empty = false; // set is not empty
         x++;
      } // end if
   } // end for

   if ( empty )
      cout << setw( 4 ) << "---"; // display an empty set
		
   cout << setw( 4 ) << "}" << '\n';
} // end function printSet

// returns the union of two sets
IntegerSet IntegerSet::unionOfSets( const IntegerSet &r ) const
{
   IntegerSet temp;

   // if element is in either set, add to temporary set
   for ( int i = 0; i < setSize; i++ )
      temp.set[ i ] = set[ i ] || r.set[ i ];

   return temp;
} // end function unionOfSets

// returns the intersection of two sets
IntegerSet IntegerSet::intersectionOfSets( const IntegerSet &r ) const
{
   IntegerSet temp;

   // if element is in both sets, add to temporary set
   for ( int i = 0; i < setSize; i++ )
      temp.set[ i ] = set[ i ] && r.set[ i ];

   return temp;
} // end function intersectionOfSets

// insert a new integer into this set
void IntegerSet::insertElement( int k )
{
   if ( validEntry( k ) )
      set[ k ] = true;
   else
      cerr << "Invalid insert attempted!\n";
} // end function insertElement

// removes an integer from this set
void IntegerSet::deleteElement( int k )
{
   if ( validEntry( k ) )
      set[ k ] = false;
   else
      cerr << "Invalid delete attempted!\n";
} // end function deleteElement

// determines if two sets are equal
bool IntegerSet::isEqualTo( const IntegerSet &r ) const
{
   for ( int i = 0; i < setSize; i++ )
      if ( set[ i ] != r.set[ i ] )
         return false; // sets are not equal

   return true; // sets are equal
} // end function isEqualTo


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
