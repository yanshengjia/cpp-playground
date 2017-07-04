// Exercise 19.9 Solution: Ex19_09.cpp
// BinarySearch test program.
#include <iostream>
#include "BinarySearch.h" // class BinarySearch definition
using namespace std;

int main()
{
   int searchInt; // search key
   int position; // location of search key in vector

   // create vector and output it
   BinarySearch searchVector( 15 );
   searchVector.displayElements();

   // get input from user
   cout << "\nPlease enter an integer value (-1 to quit): ";
   cin >> searchInt; // read an int from user
   cout << endl;

   // repeatedly input an integer; -1 terminates the program
   while ( searchInt != -1 )
   {
      // use binary search to try to find integer
      position = searchVector.binarySearch( searchInt );

      // return value of -1 indicates integer was not found
      if ( position == -1 )
         cout << "The integer " << searchInt << " was not found.\n";
      else
         cout << "The integer " << searchInt 
            << " was found in position " << position << ".\n";

      // get input from user
      cout << "\n\nPlease enter an integer value (-1 to quit): ";
      cin >> searchInt; // read an int from user
      cout << endl;
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
 *************************************************************************/
