// Exercise 5.30 Solution: ex05_30.cpp
// Administers global warming quiz.
#include <iostream>
using namespace std;

int main()
{
   int answer; // answer user gave for current question
   int score = 0; // number of correct answers

   // first question
   cout << "By how much have average temperatures risen since 1880?\n"
      << "1: 0.4 degrees F\n"
      << "2: 1.4 degrees F\n"
      << "3: 2.4 degrees F\n"
      << "4: 3.4 degrees F\n";

   cout << "> "; // display prompt
   cin >> answer; // read answer from user

   if ( answer == 2 )
   {
      ++score; // increment score if answer is correct
      cout << "Correct!\n\n";
   } // end if
   else
      cout << "Incorrect. The correct answer was 2\n\n";

   // second question
   cout << "Montana's Glacier National Park had 150 glaciers in 1910.\n"
      << "How many does it have now?\n"
      << "1: 0\n"
      << "2: 7\n"
      << "3: 17\n"
      << "4: 27\n";

   cout << "> "; // display prompt
   cin >> answer; // read answer from user

   if ( answer == 4 )
   {
      ++score; // increment score if answer is correct
      cout << "Correct!\n\n";
   } // end if
   else
      cout << "Incorrect. The correct answer was 4\n\n";

   // third question
   cout << "What is the most abundant greenhouse gas?\n"
      << "1: water vapor\n"
      << "2: carbon dioxide\n"
      << "3: methane\n"
      << "4: carbon monoxide\n";

   cout << "> "; // display prompt
   cin >> answer; // read answer from user

   if ( answer == 1 )
   {
      ++score; // increment score if answer is correct
      cout << "Correct!\n\n";
   } // end if
   else
      cout << "Incorrect. The correct answer was 1\n\n";

   // fourth question
   cout
      << "Which of these should you NOT do to help stop global warming?\n"
      << "1: Use less hot water\n"
      << "2: Reuse your shopping bag\n"
      << "3: Plant a tree\n"
      << "4: Take a bath instead of a shower\n";

   cout << "> "; // display prompt
   cin >> answer; // read answer from user

   if ( answer == 4 )
   {
      ++score; // increment score if answer is correct
      cout << "Correct!\n\n";
   } // end if
   else
      cout << "Incorrect. The correct answer was 4\n\n";

   // fifth question
   cout
      << "Which of these should you NOT do to help stop global warming?\n"
      << "1: Buy more frozen foods\n"
      << "2: Fly less\n"
      << "3: Use a clothesline instead of a dryer\n"
      << "4: Cover pots while cooking\n";

   cout << "> "; // display prompt
   cin >> answer; // read answer from user

   if ( answer == 1 )
   {
      ++score; // increment score if answer is correct
      cout << "Correct!\n\n";
   } // end if
   else
      cout << "Incorrect. The correct answer was 1\n\n";

   // display message based on number of correct answers
   if ( score == 5 )
      cout << "Excellent" << endl;
   else if ( score == 4 )
      cout << "Very good" << endl;
   else
   {
      cout << "Time to brush up on your knowledge of global warming:\n"
         << "http://news.nationalgeographic.com/news/2004/12/"
         << "1206_041206_global_warming.html\n"
         << "http://lwf.ncdc.noaa.gov/oa/climate/gases.html\n"
         << "http://globalwarming-facts.info/50-tips.html\n";
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
 *************************************************************************/
