// Exercise 15.15 Solution: Point.cpp
// Member function definition of class Point.
#include <iostream> 
#include "Point.h"
using namespace std;

// overloaded output (<<) operator
ostream& operator<<( ostream& out, const Point& p )
{
   out << "(" << p.xCoordinate << ", " << p.yCoordinate << ")\n";
   return out; // return ostream reference
} // end overloaded output (<<) operator

// overloaded input (>>) operator
istream& operator>>( istream& in, Point& p )
{
   // validate first character entered and ignore if valid
   if ( in.peek() != '(' )
      in.clear( ios::failbit ); // set failbit if invalid
   else
   {
      in.ignore(); // skip (
      in >> p.xCoordinate; // next character is x-coordinate

      // validate third character and skip if valid
      if ( in.peek() != ',' )
         in.clear( ios::failbit ); // set failbit if invalid
      else 
      {
         in.ignore(); // skip ,

         // validate fourth character and skip if valid
         if ( in.peek() != ' ' )
            in.clear( ios::failbit ); // set failbit if invalid
         else
         {
            in.ignore(); // skip space
            in >> p.yCoordinate; // next character is y-coordinate

            // validate last character and skip if valid
            if ( in.peek() != ')' )
               in.clear( ios::failbit ); // set failbit if invalid
            else
               in.ignore(); // skip )
         } // end else
      } // end else
   } // end else

   return in; // return istream reference
} // end overloaded input (>>) operator

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
