// Ex. 23.9: ex23_09.cpp
#include <iostream>
#include <string>
#include <boost/regex.hpp>
using namespace std;

int main()
{
   string sentence;

   // get the sentence from the user
   cout << "Please enter a sentence: ";
   getline( cin, sentence );

   // check for extra spaces
   if ( !( boost::regex_search( sentence, boost::regex( "\\s{2,}" ) ) ) )
      cout << "No extra spaces!" << endl;
   else
   {
      // replace any occurrences of multiple spaces with a single space
      sentence = 
         boost::regex_replace( sentence, boost::regex( "\\s{2,}" ), " " );

      // display the corrected sentence
      cout << "All extra spaces have been removed.\n" << sentence;
   } // end else

   cout << endl;
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
