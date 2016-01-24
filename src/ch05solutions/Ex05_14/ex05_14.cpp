// Exercise 5.14 Solution: ex05_14.cpp
// Calculate sales, based on an product number and quantity sold
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std; 

int main()
{
   double product1 = 0; // amount sold of first product
   double product2 = 0; // amount sold of second product
   double product3 = 0; // amount sold of third product
   double product4 = 0; // amount sold of fourth product
   double product5 = 0; // amount sold of fifth product

   int productId = 1; // current product id number
   int quantity; // quantity of current product sold

   // set floating-point number format
   cout << fixed << setprecision( 2 );

   // ask user for product number until flag value entered
   while ( productId != -1 )
   {
      // determine the product chosen
      cout << "Enter product number (1-5) (-1 to stop): ";
      cin >> productId;

      // verify product id
      if ( productId >= 1 && productId <= 5 )
      {
         // determine the number sold of the item
         cout << "Enter quantity sold: ";
         cin >> quantity;

         // increment the total for the item by the
         // price times the quantity sold
         switch ( productId )
         {
            case 1:
               product1 += quantity * 2.98;
               break;

            case 2:
               product2 += quantity * 4.50;
               break;

            case 3:
               product3 += quantity * 9.98;
               break;

            case 4:
               product4 += quantity * 4.49;
               break;

            case 5:
               product5 += quantity * 6.87;
               break;
         } // end switch
      } // end if
      else if ( productId != -1 )
         cout <<
            "Product number must be between 1 and 5 or -1 to stop" ;
   } // end while 

   // print summary
   cout << endl;
   cout << "Product 1: $" << product1 << endl;
   cout << "Product 2: $" << product2 << endl;
   cout << "Product 3: $" << product3 << endl;
   cout << "Product 4: $" << product4 << endl;
   cout << "Product 5: $" << product5 << endl;
   cout << "total: $" 
      << product1 + product2 + product3 + product4 + product5 << endl;
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
 *************************************************************************/
