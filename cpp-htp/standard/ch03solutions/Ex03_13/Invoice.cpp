// Exercise 3.13 Solution: Invoice.cpp
// Member-function definitions for class Invoice.
#include <iostream>
#include "Invoice.h"
using namespace std;

// Invoice constructor initializes the class's four data members
Invoice::Invoice( string number, string description, int count, 
   int price )
{
   setPartNumber( number ); // store partNumber
   setPartDescription( description ); // store partDescription
   setQuantity( count ); // validate and store quantity
   setPricePerItem( price ); // validate and store pricePerItem
} // end Invoice constructor

// set part number
void Invoice::setPartNumber( string number )
{
   partNumber = number; // no validation needed
} // end function setPartNumber

// get part number
string Invoice::getPartNumber()
{
   return partNumber;
} // end function getPartNumber

// set part description
void Invoice::setPartDescription( string description )
{
   partDescription = description; // no validation needed
} // end function setPartDescription

// get part description
string Invoice::getPartDescription()
{
   return partDescription;
} // end function getPartDescription

// set quantity; if not positive, set to 0
void Invoice::setQuantity( int count )
{
   if ( count > 0 ) // if quantity is positive
      quantity = count; // set quantity to count

   if ( count <= 0 ) // if quantity is not positive
   {
      quantity = 0; // set quantity to 0
      cout << "\nquantity cannot be negative. quantity set to 0.\n";
   } // end if
} // end function setQuantity
   
// get quantity
int Invoice::getQuantity()
{
   return quantity;
} // end function getQuantity
   
// set price per item; if not positive, set to 0
void Invoice::setPricePerItem( int price )
{
   if ( price > 0 ) // if price is positive
      pricePerItem = price; // set pricePerItem to price

   if ( price <= 0 ) // if price is not positive
   {
      pricePerItem = 0; // set pricePerItem to 0
      cout << "\npricePerItem cannot be negative. "
         << "pricePerItem set to 0.\n";
   } // end if
} // end function setPricePerItem

// get price per item
int Invoice::getPricePerItem()
{
   return pricePerItem;
} // end function getPricePerItem

// calulates invoice amount by multiplying quantity x price per item
int Invoice::getInvoiceAmount()
{
   return getQuantity() * getPricePerItem();
} // end function getInvoiceAmount



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
