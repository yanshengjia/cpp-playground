// Exercise 21.23 Solution: ex21_23.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

const int SIZE1 = 80;
const int SIZE2 = 15;

int main()
{
   char text[ SIZE1 ]; // char array for text input
   char search[ SIZE2 ]; // char array for searching
   char *searchPtr;
   
   // ask user for text input
   cout << "Enter a line of text:\n";
   cin.get( text, SIZE1 );

   // ask for a search string
   cout << "\nEnter a search string: ";
   cin >> search;
   
   // demonstrates usage of function strstr to locate occurrences
   // of search in text
   searchPtr = strstr( text, search );
   
   if ( searchPtr )
   {
      cout << "\nThe remainder of the line beginning with\n"
         << "the first occurrence of \"" << search << "\":\n"
         << searchPtr << '\n';

      searchPtr = strstr( searchPtr + 1, search );
            
      if ( searchPtr ) // second occurrence of search string
         cout << "\nThe remainder of the line beginning with" 
            << "\nthe second occurrence of \"" << search << "\":\n"
            << searchPtr << '\n';
      else
         cout << "\nThe search string appeared only once.\n";
   } // end if
   else
      cout << "\"" << search << "\" not found.\n";
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
