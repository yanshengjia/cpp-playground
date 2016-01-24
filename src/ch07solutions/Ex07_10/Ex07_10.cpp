// Exercise 7.10 Solution: Ex07_10.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

void wages( int [] ); // function prototype
void display( const int [] ); // function prototype

int main()
{
   int salaries[ 11 ] = {}; // array to hold salaries

   cout << fixed << showpoint;
   wages( salaries ); // calculate wages
   display( salaries ); // display ranges of wages
} // end main

// function that asks user to input gross sales
// and calculates employee salary based on input
void wages( int money[] )
{
   double sales; // holds employee gross sales
   double i = 0.09; // 9%, used for calculating salary

   // prompt user for gross sales and store it in sales
   cout << "Enter employee gross sales (-1 to end): ";
   cin >> sales;

   // calculate salary based on sales
   // and prompt user for another employee sales amount
   while ( sales != -1 ) 
   {
      double salary = 200.0 + sales * i;
      cout << setprecision( 2 ) << "Employee Commission is $" 
         << salary << '\n';

      int x = static_cast< int > ( salary ) / 100;
      money[ ( x < 10 ? x : 10 ) ]++;

      cout << "\nEnter employee gross sales (-1 to end): ";
      cin >> sales;
   } // end while
} // end function wages

// function that displays table of salary ranges
// and number of employees in each range
void display( const int dollars[] )
{
   // display table of ranges and employees in each range
   cout << "Employees in the range:";

   for ( int i = 2; i < 10; i++ )
      cout << "\n$" << i << "00-$" << i << "99 : " << dollars[ i ];

   cout << "\nOver $1000: " << dollars[ 10 ] << endl;
} // end function display 

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
