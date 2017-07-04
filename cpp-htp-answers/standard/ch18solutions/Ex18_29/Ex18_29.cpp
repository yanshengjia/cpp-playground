// Exercise 18.29 Solution: Ex18_29.cpp
// Calculates the spam score of a message.
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

const int spamSize = 30;

const string spamWords[ spamSize ] = {
   "nigerian", "disclaimer", "urgent", "necessary", "free", "4u",
   "guarantee", "profits", "congratulations", "opportunity",
   "unlimited", "scam", "casino", "profits", "amazing", "mailto",
   "mlm", "unsecured", "winner", "winning", "hormone", "insurance",
   "spam", "ringtones", "pharmacy", "blackjack", "cwas", "chatroom",
   "duty-free", "shoes" };

// convert string to lowercase
string tolower( string text )
{
   string temp;

   for ( int i = 0; i < text.size(); i++ )
      // tolower converts character to lowercase (see Section 21.9)
      temp += tolower( text[ i ] );

   return temp;
} // end function tolower

int main()
{
   string word;
   int wordCount = 0, spamCount = 0;

   cout << "Enter message" << endl;
   cout << "Enter end-of-file (ctrl-D or ctrl-Z) to stop" << endl;

   while ( cin >> word )
   {
      ++wordCount; // increment word count

      // see if current word is one of the spam keywords
      for ( int i = 0; i < spamSize; i++ )
         if ( tolower( word ) == spamWords[ i ] )
            ++spamCount; // increment spam word count
   } // end while

   // display score
   cout << "Score: " << spamCount << endl;
   int percent = ( wordCount == 0 ? 0 : 100 * spamCount / wordCount );
   cout << "Percentage: " << percent << '%' << endl;
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
