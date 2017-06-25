// Exercise 8.45 Solution: Ex08_45.cpp
// NOTE: THIS PROGRAM ONLY HANDLES VALUES UP TO $99.99
// The program is easily modified to process larger values
#include <iostream> 
using namespace std;

int main()
{
   // array representing string of values from 1-9
   const char *digits[ 10 ] = { "", "ONE", "TWO", "THREE", "FOUR", "FIVE",
      "SIX", "SEVEN", "EIGHT", "NINE" };
   
   // array representing string of values from 10-19
   const char *teens[ 10 ] = { "TEN", "ELEVEN", "TWELVE", "THIRTEEN", 
      "FOURTEEN", "FIFTEEN", "SIXTEEN", 
      "SEVENTEEN", "EIGHTEEN", "NINETEEN"};
   
   // array representing string of values from 10-90
   const char *tens[ 10 ] = { "", "TEN", "TWENTY", "THIRTY", "FORTY", 
      "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY" };

   int dollars;
   int cents;
   int digit1;
   int digit2;
                     
   cout << "Enter the check amount (0.00 to 99.99): ";
   cin >> dollars;
   cin.ignore();
   cin >> cents;
   cout << "The check amount in words is:\n";
   
   // test if the integer amount correspond to a certain array
   if ( dollars < 10 )
      cout << digits[ dollars ] << ' ';
   else if ( dollars < 20 )
      cout << teens[ dollars - 10 ] << ' ';
   else 
   {
      digit1 = dollars / 10;
      digit2 = dollars % 10;
     
      if ( !digit2 )
         cout << tens[ digit1 ] << ' ';
      else
         cout << tens[ digit1 ] << "-" << digits[ digit2 ] << ' ';
   } // end else
   
   cout << "and " << cents << "/100" << endl;
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
