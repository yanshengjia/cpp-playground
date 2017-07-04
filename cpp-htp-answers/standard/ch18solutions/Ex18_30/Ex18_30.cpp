// Exercise 18.30 Solution: Ex18_30.cpp
// Translates a message from SMS shorthand to English.
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// SMS abbreviations and translations
const int smsSize = 20;
const string smsWords[ smsSize ] = {
   "imo", "idk", "jk", "lol", "np", "k", "gmab", "fyi",
   "sry", "plz", "btw", "brb", "bbl", "g2g", "nvm",
   "ttyl", "bff", "def", "nm", "bc" };
const string englishWords[ smsSize ] = {
   "in my opinion", "I don't know", "just kidding", "laugh out loud",
   "no problem", "ok", "give me a break", "for your information",
   "sorry", "please", "by the way", "be right back", "be back later",
   "got to go", "nevermind", "talk to you later",
   "best friend forever", "definitely", "not much", "because" };

// convert string to lowercase
string tolower( string text )
{
   string temp;

   for ( int i = 0; i < text.size(); i++ )
      // tolower converts character to lowercase (see Section 21.9)
      temp += tolower( text[ i ] );

   return temp;
} // end function tolower

// translate a single word from SMS to English
string translateWord( string word )
{
   for ( int i = 0; i < smsSize; i++ )
      if ( tolower( word ) == smsWords[ i ] )
         return englishWords[ i ]; // return translated word

   return word; // no translation; return original word
} // end function translateWord

int main()
{
   string line;

   cout << "Enter message" << endl;
   cout << "Enter end-of-file (ctrl-D or ctrl-Z) to stop" << endl;

   // translate one line at a time
   while ( getline( cin, line ) )
   {
      istringstream input( line ); // create stream from line of text
      string word;

      // for each word in line, display translation
      while( input >> word )
         cout << translateWord( word ) << ' ';

      cout << endl; // add end of line
   } // end while
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
