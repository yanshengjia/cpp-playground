// Exercise 4.33 Solution: ex04_33.cpp
// Determine whether three values represent the sides of a right triangle.
#include <iostream>
using namespace std; 

int main()
{
   int side1; // length of side 1
   int side2; // length of side 2
   int side3; // length of side 3
   bool isRightTriangle = false; // if sides can form right triangle

   // get values of three sides
   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;
      
   // square the sides
   int side1Square = side1 * side1;
   int side2Square = side2 * side2;
   int side3Square = side3 * side3;

   // test if sides can form a right triangle
   if ( ( side1Square + side2Square ) == side3Square )
     isRightTriangle = true;
   else if ( ( side1Square + side3Square ) == side2Square )
      isRightTriangle = true;
   else if ( ( side2Square + side3Square ) == side1Square )
      isRightTriangle = true;
      
   // display results
   if ( isRightTriangle )
      cout << "These are the sides of a right triangle." << endl;
   else 
      cout << "These do not form a right triangle." << endl;    
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
