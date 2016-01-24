// Exercise 8.43 Solution: Ex08_43.cpp
#include <iostream> 
using namespace std;

int main()
{
   // array to store twelve months of a year
   const char *months[ 13 ] = { "", "January", "February", "March", 
      "April", "May", "June", "July", "August", "September", 
      "October", "November", "December" };
   int m; // integer for month
   int d; // day
   int y; // year
   
   cout << "Enter a date in the form mm/dd/yy: \n";
   cin >> m;
   cin.ignore();
   cin >> d;
   cin.ignore();
   cin >> y;
   cout << "The date is: " << months[ m ] << ' ' << d << ", " 
      << ( ( y < 50 ) ? y + 2000 : y + 1900 ) << endl;
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
