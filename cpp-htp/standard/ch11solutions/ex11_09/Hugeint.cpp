// Exercise 11.9 Solution: Hugeint.cpp
// HugeInt member-function and friend-function definitions.
#include <iostream>
#include <cctype> // isdigit function prototype
#include "Hugeint.h" // HugeInt class definition
using namespace std;

// default constructor; conversion constructor that converts
// a long integer into a HugeInt object
HugeInt::HugeInt( long value )
{
   // initialize array to zero
   for ( int i = 0; i < digits; i++ )
      integer[ i ] = 0;

   // place digits of argument into array
   for ( int j = digits - 1; value != 0 && j >= 0; j-- )
   {
      integer[ j ] = value % 10;
      value /= 10;
   } // end for
} // end HugeInt default/conversion constructor

// conversion constructor that converts a character string
// representing a large integer into a HugeInt object
HugeInt::HugeInt( const string &number )
{
   // initialize array to zero
   for ( int i = 0; i < digits; i++ )
      integer[ i ] = 0;

   // place digits of argument into array
   int length = number.size();

   for ( int j = digits - length, k = 0; j < digits; j++, k++ )
      if ( isdigit( number[ k ] ) )
         integer[ j ] = number[ k ] - '0';

} // end HugeInt conversion constructor

// get function calculates length of integer
int HugeInt::getLength() const
{
   int i;

   for ( i = 0; i < digits; i++ )
      if ( integer[ i ] != 0 )
         break; // break when first digit is reached

   return digits - i; // length is from first digit (at i) to end of array
} // end function getLength

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+( const HugeInt &op2 ) const
{
   HugeInt temp; // temporary result
   int carry = 0;

   for ( int i = digits - 1; i >= 0; i-- )
   {
      temp.integer[ i ] = integer[ i ] + op2.integer[ i ] + carry;

      // determine whether to carry a 1
      if ( temp.integer[ i ] > 9 )
      {
         temp.integer[ i ] %= 10;  // reduce to 0-9
         carry = 1;
      } // end if
      else // no carry
         carry = 0;
   } // end for

   return temp; // return copy of temporary object
} // end function operator+

// addition operator; HugeInt + int
HugeInt HugeInt::operator+( int op2 ) const
{
   // convert op2 to a HugeInt, then invoke
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 );
} // end function operator+

// addition operator;
// HugeInt + string that represents large integer value
HugeInt HugeInt::operator+( const string &op2 ) const
{
   // convert op2 to a HugeInt, then invoke
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 );
} // end function operator+

// equality operator; HugeInt == HugeInt
bool HugeInt::operator==( const HugeInt &op2 ) const
{
   for ( int i = 0; i < digits; i++ ) // compare each element
      if ( op2.integer[ i ] != integer[ i ] )
         return false; // return false if mismatch found

   return true; // all elements match, return true
} // end function operator==

// inequality operator; HugeInt != HugeInt
bool HugeInt::operator!=( const HugeInt &op2 ) const
{
   return !( *this == op2 ); // return opposite of ==
} // end function operator!=

// less than operator; HugeInt < HugeInt
bool HugeInt::operator<( const HugeInt &op2 ) const
{
   for ( int i = 0; i < digits; i++ ) // compare each element
   {
      if ( integer[ i ] == op2.integer[ i ] )
         continue; // test next element
      else if ( integer[ i ] > op2.integer[ i ] )
         return false; // first element larger
      else
         return true; // first element smaller
   } // end for

   return false; // if reached this point, objects are equal
} // end function operator<

// less than or equal operator; HugeInt <= HugeInt
bool HugeInt::operator<=( const HugeInt &op2 ) const
{
   return !( *this > op2 );
} // end function operator<=

// greater than operator; HugeInt > HugeInt
bool HugeInt::operator>( const HugeInt &op2 ) const
{
   return op2 < *this;
} // end function operator>

// greater than or equal operator; HugeInt >= HugeInt
bool HugeInt::operator>=( const HugeInt &op2 ) const
{
   return !( *this < op2 );
} // end function operator>=

// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; i < HugeInt::digits && num.integer[ i ] == 0; i++ )
      ; // skip leading zeros

   if ( i == HugeInt::digits )
      output << 0;
   else
      for ( ; i < HugeInt::digits; i++ )
         output << num.integer[ i ];

   return output;
} // end function operator<<

// subtraction operator, subtract op2 from (*this)
HugeInt HugeInt::operator-( const HugeInt &op2 ) const
{
   // return if first value is smaller; we are not handling negatives
   if ( op2 > *this )
   {
      cout << "Error: Tried to subtract larger value from smaller value."
         << endl;
      return HugeInt( "0" );
   } // end if

   HugeInt result( "0" ); // final result currently 0

   // used to determine if previous digit had 10 added to it;
   // if true, current digit needs to be reduced by 1
   bool minusOne = false;

   // for each digit in both arrays,
   // subtract digit of smaller int from digit of larger int
   for ( int i = digits - 1; i >= 0; i-- )
   {
      // find digits we will currently be subtracting
      int topValue = this->integer[ i ];
      int bottomValue = op2.integer[ i ];

      // if previous topValue had 10 added to it;
      // subtract one from current topValue
      if ( minusOne )
      {
         if ( topValue == 0 ) // topValue cannot become -1
            // set to 9 but keep minusOne true for next digit
            topValue = 9;
         else
         {
            topValue -= 1; // subtract from top value
            minusOne = false; // minusOne is handled, return to false
         } // end else
      } // end outer if

      if ( topValue >= bottomValue )
         // if topValue larger, perform subtraction and store result
         result.integer[ i ] = topValue - bottomValue;
      else
      {
         topValue += 10; // if bottomValue larger, add 10 to topValue
         minusOne = true; // next digit must be decreased

         // topValue is now larger, perform subtraction and store result
         result.integer[ i ] = topValue - bottomValue;
      } // end else
   } // end for

   return result; // return final result
} // end function operator-

// multiplication operator; multiply op2 with (*this)
HugeInt HugeInt::operator*( const HugeInt &op2 ) const
{
   int carryOver = 0; // carry value when previous digits are multiplied
   HugeInt total( "0" ); // result currently 0

   // find the smaller int
   HugeInt smaller = ( *this < op2 ) ? *this : op2;
   HugeInt larger = ( *this > op2 ) ? *this : op2;

   // determine index of larger's first digit; used to determine
   // when to stop multiplying
   int x;

   for ( x = 0; ( x < digits ) && ( larger.integer[ x ] == 0 ); x++ )
      ;

   int indexOfFirstDigitForLarger = x;

   // for each digit in smaller, multiply by each digit in larger
   for ( int i = digits; i > digits - smaller.getLength(); i-- )
   {
      // currentInt stores result of current digit in
      // smaller multiplied by digits in larger
      HugeInt currentInt( "0" );

      // currentIntFrontHandle used to keep track of
      // index of first digit in currentInt
      int currentIntFrontHandle = i - 1;

      // multiply each digit in larger with the current digit in smaller;
      // go backward from last digit in larger to first digit
      for ( int j = digits; j > digits - larger.getLength(); j-- )
      {
         // perform multiplication;
         // add carryOver from previous multiplications
         int currentResult = carryOver +
            ( larger.integer[ j - 1 ] * smaller.integer[ i - 1 ] );

         // if we have reached the first digit of larger
         if ( j - 1 == indexOfFirstDigitForLarger )
         {
            carryOver = 0; // no more carryOver required

            // store two digits at beginning of currentInt, update handle
            currentInt.integer[ currentIntFrontHandle ] =
               currentResult % 10;
            currentIntFrontHandle -= 1;
            currentInt.integer[ currentIntFrontHandle ] =
               currentResult / 10;
            currentIntFrontHandle -= 1;
         } // end if
         else
         {
            // carryOver is first digit when currentResult > 10
            carryOver = currentResult / 10;

            // store remaining digit in current result; update handle
            currentInt.integer[ currentIntFrontHandle ] =
               currentResult % 10;
            currentIntFrontHandle -= 1;
         } // end else
      } // end inner for

      total = total + currentInt; // add current result to running total
   } // end outer for

   return total; // return product
} // end function operator*

// division operator; divide op2 by (*this)
HugeInt HugeInt::operator/( const HugeInt &op2 ) const
{
   // use copy constructor to create remainderIntegers;
   // remainderIntegers used to add digits to remainders
   HugeInt remainderIntegers( *this );

   // contains portion of (*this)
   HugeInt currentValue( "0" );
   HugeInt result( "0" ); // final result, 0 for now

   // solution will not be longer than original value being divided
   int maxSolutionLength = this->getLength();

   // for each digit in value being divided
   for ( int i = digits - maxSolutionLength; i < digits; i++ )
   {
      // add remainder to end of current value
      currentValue = currentValue * HugeInt( "10" );
      currentValue.integer[ digits - 1 ] = remainderIntegers.integer[ i ];

      HugeInt tempResult( "0" ); // result of currentValue divided by op2

      if ( op2 > currentValue )
         // store result of op2 / currentValue
         result.integer[ i ] = 0;
      else
      {
         int j;

         // op2 / currentValue cannot be greater than 9;
         // use loop to determine what solution is
         for ( j = 1; j <= 10; j++ )
         {
            HugeInt tempProduct = op2 * HugeInt( j );

            // if op2 * HugeInt( j ) is greater than currentValue,
            // then op2 / currentValue is the value of j - 1
            if ( tempProduct > currentValue )
               break;
         } // end for

         result.integer[ i ] = j - 1; // result of op2 / currentValue

         // product used to determine next value that must be divided
         tempResult = op2 * HugeInt( j - 1 );
      } // end else

      // subtract tempResult to get remainder used to continue division
      currentValue = currentValue - tempResult;
   } // end for

   return result;
} // end function operator/


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
