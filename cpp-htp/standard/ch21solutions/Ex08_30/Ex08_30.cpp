// Exercise 8.30 Solution: Ex08_30.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

const int SIZE = 20;

int main()
{
   char string1[ SIZE ];
   char string2[ SIZE ];
   int result;

   cout << "Enter two strings: ";
   cin >> string1 >> string2;
   
   // uses function strcmp to compare the two strings
   result = strcmp( string1, string2 );
  
   if ( result > 0 )
      cout << '\"' << string1 << '\"' << " is greater than \""
         << string2 << '\"' << endl;
   else if ( result == 0 )
      cout << '\"' << string1 << '\"' << " is equal to \"" << string2
         << '\"' << endl;
   else
      cout << '\"' << string1 << '\"' << " is less than \"" << string2
         << '\"' << endl;
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
