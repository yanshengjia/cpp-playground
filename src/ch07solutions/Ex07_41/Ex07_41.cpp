// Exercise 7.38 Solution: ex07_38.cpp
// Analyze polling data on various issues.
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// constants
const int topicCount = 5;
const int maxRating = 10;
const string topics[ topicCount ] =
   { "global warming", "the economy", "war", "health care", "education" };

void pollUser( int responses[][ maxRating ] ); // function prototype
void displayResults( int responses[][ maxRating ] ); // function prototype
double calculateAverage( int votes[] ); // function prototype
void displayHighest( int responses[][ maxRating ] ); // function prototype
void displayLowest( int responses[][ maxRating ] ); // function prototype
int countPoints( int votes[] ); // function prototype

int main()
{
   // empty initialization list initializes array to zero
   int responses[ topicCount ][ maxRating ] = {};
   int choice = 1; // sentinel to decide when to exit loop
   
   while ( choice != 0 )
   {
      cout << endl; // add extra blank line
      pollUser( responses );

      // see if we should stop getting user input
      cout << "Enter more data? (1=yes, 0=no): ";
      cin >> choice;
   } // end while

   displayResults( responses );
} // end main

// get ratings on topics from one user
void pollUser( int responses[][ maxRating ] )
{
   for ( int i = 0; i < topicCount; ++i )
   {
      cout << "On a scale of 1-" << maxRating << ", how important is "
         << topics[ i ] << "?\n"; // ask question
      int rating; // rating user gave for this

      do
      {
         cout << "> "; // display prompt
         cin >> rating; // read rating
      } // end do
      while ( rating < 1 || rating > maxRating );

      ++responses[ i ][ rating - 1 ]; // store rating
   } // end for
} // end method pollUser

// display polling results in tabular format
void displayResults( int responses[][ maxRating ] )
{
   // display table header
   cout << "\n" << setw( 15 ) << left << "Topic";

   for ( int i = 1; i <= maxRating; ++i )
      cout << setw( 4 ) <<  i;

   cout << setw( 10 ) << "Average" << endl;

   // display rating counts and averages for each topic
   for ( int i = 0; i < topicCount; ++i )
   {
      cout << setw( 15 ) << left << topics[ i ]; // display topic

      // display number of times topic was given this score
      for ( int j = 0; j < maxRating; ++j )
         cout << setw( 4 ) << responses[ i ][ j ];

      // display average rating for this topic
      cout << setprecision( 1 ) << fixed << setw( 10 )
         << calculateAverage( responses[ i ] ) << endl;
   } // end for

   cout << endl; // add blank line
   displayHighest( responses ); // display highest-rated issue
   displayLowest( responses ); // display lowest-rated issue
} // end method displayResults

// calculate average number of points
double calculateAverage( int votes[] )
{
   int count = 0; // total number of votes

   for ( int i = 0; i < maxRating; ++i )
      count += votes[ i ]; // add number of responses

   return ( double ) countPoints( votes ) / count; // return average
} // end method calculateAverage

// display topic with most points
void displayHighest( int responses[][ maxRating ] )
{
   int max = countPoints( responses[ 0 ] ); // maximum number of points
   int maxIndex = 0; // index of issue with maximum number of points
   
   for ( int i = 1; i < topicCount; ++i )
   {
      if ( countPoints( responses[ i ] ) > max )
      {
         // larger point count found, update maximum value and index
         max = countPoints( responses[ i ] );
         maxIndex = i;
      } // end if
   } // end for

   cout << "Highest points: " << topics[ maxIndex ]
      << " (" << max << ")\n";
} // end method displayHighest

// display topic with fewest points
void displayLowest( int responses[][ maxRating ] )
{
   int min = countPoints( responses[ 0 ] ); // minimum number of points
   int minIndex = 0; // index of issue with minimum number of points
   
   for ( int i = 1; i < topicCount; ++i )
   {
      if ( countPoints( responses[ i ] ) < min )
      {
         // smaller point count found, update minimum value and index
         min = countPoints( responses[ i ] );
         minIndex = i;
      } // end if
   } // end for

   cout << "Lowest points: " << topics[ minIndex ]
      << " (" << min << ")\n";
} // end method displayLowest

// calculate total number of points for a given topic
int countPoints( int votes[] )
{
   int sum = 0; // total number of votes

   for ( int i = 0; i < maxRating; ++i )
      sum += votes[ i ] * ( i + 1 ); // add weighted count

   return sum;
} // end method countPoints


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
