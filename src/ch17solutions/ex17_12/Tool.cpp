// Exercise 17.12 Solution: Tool.cpp
// Member function definitions for class Tool.
#include <string>
#include "Tool.h"
using namespace std;

// default Tool constructor
Tool::Tool( int partNumberValue, string toolNameValue, int inStockValue,
   double unitPriceValue )
{
   setPartNumber( partNumberValue );
   setToolName( toolNameValue );
   setInStock( inStockValue );
   setUnitPrice( unitPriceValue );
} // end Tool constructor

// set part-number value
void Tool::setPartNumber( int partNumberValue )
{
   partNumber = partNumberValue;
} // end function setPartNumber

// get part-number value
int Tool::getPartNumber() const
{
   return partNumber;
} // end function getPartNumber

// set tool-name value
void Tool::setToolName( string toolNameString )
{
   // copy at most 30 characters from string to toolName
   int length = toolNameString.size();
   length = ( length < LENGTH ? length : LENGTH - 1 );
   toolNameString.copy( toolName, length );

   // append null-terminating character to end of toolName
   toolName[ length ] = '\0';
} // end function setToolName

// get tool-name value
string Tool::getToolName() const
{
   return toolName;
} // end function getToolName

// set in-stock value
void Tool::setInStock( int inStockValue )
{
   inStock = inStockValue;
} // end function setInStock

// get in-stock value
int Tool::getInStock() const
{
   return inStock;
} // end function getInStock

// set unit-price value
void Tool::setUnitPrice( double unitPriceValue )
{
   unitPrice = unitPriceValue;
} // end function setUnitPrice

// get unit-price value
double Tool::getUnitPrice() const
{
   return unitPrice;
} // end function getUnitPrice



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
