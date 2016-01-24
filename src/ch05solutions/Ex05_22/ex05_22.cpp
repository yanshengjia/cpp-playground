// Exercise 5.22 Solution: ex05_22.cpp
// Prove DeMorgan’s law.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
   // Prove part (a)
   // condition1: !(x < 5), condition2: !(y >= 7)
   int x = 6; // make condition1 true first time through loop
   int y; // variable for condition2

   cout << boolalpha << "PART A" << endl << endl;

   // loop twice for condition1 true, then false
   do 
   {   
      x--; // make condition1 false second time through loop
      y = 5; // make condition2 true first time through loop

      // loop twice for condition2 true, then false
      do 
      {
         y++; // make condition2 false second time through loop

         // display current assignments
         cout << "!( x < 5 ): " << !( x < 5 ) << endl;
         cout << "!( y >= 7 ): " << !( y >= 7 ) << endl;

         // test for validity
         if ( ( !( x < 5 ) && !( y >= 7 ) ) == 
              ( !( ( x < 5 ) || ( y >= 7 ) ) ) )
            cout << "!(x < 5) && !(y >= 7) is equivalent to"
               << " !((x < 5) || (y >= 7))" << endl;
         else
            cout << "!(x < 5) && !(y >= 7) is not equivalent to"
               << " !((x < 5) || (y >= 7))" << endl;

         cout << endl;
      } while ( !( y >= 7 ) ); // end do...while

   } while ( !( x < 5 ) ); // end do...while

   cout << endl << endl;

   // Prove part (b)
   // condition1: !(a == b), condition2: !(g != 5)
   int a = 3; // make condition1 true first time through loop
   int b = 5; // leave b at 5
   int g; // variable for condition2

   cout << "PART B" << endl << endl;

   // loop twice for condition1 true, then false
   do 
   {
      a++; // make condition1 false second time through loop
      g = 4; // initially make condition2 true

      // loop twice for condition2 true, then false
      do 
      {
         g++; // make condition2 false second time through loop

         // display current assignments
         cout << "!( a == b): " << !( a == b ) << endl;
         cout << "!( g != 5): " << !( g != 5 ) << endl;

         // test for validity
         if ( ( !( a == b ) || !( g != 5 ) ) ==
              ( !( ( a == b ) && ( g != 5 ) ) ) ) 
            cout << "!(a == b) || !(g != 5) is equivalent to"
               << " !((a == b) && (g != 5))" << endl;
         else
            cout << "!(a == b) || !(g != 5) is not equivalent to"
               << " !((a == b) && (g != 5))" << endl;

         cout << endl;
      } while ( !( g != 5 ) ); // end do...while

   } while ( !( a == b ) ); // end do...while

   cout << endl << endl;

   // Prove part (c)
   // condition1: (x <= 8), condition2: (y > 4)
   x = 7; // make condition1 true first time through loop
   
   cout << "PART C" << endl << endl;

   // loop twice for condition1 true, then false
   do 
   {
      x++; // make condition1 false second time through loop
      y = 6; // initially make condition2 true

      // loop twice for condition2 true, then false
      do

      {
         y--; // make condition2 false second time through loop

         // display current assignments
         cout << "( x <= 8 ): " << ( x <= 8 ) << endl;
         cout << "( y > 4 ): " << ( y > 4 ) << endl;

         // test for validity
         if ( !( ( x <= 8 ) && ( y > 4 ) ) == 
              ( !( x <= 8 ) || !( y > 4 ) ) )
            cout << "!((x <= 8) && (y > 4)) is equivalent to"
               << " !(x <= 8) || !(y > 4)" << endl;
         else
            cout << "!((x <= 8) && (y > 4)) is not equivalent to"
               << " !(x <= 8) || !(y > 4)" << endl;

         cout << endl;
      } while ( ( y > 4 ) ); // end do...while

   } while ( ( x <= 8 ) ); // end do...while
      
   cout << endl << endl;

   // Prove part (d)
   // condition1: (i > 4), condition2: (j <= 6)
   int i = 6; // make condition1 true first time through loop
   int j; // variable for condition2

   cout << "PART D" << endl << endl;

   // loop twice for condition1 true, then false
   do 
   {   
      i--; // make condition1 false second time through loop
      j = 5; // initially make condition2 true

      // loop twice for condition2 true, then false
      do 
      {
         j++; // make condition2 false second time through loop

         // display current assignments
         cout << "( i > 4 ): " << ( i > 4 ) << endl;
         cout << "( j <= 6 ): " << ( j <= 6 ) << endl;

         // test for validity
         if ( !( ( i > 4 ) || ( j <= 6 ) ) == 
            ( !( i > 4 ) && !( j <= 6 ) ) )
            cout << "!((i > 4) || (j <= 6)) is equivalent to"
               << " !(i > 4) && !(j <= 6)" << endl;
         else
            cout << "!((i > 4) || (j <= 6)) is not equivalent to"
               << " !(i > 4) && !(j <= 6)" << endl;

         cout << endl;
      } while ( ( j <= 6 ) ); // end do...while

   } while ( ( i > 4 ) ); // end do...while
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
