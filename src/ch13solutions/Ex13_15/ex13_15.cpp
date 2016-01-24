// Exercise 13.15 Solution: ex13_15.cpp
// Processing Packages polymorphically.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

int main()
{
   // create vector packages
   vector < Package * > packages( 3 ); 

   // initialize vector with Packages
   packages[ 0 ] = new Package( "Lou Brown", "1 Main St", "Boston", "MA", 
      11111, "Mary Smith", "7 Elm St", "New York", "NY", 22222, 8.5, .5 );
   packages[ 1 ] = new TwoDayPackage( "Lisa Klein", "5 Broadway", 
      "Somerville", "MA", 33333, "Bob George", "21 Pine Rd", "Cambridge", 
      "MA", 44444, 10.5, .65, 2.0 );
   packages[ 2 ] = new OvernightPackage( "Ed Lewis", "2 Oak St", "Boston",
      "MA", 55555, "Don Kelly", "9 Main St", "Denver", "CO", 66666, 
      12.25, .7, .25 );

   double totalShippingCost = 0.0;

   cout << fixed << setprecision( 2 );

   // print each package's information and cost
   for ( size_t i = 0; i < packages.size(); i++ )
   {
      cout << "Package " << i + 1 << "\n\nSender:\n" 
         << packages[ i ]->getSenderName() << '\n' 
         << packages[ i ]->getSenderAddress() << '\n' 
         << packages[ i ]->getSenderCity() << ", " 
         << packages[ i ]->getSenderState() << ' ' 
         << packages[ i ]->getSenderZIP();
      cout << "\n\nRecipient:\n" << packages[ i ]->getRecipientName() 
         << '\n' << packages[ i ]->getRecipientAddress() << '\n' 
         << packages[ i ]->getRecipientCity() << ", " 
         << packages[ i ]->getRecipientState() << ' ' 
         << packages[ i ]->getRecipientZIP();

      double cost = packages[ i ]->calculateCost();
      cout << "\n\nCost: $" << cost << "\n\n";
      totalShippingCost += cost; // add this Package’s cost to total
   } // end for

   cout << "Total shipping cost: $" << totalShippingCost << endl;
} // end main

/**************************************************************************
 * (C) Copyright 1992-2008 by Deitel & Associates, Inc. and               *
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
