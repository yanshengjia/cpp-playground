// Exercise 7.20 Solution: Ex07_20.cpp
#include <iostream> 
#include <cctype>
using namespace std;

int main()
{
   const int SEATS = 11;
   int plane[ SEATS ] = {};
   int people = 0;   
   int economy = 6;
   int firstClass = 1; 
   int choice;
   char response;
   
   // continue until plane is full
   while ( people < 10 ) 
   {
      cout << "\nPlease type 1 for \"firstClass\"\n"
         << "Please type 2 for \"economy\"\n";
      cin >> choice;

      // if user selects first class and seats available, assign seat
      if ( choice == 1 ) 
      {
         if ( !plane[ firstClass ] && firstClass <= 5 ) // seat available
         {
            cout << "Your seat assignment is " << firstClass
               << " in the first class section.\n";
            plane[ firstClass++ ] = 1;
            people++;
         } // end if
         else if ( firstClass > 5 && economy <= 10 ) // take economy seat
         {
            cout << "The firstClass section is full.\nWould you "
               << "like to sit in the economy section (Y or N)? ";
            cin >> response;

            // if economy is suitable, assign seat in economy section
            if ( response == 'Y' || response == 'y' ) 
            {
               cout << "Your seat assignment is " << economy
                  << " in the economy section.\n";
               plane[ economy++ ] = 1;
               people++;
            } // end if
            else // if economy seat not suitable, print next departure
               cout << "Next flight leaves in 3 hours.\n";
         } // end outer else
         else // if no economy seats either, print next departure
            cout << "Next flight leaves in 3 hours.\n";
      } // end outer if
      else // if user selects economy and seats available, assign seat
      {
         if ( !plane[ economy ] && economy <= 10 ) // seat available
         {
            cout << "Your seat assignment is " << economy 
               << " in the economy section.\n";
            plane[ economy++ ] = 1;
            people++;
         } // end if
         else if ( firstClass <= 5 ) // first class seat available
         {
            cout << "The economy section is full.\nWould you like " 
                 << "to sit in the firstClass section (Y or N)? ";
            cin >> response;

            if ( response == 'Y' || response == 'y' ) 
            {
               cout << "Your seat assignment is " << firstClass 
                  << " in the first class section.\n";
               plane[ firstClass++ ] = 1;
               people++;
            } // end if
            else // if first class not suitable, print next departure
               cout << "Next flight leaves in 3 hours.\n";
         } // end outer else
         else // if no seats left, print next departure
            cout << "Next flight leaves in 3 hours.\n";
      } // end outer if
   } // end while

   cout << "All seats for this flight are sold." << endl;
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
