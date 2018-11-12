// Exercise 5.28 Solution: ex05_28.cpp
// Display the 12 days of Christmas song.
#include <iostream>
using namespace std; 

int main()
{
   // loop 12 times
   for ( int day = 1; day <= 12; day++ ) 
   {
      cout << "On the ";

      // switch for current day
      switch ( day ) 
      {       
         case 1:
            cout << "first";
            break;
         case 2:
            cout << "second";
            break;
         case 3:
            cout << "third";
            break;
         case 4:
            cout << "fourth";
            break;
         case 5:
            cout << "fifth";
            break;
         case 6:
            cout << "sixth";
            break;
         case 7:
            cout << "seventh";
            break;
         case 8:
            cout << "eighth";
            break;
         case 9:
            cout << "ninth";
            break;
         case 10:
            cout << "tenth";
            break;
         case 11:
            cout << "eleventh";
            break;
         case 12:
            cout << "twelfth";
            break;
      } // end switch

      cout << " day of Christmas,\nMy true love sent to me:\n";

      // switch for gifts
      switch ( day ) 
      {   
         case 12:
            cout << "\tTwelve drummers drumming,\n";
         case 11:
            cout << "\tEleven pipers piping,\n";
         case 10:
            cout << "\tTen lords a-leaping,\n";
         case 9:
            cout << "\tNine ladies dancing,\n";
         case 8:
            cout << "\tEight maids a-milking,\n";
         case 7:
            cout << "\tSeven swans a-swimming,\n";
         case 6:
            cout << "\tSix geese a-laying,\n";
         case 5:
            cout << "\tFive golden rings,\n";
         case 4:
            cout << "\tFour calling birds,\n";
         case 3:
            cout << "\tThree French hens,\n";
         case 2:
            cout << "\tTwo turtle doves, and\n";
         case 1:
            cout << "A partridge in a pear tree.\n\n\n";
      } // end switch
   } // end for

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
