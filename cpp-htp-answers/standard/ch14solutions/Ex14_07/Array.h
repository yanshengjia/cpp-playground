// Exercise 14.7 Solution: Array.h
// Class template Array definition.
#ifndef ARRAY1_H
#define ARRAY1_H

#include <iostream> 
using namespace std;

template < typename elementType, int numberOfElements >
class Array 
{
public:
   Array(); // default constructor
   ~Array(); // destructor
   int getSize() const; // return size
   bool operator==( const Array & ) const; // compare equal
   bool operator!=( const Array & ) const; // compare !equal
   elementType &operator[]( int ); // subscript operator
   static int getArrayCount(); // return count of arrays instantiated
   void inputArray(); // input the array elements
   void outputArray() const; // output the array elements
private:
   elementType elements[ numberOfElements ]; // array of elements 
   static int arrayCount; // # of Arrays instantiated
}; // end class Array

// define static data member at file scope
template < typename elementType, int numberOfElements >
int Array< elementType, numberOfElements >::arrayCount = 0; // no objects

// default constructor for class Array
template < typename elementType, int numberOfElements >
Array< elementType, numberOfElements >::Array()
{
   arrayCount++; // count one more object

   // initialize array
   for ( int i = 0; i < numberOfElements; i++ )
      elements[ i ] = elementType();                
} // end Array constructor

// destructor for class Array
template < typename elementType, int numberOfElements >
Array< elementType, numberOfElements >::~Array() 
{
   arrayCount--;
} // end Array destructor

// get the size of the array
template < typename elementType, int numberOfElements >
int Array< elementType, numberOfElements >::getSize() const 
{
   return numberOfElements;
} // end function getSize

// determine if two arrays are equal and return true or false
template < class elementType, int numberOfElements >
bool Array< elementType, numberOfElements >::
   operator==( const Array &right ) const
{
   // return false if arrays not equal
   for ( int i = 0; i < numberOfElements; i++ )
   {
      if ( elements[ i ] != right.elements[ i ] )
         return false;
   } // end for

   return true; // arrays are equal
} // end overloaded == operator

// determine if two arrays are not equal and return true or false
template < typename elementType, int numberOfElements >
bool Array< elementType, numberOfElements >::
   operator!=( const Array &right ) const
{
   // return false if arrays not equal
   for ( int i = 0; i < numberOfElements; i++ )
   {
      if ( elements[ i ] != right.elements[ i ] )
         return true; 
   } // end for

   return false; // arrays are equal
} // end overloaded != operator

// overloaded subscript operator
template < typename elementType, int numberOfElements >
elementType &Array< elementType, numberOfElements >:: 
   operator[]( int subscript )
{
   // check for subscript
   assert( 0 <= subscript && subscript < numberOfElements ); 
   return elements[ subscript ]; // reference return creates lvalue
} // end overloaded subscript operator

// return the number of Array objects instantiated
template < typename elementType, int numberOfElements >
int Array< elementType, numberOfElements >::getArrayCount() 
{
   return arrayCount; 
} // end function getArrayCount

// input values for entire array.
template < typename elementType, int numberOfElements >
void Array< elementType, numberOfElements >::inputArray()
{
   // get values of array from user
   for ( int i = 0; i < numberOfElements; i++ )
      cin >> elements[ i ];
} // end function inputArray

// Output the array values
template < typename elementType, int numberOfElements >
void Array< elementType, numberOfElements >::outputArray() const
{
   int i;

   // output array
   for ( i = 0; i < numberOfElements; i++ ) 
   {
      cout << elements[ i ] << ' ';

      // form rows for output
      if ( ( i + 1 ) % 10 == 0 )
         cout << '\n';
   } // end for

   if ( i % 10 != 0 )
      cout << '\n';
} // end function outputArray

#endif


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
