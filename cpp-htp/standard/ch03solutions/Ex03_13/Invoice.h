// Exercise 3.13 Solution: Invoice.h
// Definition of Invoice class that represents an invoice
// for an item sold at a hardware store.
#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
   // constructor initializes the four data members
   Invoice( string, string, int, int );

   // set and get functions for the four data members
   void setPartNumber( string ); // part number
   string getPartNumber(); 
   void setPartDescription( string ); // part description
   string getPartDescription();
   void setQuantity( int ); // quantity
   int getQuantity();
   void setPricePerItem( int ); // price per item
   int getPricePerItem();

   // calculates invoice amount by multiplying quantity x price per item
   int getInvoiceAmount(); 
private:
   string partNumber; // the number of the part being sold
   string partDescription; // description of the part being sold
   int quantity; // how many of the items are being sold
   int pricePerItem; // price per item
}; // end class Invoice


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
