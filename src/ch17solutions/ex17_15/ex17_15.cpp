// Exercise 17.15 Solution: ex17_15.cpp
// Calculates the phishing score of a message in file phishing.txt
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// function prototypes
void countOccurrences( vector< int > &count );
void displayResults( const vector< int > &count );
string tolower( string text );

// number of phishing words
const int phishingSize = 30;

// list of phishing words
const string phishingWords[ phishingSize ] = {
   "amazon", "official", "bank", "security", "urgent", "alert",
   "important", "information", "ebay", "password", "credit", "verify",
   "confirm", "account", "bill", "immediately", "address", "telephone",
   "ssn", "charity", "check", "secure", "personal", "confidential",
   "atm", "warning", "fraud", "citibank", "irs", "paypal" };

// parallel array of point values
const int phishingPoints[ phishingSize ] = { 2, 2, 1, 1, 1, 1, 1, 2, 3,
   3, 3, 1, 1, 1, 1, 1, 2, 2, 3, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1 };

int main()
{
   vector< int > count( phishingSize );

   // count number of times each word occurs in file
   countOccurrences( count );

   // display results
   displayResults( count );
} // end main

void countOccurrences( vector< int > &wordCount )
{

   // try to open file
   ifstream input( "phishing.txt" );

   // exit if file does not exist
   if ( !input )
   {
      cout << "Could not open phishing.txt\n";
      exit( 1 );
   } // end if

   string word; // current word

   // read file, one word at a time
   while ( input >> word )
   {
      for ( int i = 0; i < phishingSize; i++ )
         if ( phishingWords[ i ] == tolower( word ) )
            ++wordCount[ i ]; // increment occurrence count
   } // end while
} // end function countOccurrences

void displayResults( const vector< int > &count )
{
   int totalPoints = 0;

   // display header
   cout << setw( 20 ) << "Word" << setw( 10 ) <<  "Count"
      << setw( 10 ) << "Points" << endl;

   for ( int i = 0; i < phishingSize; i++ )
   {
      // don't display if word was not found
      if ( count[ i ] == 0 )
         continue;

      int points = count[ i ] * phishingPoints[ i ];
      totalPoints += points;

      // display count
      cout << setw( 20 ) << phishingWords[ i ] << setw( 10 )
         << count[ i ] << setw( 10 ) << points << endl;
   } // end for

   cout << "Total points: " << totalPoints << endl;
} // end function displayResults

// convert string to lowercase
string tolower( string text )
{
   string temp;

   for ( int i = 0; i < text.size(); i++ )
      // tolower converts character to lowercase (see Section 21.9)
      temp += tolower( text[ i ] );

   return temp;
} // end function tolower


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
