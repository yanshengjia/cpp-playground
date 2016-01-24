// Ex. 23.6: ex23_06.cpp
#include <iostream>
#include <string>
#include <boost/regex.hpp>
using namespace std;

int main()
{
   int digits = 0, words = 0, whitespace = 0;
   string sentence, copy;
   boost::smatch match;

   // get the sentence from the user
   cout << "Please enter a sentence: ";
   getline( cin, sentence );

   // copy the sentence
   copy = sentence;

   // count the number of digits
   while ( boost::regex_search( copy, match, boost::regex( "\\d" ) ) )
   {
      ++digits;
      copy = match.suffix();
   } // end while

   // copy the sentence
   copy = sentence;

   // count the number of word characters
   while ( boost::regex_search( copy, match, boost::regex( "\\w" ) ) )
   {
      ++words;
      copy = match.suffix();
   } // end while

   // copy the sentence
   copy = sentence;

   // count the number of whitespace characters
   while ( boost::regex_search( copy, match, boost::regex( "\\s" ) ) )
   {
      ++whitespace;
      copy = match.suffix();
   } // end while

   // display the results
   cout << "\nThere are " << digits << " digits, " << words 
      << " word characters and " << whitespace
      << " whitespace characters." << endl;
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
