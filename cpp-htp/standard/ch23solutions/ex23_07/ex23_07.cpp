// Ex. 23.7: ex23_07.cpp
#include <iostream>
#include <string>
#include <boost/regex.hpp>
using namespace std;

int main()
{
   string sentence;
   boost::smatch match;

   // regular expression to match a number
   boost::regex expression( "(\\s|^)-?\\d+(\\.\\d+)?(\\s|$)" );
   cout << "Enter a string with a number: ";
   getline( cin, sentence ); // get a string from the user

   // check if the sentence contained any numbers
   if ( !( boost::regex_search( sentence, expression ) ) )
      cout << "No numbers found in the string." << endl;
   else
   {
      cout << "\nNumber(s) found in the string:\n";

      // match regular expression to string and print out all matches
      while ( boost::regex_search( sentence, match, expression) )
      {
         cout << match << endl; // print the matching string

         // remove the matched substring from the string
         sentence = match.suffix();
      } // end while
   } // end else
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
