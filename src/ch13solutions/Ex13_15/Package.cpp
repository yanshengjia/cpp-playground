// Exercise 13.15 Solution: Package.cpp
// Member-function definitions of class Package.

#include "Package.h" // Package class definition

// constructor initializes data members
Package::Package( const string &sName, const string &sAddress, 
   const string &sCity, const string &sState, int sZIP, 
   const string &rName, const string &rAddress, const string &rCity, 
   const string &rState, int rZIP, double w, double cost )
   : senderName( sName ), senderAddress( sAddress ), senderCity( sCity ),
     senderState( sState ), senderZIP( sZIP ), recipientName( rName ), 
     recipientAddress( rAddress ), recipientCity( rCity ), 
     recipientState( rState ), recipientZIP( rZIP )
{
   setWeight( w ); // validate and store weight
   setCostPerOunce( cost ); // validate and store cost per ounce
} // end Package constructor

// set sender's name
void Package::setSenderName( const string &name )
{
    senderName = name;
} // end function setSenderName

// return sender's name
string Package::getSenderName() const
{
   return senderName;
} // end function getSenderName

// set sender's address
void Package::setSenderAddress( const string &address )
{
   senderAddress = address;
} // end function setSenderAddress

// return sender's address
string Package::getSenderAddress() const
{
   return senderAddress;
} // end function getSenderAddress

// set sender's city
void Package::setSenderCity( const string &city )
{
   senderCity = city;
} // end function setSenderCity

// return sender's city
string Package::getSenderCity() const
{
   return senderCity;
} // end function getSenderCity

// set sender's state
void Package::setSenderState( const string &state )
{
   senderState = state;
} // end function setSenderState

// return sender's state
string Package::getSenderState() const
{
   return senderState;
} // end function getSenderState

// set sender's ZIP code
void Package::setSenderZIP( int zip )
{
   senderZIP = zip;
} // end function setSenderZIP

// return sender's ZIP code
int Package::getSenderZIP() const
{
   return senderZIP;
} // end function getSenderZIP

// set recipient's name
void Package::setRecipientName( const string &name )
{
    recipientName = name;
} // end function setRecipientName

// return recipient's name
string Package::getRecipientName() const
{
   return recipientName;
} // end function getRecipientName

// set recipient's address
void Package::setRecipientAddress( const string &address )
{
   recipientAddress = address;
} // end function setRecipientAddress

// return recipient's address
string Package::getRecipientAddress() const
{
   return recipientAddress;
} // end function getRecipientAddress

// set recipient's city
void Package::setRecipientCity( const string &city )
{
   recipientCity = city;
} // end function setRecipientCity

// return recipient's city
string Package::getRecipientCity() const
{
   return recipientCity;
} // end function getRecipientCity

// set recipient's state
void Package::setRecipientState( const string &state )
{
   recipientState = state;
} // end function setRecipientState

// return recipient's state
string Package::getRecipientState() const
{
   return recipientState;
} // end function getRecipientState

// set recipient's ZIP code
void Package::setRecipientZIP( int zip )
{
   recipientZIP = zip;
} // end function setRecipientZIP

// return recipient's ZIP code
int Package::getRecipientZIP() const
{
   return recipientZIP;
} // end function getRecipientZIP

// validate and store weight
void Package::setWeight( double w )
{
   weight = ( w < 0.0 ) ? 0.0 : w;
} // end function setWeight

// return weight of package
double Package::getWeight() const
{
   return weight;
} // end function getWeight

// validate and store cost per ounce
void Package::setCostPerOunce( double cost )
{
   costPerOunce = ( cost < 0.0 ) ? 0.0 : cost;
} // end function setCostPerOunce

// return cost per ounce
double Package::getCostPerOunce() const
{
   return costPerOunce;
} // end function getCostPerOunce

// calculate shipping cost for package
double Package::calculateCost() const
{
   return getWeight() * getCostPerOunce();
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
