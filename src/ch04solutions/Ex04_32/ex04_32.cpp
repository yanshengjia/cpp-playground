// Exercise 4.32 Solution: ex04_32.cpp
// Determine whether three values could represent the sides of a triangle.
#include <iostream>
using namespace std; 

int main()
{
   double side1; // length of side 1
   double side2; // length of side 2
   double side3; // length of side 3
   bool isTriangle = false; // whether the sides can form a triangle

   // get values of three sides
   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;

   // test if the sides can form a triangle
   if ( side1 + side2 > side3 )
   {
      if ( side2 + side3 > side1 )
      {
         if ( side3 + side1 > side2 )
            isTriangle = true;
      } // end inner if 
   } // end outer if 
      
   // display result
   if ( isTriangle )
      cout << "These could be sides to a triangle." << endl;
   else 
      cout << "These do not form a triangle." << endl;
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
