// Exercise 7.22 Solution: Ex07_22.cpp
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
   const int PEOPLE = 5;
   const int PRODUCTS = 6;
   double sales[ PEOPLE ][ PRODUCTS ] = { 0.0 };
   double value;
   double totalSales;
   double productSales[ PRODUCTS ] = { 0.0 };
   int salesPerson;
   int product;
   
   // enter sales slips
   cout << "Enter the salesperson (1 - 4), product number (1 - 5), and "
      << "total sales.\nEnter -1 for the salesperson to end input.\n";
   cin >> salesPerson;
   
   // continue receiving input for each salesperson until -1 is entered
   while ( salesPerson != -1 ) 
   {
      cin >> product >> value;
      sales[ salesPerson ][ product ] += value;
      cin >> salesPerson;
   } // end while

   cout << "\nThe total sales for each salesperson are displayed at the "
      << "end of each row,\n" << "and the total sales for each product "
      << "are displayed at the bottom of each column.\n " << setw( 12 ) 
      << 1 << setw( 12 ) << 2 << setw( 12 ) << 3 << setw( 12 ) << 4 
      << setw( 12 ) << 5 << setw( 13 ) << "Total\n" << fixed << showpoint;

   // display salespeople and sales
   for ( int i = 1; i < PEOPLE; i++ ) 
   {
      totalSales = 0.0;
      cout << i;
      
      // add total sales, and display individual sales
      for ( int j = 1; j < PRODUCTS; j++ ) 
      {
         totalSales += sales[ i ][ j ];
         cout << setw( 12 ) << setprecision( 2 ) << sales[ i ][ j ];
         productSales[ j ] += sales[ i ][ j ];
      } // end inner for

      cout << setw( 12 ) << setprecision( 2 ) << totalSales << '\n';
   } // end outer for
   
   cout << "\nTotal" << setw( 8 ) << setprecision( 2 ) 
      << productSales[ 1 ];

   // display total product sales
   for ( int j = 2; j < PRODUCTS; j++ )
      cout << setw( 12 ) << setprecision( 2 ) << productSales[ j ];

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
