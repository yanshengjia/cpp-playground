// Exercise 4.25 Solution: ex04_25.cpp
// Displaying a square of asterisks.
#include <iostream>
using namespace std; 

int main()
{
   int stars; // number of stars on a side
   int column; // the current column of the square being printed
   int row = 1; // the current row of the square being printed

   // prompt and read the length of the side from the user
   cout << "Enter length of side:";
   cin >> stars;

   // valid input, if invalid, set to default
   if ( stars < 1 )
   {
      stars = 1;
      cout << "Invalid Input\nUsing default value 1\n";
   } // end if
   else if ( stars > 20 )
   {
      stars = 20;
      cout << "Invalid Input\nUsing default value 20\n";
   } // end else if
      
   // repeat for as many rows as the user entered
   while ( row <= stars )
   {
      column = 1;
        
      // and for as many columns as rows         
      while ( column <= stars )
      {
         if ( row == 1 )
            cout << "*";
         else if ( row == stars )
            cout << "*";
         else if ( column == 1 )
            cout << "*";
         else if ( column == stars )
            cout << "*";
         else
            cout << " ";

         column++; // increment column
      } // end inner while 

      cout << endl;
      row++; // increment row
   } // end outer while 
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
