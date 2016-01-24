// Exercise 3.13 Solution: ex03_13.cpp
// Create and manipulate an Invoice object.
#include <iostream>
#include "Invoice.h"
using namespace std;

// function main begins program execution
int main()
{
   // create an Invoice object
   Invoice invoice( "12345", "Hammer", 100, 5 ); 

   // display the invoice data members and calculate the amount
   cout << "Part number: " << invoice.getPartNumber() << endl;
   cout << "Part description: " << invoice.getPartDescription() << endl;
   cout << "Quantity: " << invoice.getQuantity() << endl;
   cout << "Price per item: $" << invoice.getPricePerItem() << endl;
   cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

   // modify the invoice data members
   invoice.setPartNumber( "123456" );
   invoice.setPartDescription( "Saw" );
   invoice.setQuantity( -5 ); // negative quantity, so quantity set to 0 
   invoice.setPricePerItem( 10 );
   cout << "\nInvoice data members modified.\n\n";

   // display the modified invoice data members and calculate new amount
   cout << "Part number: " << invoice.getPartNumber() << endl;
   cout << "Part description: " << invoice.getPartDescription() << endl;
   cout << "Quantity: " << invoice.getQuantity() << endl;
   cout << "Price per item: $" << invoice.getPricePerItem() << endl;
   cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;
} // end main




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
