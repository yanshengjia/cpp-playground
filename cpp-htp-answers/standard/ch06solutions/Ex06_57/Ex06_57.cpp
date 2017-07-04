// Exercise 6.57 Solution: Ex06_57.cpp
// Help user practice multiplication.
#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int generateProblem(); // function prototype
void correctMessage(); // function prototype
void incorrectMessage(); // function prototype

int main()
{
   int response = 0; // user response for product

   srand( time( 0 ) ); // seed random number generator

   // loop until sentinel value read from user
   while ( response != -1 ) 
   {
      int answer = generateProblem(); // get product
      cin >> response; // read user's guess

      // loop until sentinel value or correct response
      while ( response != -1 && response != answer ) 
      {
         incorrectMessage();
         cin >> response;
      } // end while

      // correct response
      if ( response == answer )
         correctMessage();
   } // end while

   cout << "That's all for now. Bye." << endl;
} // end main

// generates new product and displays prompt
int generateProblem()
{
   int x = rand() % 10; // generate 1-digit random number
   int y = rand() % 10; // generate 1-digit random number

   cout << "How much is " << x << " times " << y << " (-1 to End)\n? ";

   return x * y; // return product
} // end function generateProblem

// correctMessage randomly chooses response to correct answer
void correctMessage()
{
   // generate random number between 0 and 3
   switch ( rand() % 4 ) 
   {
      case 0:
         cout << "Very good!";
         break;
      case 1:
         cout << "Excellent!";
         break;
      case 2:
         cout << "Nice work!";
         break;
      case 3:
         cout << "Keep up the good work!";
         break;
   } // end switch

   cout << endl << endl;
} // end function correctMessage

// incorrectMessage randomly chooses response to incorrect answer
void incorrectMessage()
{
   // generate random number between 0 and 3
   switch ( rand() % 4 ) 
   {
      case 0:
         cout << "No. Please try again.";
         break;
      case 1:
         cout << "Wrong. Try once more.";
         break;
      case 2:
         cout << "Don't give up!";
         break;
      case 3:
         cout << "No. Keep trying.";
         break;
   } // end switch

   cout << endl << "? ";
} // end function incorrectMessage

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
