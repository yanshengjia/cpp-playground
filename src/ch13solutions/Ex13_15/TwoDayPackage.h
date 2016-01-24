// Exercise 13.15 Solution: TwoDayPackage.h
// Definition of derived class TwoDayPackage.
#ifndef TWODAY_H
#define TWODAY_H

#include "Package.h" // Package class definition

class TwoDayPackage : public Package
{
public:
   TwoDayPackage( const string &, const string &, const string &, 
      const string &, int, const string &, const string &, const string &, 
      const string &, int, double, double, double );

   void setFlatFee( double ); // set flat fee for two-day-delivery service
   double getFlatFee() const; // return flat fee

   virtual double calculateCost() const; // calculate shipping cost 
private:
   double flatFee; // flat fee for two-day-delivery service
}; // end class TwoDayPackage

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
