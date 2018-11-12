// Exercise 17.8 Solution: ex17_08.cpp
#include <iostream> 
#include <iomanip> 
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
   const int ITEMS = 4; // total number of items

   // account number
   const int accountNumbers[ ITEMS ] = { 100, 300, 500, 700 };

   // names of account holders
   const string names[ ITEMS ] =
      { "Alan Jones", "Mary Smith", "Sam Sharp", "Suzy Green" };

   // balances of account holders
   const double balances[ ITEMS ] = { 348.17, 27.19, 0.00, -14.22 }; 

   // account transactions
   const double transactionAmounts[ ITEMS ] =
      { 27.14, 62.11, 100.56, 82.17 };
   
   // intialize output streams and open output files
   ofstream outOldMaster( "oldMast.dat" );
   ofstream outTransaction( "trans.dat" );

   // terminate program if master output file cannot be opened
   if ( !outOldMaster ) 
   {
      cerr << "Unable to open oldmast.dat\n";
      exit( 1 );
   } // end if
   
   // terminate application if output transactions file cannot be opened
   if ( !outTransaction ) 
   {
      cerr << "Unable to open trans.dat\n";
      exit( 1 );
   } // end if

   // write data to "oldmast.dat"
   cout << fixed << showpoint << "Contents of \"oldmast.dat\":\n";

   // create random master account balances and write to file
   outOldMaster << fixed << showpoint;

   for ( int i = 0; i < ITEMS; ++i ) 
   {
      outOldMaster << accountNumbers[ i ] << ' ' << names[ i ] << ' '
         << setprecision( 2 ) << balances[ i ] << '\n';
      cout << accountNumbers[ i ] << ' ' << names[ i ] << ' ' 
         << setprecision( 2 ) << balances[ i ] << '\n';
   } // end for

   // write data to "trans.dat"
   cout << "\nContents of \"trans.dat\":\n";        
   outTransaction << fixed << showpoint;

   // create random transactions and write to file
   for ( int i = 0; i < ITEMS; ++i ) 
   {
      outTransaction << accountNumbers[ i ] << ' ' << setprecision( 2 )
         << transactionAmounts[ i ] << '\n';
      cout << accountNumbers[ i ] << ' ' << setprecision( 2 )
         << transactionAmounts[ i ] << '\n';
   } // end for
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
