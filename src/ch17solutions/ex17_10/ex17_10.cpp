// Exercise 17.10 Solution: ex17_10.cpp
#include <iostream> 
#include <fstream>
#include <iomanip> 
#include <string>
#include <cstdlib>
using namespace std;

void printOutput( ofstream &, int, string, string, double );

int main()
{
   // variables hold account information from input files
   int masterAccount;
   int transactionAccount;
   double masterBalance;
   double transactionBalance;
   string masterFirstName;
   string masterLastName;

   // create file streams and open files
   ifstream inOldmaster( "oldmast.dat" );
   ifstream inTransaction( "trans.dat" );
   ofstream outNewmaster( "newmast.dat" );

   // terminate program if input master file cannot be opened
   if ( !inOldmaster ) 
   {
      cerr << "Unable to open oldmast.dat\n";
      exit( 1 );
   } // end if

   // terminate program if input transaction file cannot be opened
   if ( !inTransaction ) 
   {
      cerr << "Unable to open trans.dat\n";
      exit( 1 );
   } // end if

   // terminate program if output master file cannot be opened
   if ( !outNewmaster ) 
   {
      cerr << "Unable to open newmast.dat\n";
      exit( 1 );
   } // end file

   cout << "Processing....\n";

   // get first transaction from input file
   inTransaction >> transactionAccount >> transactionBalance;   

   // continue until end of transaction file is reached
   while ( !inTransaction.eof() ) 
   {
      // get account information from input master file
      inOldmaster >> masterAccount >> masterFirstName >> masterLastName
         >> masterBalance;

      // write master accounts to output master file until first account
      // that made a transaction is reached
      while ( masterAccount < transactionAccount && !inOldmaster.eof() ) 
      {
         printOutput( outNewmaster, masterAccount, masterFirstName,
            masterLastName, masterBalance );
         inOldmaster >> masterAccount >> masterFirstName >> masterLastName
            >> masterBalance;
      } // end inner while

      // if transaction account does not have a matching input file
      // inform user get next transaction information
      if ( masterAccount > transactionAccount ) 
      {
         cout << "Unmatched transaction record for account "
            << transactionAccount << '\n';
         inTransaction >> transactionAccount >> transactionBalance;
      } // end if

      // if transaction account does not have a matching input file
      // inform user get next transaction information
      else if ( masterAccount < transactionAccount ) 
      {
         cout << "Unmatched transaction record for account "
            << transactionAccount << '\n';
         inTransaction >> transactionAccount >> transactionBalance;
      } // end if

      // process all transactions made by a master account holder
      while ( masterAccount == transactionAccount && 
         !inTransaction.eof() )
      {
         masterBalance += transactionBalance;
         inTransaction >> transactionAccount >> transactionBalance;
      } // end inner while

      // display account information
      printOutput( outNewmaster, masterAccount, masterFirstName,
         masterLastName, masterBalance );        
   } // end outer while

   // output remaining accounts to new master file
   while ( !inOldmaster.eof() ) 
   {
      inOldmaster >> masterAccount >> masterFirstName
         >> masterLastName >> masterBalance;
      printOutput( outNewmaster, masterAccount, masterFirstName,
         masterLastName, masterBalance );
   } // end while
} // end main

// function to display account information
void printOutput( ofstream &oRef, int mAccount, string mfName,
   string mlName, double mBalance )
{
   // set output formats and display account information   
   cout << showpoint << fixed;
   oRef << showpoint << fixed;
   oRef << mAccount << ' ' << mfName << ' ' << mlName << ' '
      << setprecision( 2 ) << mBalance << '\n';
   cout << mAccount << ' ' << mfName << ' ' << mlName << ' '
      << setprecision( 2 ) << mBalance << '\n';
   cout << showpoint << fixed;
} // end function printOutput



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
