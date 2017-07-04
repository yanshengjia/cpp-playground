// Exercise 17.12 Solution: Tool.h
// Class Tool definition for hardware store program.
#ifndef TOOL_H
#define TOOL_H

#include <string>
using namespace std;

class Tool
{
public:
   static const int LENGTH = 30; // length of tool name

   // default Tool constructor
   Tool( int = -1, string = "", int = 0, double = 0.0 );

   // accessor functions for partNumber
   void setPartNumber( int );
   int getPartNumber() const;

   // accessor functions for toolName
   void setToolName( string );
   string getToolName() const;

   // accessor functions for inStock
   void setInStock( int );
   int getInStock() const;

   // accessor functions for unitPrice
   void setUnitPrice( double );
   double getUnitPrice() const;
private:
   int partNumber; // part id number
   char toolName[ LENGTH ]; // tool name
   int inStock; // number in stock
   double unitPrice; // price per unit
}; // end class Tool

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
