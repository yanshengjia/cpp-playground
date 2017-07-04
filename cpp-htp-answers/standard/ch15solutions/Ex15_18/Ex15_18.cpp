// Exercise 15.18 Solution: Ex15_18.cpp
#include <iostream> 
using namespace std;

const int SIZE = 80;

int main()
{
   char array[ SIZE ]; // array to hold getline() input 
   char array2[ SIZE ]; // array to hold get() input
   char c;// holds next input value

   // prompt user to enter string and use getline() to store it
   cout << "Enter a sentence to test getline() and get():\n";
   cin.getline( array, SIZE, '*' );
   cout << array << '\n';

   cin >> c; // read next character in input
   cout << "The next character in the input is: " << c << '\n';

   // use get() to obtain next value held in array
   cin.get( array2, SIZE, '*' );
   cout << array2 << '\n';

   cin >> c; // read next character in input
   cout << "The next character in the input is: " << c << '\n';
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
