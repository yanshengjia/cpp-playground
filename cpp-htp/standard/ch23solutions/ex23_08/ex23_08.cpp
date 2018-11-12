// Ex. 23.8: ex23_08.cpp
#include <iostream>
#include <string>
#include <vector>
#include <boost/regex.hpp>
using namespace std;

void countTags( string, int, vector< int > & );

int main()
{
   vector< int > levels; // vector of levels
   string htmlString = "<p><strong>a</strong><a>b</a></p>"; 
   htmlString += "<strong>c<italic>d<a>e</a></italic></strong>";

   countTags( htmlString, 0, levels );

   // print the number of tags at each level
   for ( int i = 0; i < levels.size(); i++ )
   {
      cout << "\nThere are " << levels[ i ]
         << " tags at level " << i << endl;
   } // end for
} // end main

// count the number of tags in the given html string
void countTags( string html, int level, vector< int > &levels)
{
   boost::smatch match;
   boost::regex expression( "<([^<]*)>(.*?)</\\1>" ); // match a tag

   // if there is at least one match
   if ( boost::regex_search( html, match, expression ) )
   {
      // add a level to levels if it's not already there
      if ( levels.size() < ( level + 1 ) )
         levels.push_back( 0 );
   }

   // find all the tags at this level
   while ( boost::regex_search( html, match, expression ) )
   {
      ++levels[ level ]; // increment number of tags at level
      cout << "Tag " << match[ 1 ] << " is at level " << level << endl;
      countTags( match[ 2 ], level + 1 , levels ); // count the next level
      html = match.suffix(); // advance the string
   } // end while
} // end countTags

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
