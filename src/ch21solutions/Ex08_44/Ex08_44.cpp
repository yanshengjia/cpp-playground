// Exercise 8.44 Solution: Ex08_44.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
   double amount;
   double base = 100000.0;
   int i;
   
   cout << "Enter check amount: ";
   cin >> amount;
   cout << "The protected amount is $";
   
   // calculate how many leading asterisks to insert
   for ( i = 0; amount < base; i++ )
      base /= 10;
   
   // insert the asterisk(s)
   for ( int j = 1; j <= i; j++ )
      cout << '*';

   cout << fixed << setw( 9 - i ) << setfill( '*' ) 
      << setprecision( 2 ) << amount << endl;
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
