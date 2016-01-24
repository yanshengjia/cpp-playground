// Exercise 20.13 Solution: Ex20_13.cpp
// Using a stack to evaluate an expression in postfix notation
#include <iostream> 
#include <cctype>
#include <cmath>
#include "Stack.h"
using namespace std;

// prototype
int evaluatePostfixExpression( char * const );
int calculate( int, int, char );

int main()
{
   char expression[ 100 ];
   char c;
   int answer;
   int i = 0;

   cout << "Enter a postfix expression:\n";

   // get input
   while ( ( c = static_cast< char >( cin.get() ) ) != '\n')

      if ( c != ' ' )
         expression[ i++ ] = c;
         
   expression[ i ] = '\0';
   answer = evaluatePostfixExpression( expression );
   cout << "The value of the expression is: " << answer << endl;
} // end main

// evaluate the postfix notation
int evaluatePostfixExpression( char * const expr )
{
   int i;
   int popVal1;
   int popVal2;
   int pushVal;
   Stack< int > intStack;
   char c;
   
   strcat( expr, ")" );
   
   // until it reaches ")"
   for ( i = 0; ( c = expr[ i ] ) != ')'; i++ )
   {
      if ( isdigit( expr[ i ] ) ) 
      {
         pushVal = c - '0';
         intStack.push( pushVal );
         intStack.print();
      } // end if
      else 
      {
         popVal2 = intStack.pop();
         intStack.print();
         popVal1 = intStack.pop();
         intStack.print();
         pushVal = calculate( popVal1, popVal2, expr[ i ] );
         intStack.push( pushVal );
         intStack.print();
      } // end else
   } // end for
      
   return intStack.pop();
} // end evaluatePostfixExpression

// do the calculation
int calculate( int op1, int op2, char oper )
{
   switch( oper ) 
   {
      case '+':
         return op1 + op2;
      case '-':
         return op1 - op2;
      case '*':
         return op1 * op2;
      case '/':
         return op1 / op2;
      case '^':   // exponentiation
         return static_cast< int >( 
            pow( static_cast< float >( op1 ), op2 ) );
   } // end switch statement

   return 0;
} // end function calculate 

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
