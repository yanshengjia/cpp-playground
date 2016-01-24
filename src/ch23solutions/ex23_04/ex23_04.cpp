// Ex. 23.9: ex23_09.cpp
#include <iostream>
#include <string>
#include <boost/regex.hpp>
using namespace std;

string getPigLatin( string );

int main()
{
   string sentence, pigLatin;

   // get the sentence from the user
   cout << "Please enter a sentence: ";
   getline( cin, sentence );

   boost::sregex_token_iterator tokens( sentence.begin(), sentence.end(),
      boost::regex( "\\s" ), -1 );
   boost::sregex_token_iterator end;

   while ( tokens != end )
   {
      pigLatin += getPigLatin( *tokens ) + " ";
      ++tokens;
   } // end while

   cout << pigLatin << endl;
} // end main

// translate a word into Pig Latin
string getPigLatin( string word )
{
   // move the first letter at the end and add "ay"
   word = word.substr( 1, word.size() - 1 ) + word[ 0 ] + "ay";
   return word;
} // end function getPigLatin

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
