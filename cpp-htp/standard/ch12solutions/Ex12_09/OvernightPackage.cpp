// Exercise 12.9 Solution: OvernightPackage.cpp
// Member-function definitions of class OvernightPackage.
#include "OvernightPackage.h" // OvernightPackage class definition

// constructor
OvernightPackage::OvernightPackage( const string &sName, 
   const string &sAddress, const string &sCity, const string &sState, 
   int sZIP, const string &rName, const string &rAddress, 
   const string &rCity, const string &rState, int rZIP, 
   double w, double cost, double fee ) 
   : Package( sName, sAddress, sCity, sState, sZIP, 
      rName, rAddress, rCity, rState, rZIP, w, cost )
{
   setOvernightFeePerOunce( fee ); // validate and store overnight fee
} // end OvernightPackage constructor

// set overnight fee
void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
{
   overnightFeePerOunce = ( overnightFee < 0.0 ) ? 0.0 : overnightFee;
} // end function setOvernightFeePerOunce

// return overnight fee
double OvernightPackage::getOvernightFeePerOunce() const
{
   return overnightFeePerOunce;
} // end function getOvernightFeePerOunce

// calculate shipping cost for package
double OvernightPackage::calculateCost() const
{
   return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
} // end function calculateCost

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
