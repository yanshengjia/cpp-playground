// Exercise 20.12 Solution: Ex20_12.cpp
// Infix to postfix conversion
#include <iostream> 
#include <cctype>
#include "Stack.h"
using namespace std;

// function prototype
void convertToPostfix( char * const, char * const );
bool isOperator( char );
bool precedence( char, char );

int main()
{
   const int MAXSIZE = 100;
   char c;
   char inFix[ MAXSIZE ];
   char postFix[ MAXSIZE ];
   int pos = 0;

   cout << "Enter the infix expression.\n";

   // get input
   while ( ( c = static_cast< char >( cin.get() ) ) != '\n' )

      if ( c != ' ' )
         inFix[ pos++ ] = c;

   inFix[ pos ] = '\0';

   cout << "The original infix expression is:\n" << inFix << '\n';

   // change from infix notation into postfix notation
   convertToPostfix( inFix, postFix );

   cout << "The expression in postfix notation is:\n" << postFix << endl;
} // end main    

// take out the infix and change it into postfix
void convertToPostfix( char * const infix, char * const postfix )
{
   Stack< char > charStack;
   int infixCount;
   int postfixCount;
   bool higher;
   char popValue;
   char leftParen = '(';

   // push a left paren onto the stack and add a right paren to infix
   charStack.push( leftParen );
   charStack.print();
   strcat( infix, ")" );

   // convert the infix expression to postfix
   for ( infixCount = 0, postfixCount = 0; charStack.stackTop(); 
         infixCount++ ) 
   {
      if ( isdigit( infix[ infixCount ] ) )
         postfix[ postfixCount++ ] = infix[ infixCount ];
      else if ( infix[ infixCount ] == '(' ) 
      {
         charStack.push( leftParen );
         charStack.print();
      } // end else if
      else if ( isOperator( infix[ infixCount ] ) ) 
      {
         higher = true; // used to store value of precedence test

         while ( higher ) 
         {
            if ( isOperator( charStack.stackTop() ) )
            {
               if ( precedence( charStack.stackTop(), 
                  infix[ infixCount ] ) ) 
               {
                  postfix[ postfixCount++ ] = charStack.pop();
                  charStack.print();
               } // end if
               else 
                  higher = false;
            } // end if
            else
               higher = false;
         } // end while

         charStack.push( infix[ infixCount ] );
         charStack.print();
      } // end else if
      else if ( infix[ infixCount ] == ')' ) 
      {
         while ( ( popValue = charStack.pop() ) != '(' ) 
         {
            charStack.print();
            postfix[ postfixCount++ ] = popValue;
         } // end while

         charStack.print();
      } // end else if
   } // end for

   postfix[ postfixCount ] = '\0';
} // end function convertToPostfix

// check if c is an operator
bool isOperator( char c )
{
   if ( c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )
      return true;
   else
      return false;
} // end function isOperator

// ensure proper order of operations
bool precedence( char operator1, char operator2 )
{
   if ( operator1 == '^' )
      return true;
   else if ( operator2 == '^' )
      return false;
   else if ( operator1 == '*' || operator1 == '/' )
      return true;
   else if ( operator1 == '+' || operator1 == '-' )
   {
      if ( operator2 == '*' || operator2 == '/' )
         return false;
      else
         return true;
   } // end else if

   return false;
} // end function precedence

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
