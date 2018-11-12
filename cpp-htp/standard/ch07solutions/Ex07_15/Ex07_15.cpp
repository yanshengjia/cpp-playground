// Exercise 7.15 Solution: Ex07_15.cpp
#include <iostream> 
using namespace std;

int main()
{
   const int SIZE = 20; // size of array
   int a[ SIZE ] = {};
   int subscript = 0;
   int duplicate;
   int value; // number entered by user

   cout << "Enter 20 integers between 10 and 100:\n";

   // get 20 nonduplicate integers in the range between 10 and 100
   for ( int i = 0; i < SIZE; ) 
   {
      duplicate = 0;
      cin >> value;

      // validate input and test if there is a duplicate
      if ( value >= 10 && value <= 100 )
      {
         for ( int j = 0; j < subscript; j++ )
         {
            if ( value == a[ j ] ) 
            {
               duplicate = 1;
               break;
            } // end if
         } // end for

         // if number is not a duplicate, enter it in array
         if ( !duplicate )
         {
            a[ subscript++ ] = value;
            ++i;
         } // end if
         else
            cout << "Duplicate number.\n";
      } // end if
      else
         cout << "Invalid number.\n";
   } // end for

   cout << "\nThe nonduplicate values are:\n";

   // display array of nonduplicates
   for ( int i = 0; i < SIZE; i++ )
      cout << a[ i ] << ' ';

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
