// Ex. 23.5: ex23_05.cpp
#include <cctype>
#include <iostream>
#include <string>
#include <boost/regex.hpp>
using namespace std;

int main()
{
   string sentence, output;

   // get the sentence from the user
   cout << "Please enter a sentence: ";
   getline( cin, sentence );

   // split the sentence into words
   boost::sregex_token_iterator tokens( sentence.begin(), sentence.end(),
      boost::regex( "\\s" ), -1 );
   boost::sregex_token_iterator end;

   // while there are still tokens left
   while ( tokens != end )
   {
      string word = *tokens;
      word[0] = toupper( word[0] ); // make the first letter uppercase
      output += word + " "; // add the word to the output
      ++tokens;
   } // end while

   // display the output string
   cout << output << endl;
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
