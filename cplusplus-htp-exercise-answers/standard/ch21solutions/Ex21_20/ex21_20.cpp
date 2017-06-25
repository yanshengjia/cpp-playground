// Exercise 21.20 Solution: ex21_20.cpp
#include <iostream> 
#include <cctype>
using namespace std;

const int SIZE = 100;

int main()
{
   char s[ SIZE ];
   int i;
  
   cout << "Enter a line of text:\n";
   cin.getline( s, SIZE );
   
   cout << "\nThe line in uppercase is:\n";
   
   // demonstrate function toupper
   for ( i = 0; s[ i ] != '\0'; ++i )
      cout << static_cast< char >( toupper( s[ i ] ) );
   
   cout << "\n\nThe line in lowercase is:\n";
   
   // demonstrate function tolower
   for ( i = 0; s[ i ] != '\0'; ++i )
      cout << static_cast< char >( tolower( s[ i ] ) );

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
 *************************************************************************/


