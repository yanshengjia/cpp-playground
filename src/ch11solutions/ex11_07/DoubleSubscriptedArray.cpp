// Exercise 11.7 Solution: DoubleSubscriptedArray.cpp
// DoubleSubscriptedArray class member- and friend-function definitions.
#include <iostream>
#include <iomanip>
#include <cstdlib> // exit function prototype
#include "DoubleSubscriptedArray.h" // DoubleSubscriptedArray definition
using namespace std;

// default constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(
   int rowSizeEntered, int columnSizeEntered )
{
   // validate row and column size
   rowSize = ( rowSizeEntered > 0 ? rowSizeEntered : 3 );
   columnSize = ( columnSizeEntered > 0 ? columnSizeEntered : 3 );

   ptr = new int[ rowSize * columnSize ]; // create space for array

   for ( int loop = 0; loop < rowSize * columnSize; loop++ )
      ptr[ loop ] = 0; // set pointer-based array element
} // end DoubleSubscriptedArray default constructor

// copy constructor for class DoubleSubscriptedArray;
// must receive a reference to prevent infinite recursion
DoubleSubscriptedArray::DoubleSubscriptedArray(
   const DoubleSubscriptedArray &arrayToCopy )
   : rowSize( arrayToCopy.rowSize ), columnSize( arrayToCopy.columnSize )
{
   ptr = new int[ rowSize * columnSize ]; // create space for array

   for ( int loop = 0; loop < rowSize * columnSize; loop++ )
      ptr[ loop ] = arrayToCopy.ptr[ loop ]; // copy into object
} // end DoubleSubscriptedArray copy constructor

// destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
   delete [] ptr; // release pointer-based array space
} // end destructor

// return number of rows of DoubleSubscriptedArray
int DoubleSubscriptedArray::getRowSize() const
{
   return rowSize; // number of rows in DoubleSubscriptedArray
} // end function getRowSize

// return number of columns of DoubleSubscriptedArray
int DoubleSubscriptedArray::getColumnSize() const
{
   return columnSize; // number of columns in DoubleSubscriptedArray
} // end function getColumnSize

// overloaded assignment operator;
// const return avoids: ( a1 = a2 ) = a3
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(
   const DoubleSubscriptedArray &right )
{
   if ( &right != this ) // avoid self-assignment
   {
      // for arrays of different sizes, deallocate original
      // left-side array, then allocate new left-side array
      if ( rowSize * columnSize != right.rowSize * right.columnSize )
      {
         delete [] ptr; // release space
         rowSize = right.rowSize; // resize this object
         columnSize = right.columnSize;
         ptr = new int[ rowSize * columnSize ]; // create space for copy
      } // end inner if

      for ( int loop = 0; loop < rowSize * columnSize; loop++ )
         ptr[ loop ] = right.ptr[ loop ]; // copy into object
   } // end outer if

   return *this; // enables x = y = z, for example
} // end function operator=

// determine if two DoubleSubscriptedArrays are equal and
// return true, otherwise return false
bool DoubleSubscriptedArray::operator==(
   const DoubleSubscriptedArray &right ) const
{
   if ( rowSize * columnSize != right.rowSize * right.columnSize )
      return false; // arrays of different number of elements

   for ( int loop = 0; loop < rowSize * columnSize; loop++ )
      if ( ptr[ loop ] != right.ptr[ loop ] )
         return false; // DoubleSubscriptedArray contents are not equal

   return true; // DoubleSubscriptedArrays are equal
} // end function operator==

// overloaded subscript operator for non-const DoubleSubscriptedArrays;
// reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()(
   int rowSubscript, int columnSubscript )
{
   // check for subscript out-of-range error
   if ( ( rowSubscript < 0 || rowSubscript >= rowSize ) ||
      ( columnSubscript < 0 || columnSubscript >= columnSize ) )
   {
      cerr << "\nError: One or both subscripts out of range" << endl;
      exit( 1 ); // terminate program; one or both subscripts out of range
   } // end if

   // reference return
   return ptr[ ( rowSubscript * columnSize ) + columnSubscript ];
} // end function operator()

// overloaded subscript operator for const DoubleSubscriptedArrays
// const reference return creates an rvalue
int DoubleSubscriptedArray::operator()(
   int rowSubscript, int columnSubscript ) const
{
   // check for subscript out-of-range error
   if ( ( rowSubscript < 0 || rowSubscript >= rowSize ) ||
      ( columnSubscript < 0 || columnSubscript >= columnSize ) )
   {
      cerr << "\nError: One or both subscripts out of range" << endl;
      exit( 1 ); // terminate program; one or both subscripts out of range
   } // end if

   // returns copy of this element
   return ptr[ ( rowSubscript * columnSize ) + columnSubscript ];
} // end function operator()

// overloaded input operator for class DoubleSubscriptedArray;
// inputs values for entire DoubleSubscriptedArray
istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
   for ( int loop = 0; loop < a.rowSize * a.columnSize; loop++ )
      input >> a.ptr[ loop ];

   return input; // enables cin >> x >> y;
} // end function operator>>

// overloaded output operator for class DoubleSubscriptedArray
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
   for ( int loop = 0; loop < a.rowSize; loop++ )
   {
      for ( int loop2 = 0; loop2 < a.columnSize; loop2++ )
         output << a.ptr[ ( loop * a.columnSize ) + loop2 ] << ' ';

      output << endl;
   } // end for

   return output; // enables cout << x << y;
} // end function operator<<

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
