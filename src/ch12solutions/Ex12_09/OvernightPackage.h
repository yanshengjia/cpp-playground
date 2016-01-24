// Exercise 12.9 Solution: OvernightPackage.h
// Definition of derived class OvernightPackage.
#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h" // Package class definition

class OvernightPackage : public Package
{
public:
   OvernightPackage( const string &, const string &, const string &, 
      const string &, int, const string &, const string &, const string &, 
      const string &, int, double, double, double );
   
   void setOvernightFeePerOunce( double ); // set overnight fee
   double getOvernightFeePerOunce() const; // return overnight fee

   double calculateCost() const; // calculate shipping cost for package
private:
   double overnightFeePerOunce; // fee per ounce for overnight delivery
}; // end class OvernightPackage

#endif

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
