// Exercise 9.10 Solution: Ex09_10.cpp
#include <iostream> 
#include "Time.h" // include definition of class Time
using namespace std;

int getMenuChoice(); // prototype

int main()
{
   Time time; // the Time object
   int choice = getMenuChoice();
   int hours;
   int minutes;
   int seconds;
      
   while ( choice != 4 )
   {
      switch ( choice )
      {
         case 1: // set hour
            cout << "Enter Hours: ";
            cin >> hours;
               
            if ( !time.setHour( hours ) )
               cout << "Invalid hours." << endl;
            break;
         case 2: // set minute
            cout << "Enter Minutes: ";
            cin >> minutes;
               
            if ( !time.setMinute( minutes ) )
               cout << "Invalid minutes." << endl;
            break;
         case 3: // set seconds
            cout << "Enter Seconds: ";
            cin >> seconds;
               
            if ( !time.setSecond( seconds ) )
               cout << "Invalid seconds." << endl;
            break;
      } // end switch
         
      cout << "Hour: " << time.getHour() << " Minute: " 
         << time.getMinute() << " Second: " << time.getSecond() << endl;
      cout << "Universal time: ";
      time.printUniversal();
      cout << " Standard time: ";
      time.printStandard();
      cout << endl;

      choice = getMenuChoice();
   } // end while      
} // end main

// prints a menu and returns a value corresponding to the menu choice
int getMenuChoice()
{
   int choice;

   cout << "1. Set Hour\n2. Set Minute\n3. Set Second\n"
      << "4. Exit\nChoice: " << endl;
   cin >> choice;
   return choice;
} // end function getMenuChoice


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


