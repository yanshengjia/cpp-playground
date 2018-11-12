// Exercise 20.7 solution: Ex20_07.cpp
#include <iostream> 
#include "List.h"
using namespace std;

template< typename T >
void merge( List< T > &first, List< T > &second, List< T > &result )
{
   List< T > tempFirst( first ); // create a copy of first
   List< T > tempSecond( second ); // create a copy of second
   T value1;
   T value2;

   tempFirst.removeFromFront( value1 );
   tempSecond.removeFromFront( value2 );

   while ( !tempFirst.isEmpty() && !tempSecond.isEmpty() ) 
   {
      if ( value1 <= value2 ) 
      {
         result.insertAtBack( value1 );
         tempFirst.removeFromFront( value1 );
      } // end if
      else 
      {
         result.insertAtBack( value2 );
         tempSecond.removeFromFront( value2 );
      } // end else
   } // end while

   // Insert the values currently in value1 and value2
   if ( value1 < value2 ) 
   {
      result.insertAtBack( value1 );
      result.insertAtBack( value2 );
   } // end if
   else 
   {
      result.insertAtBack( value2 );
      result.insertAtBack( value1 );
   } // end else

   // Complete the insertion of the list that is not empty.
   // NOTE: Only one of the following 2 while statements will execute
   // because one of the lists must be empty to exit the preceding while
   if ( !tempFirst.isEmpty() ) // items left in tempFirst
   {
      do 
      {
         tempFirst.removeFromFront( value1 );
         result.insertAtBack( value2 );
      } while ( !tempFirst.isEmpty() );
   } // end if
   else // items left in tempSecond
   {
      do 
      {
         tempSecond.removeFromFront( value2 );
         result.insertAtBack( value2 );
      } while ( !tempSecond.isEmpty() );
   } // end else
} // end function merge

int main()
{
   List< int > list1;
   List< int > list2;
   List< int > result;
   int i;

   for ( i = 1; i <= 9; i += 2 )
      list1.insertAtBack( i );

   list1.print();

   for ( i = 2; i <= 10; i += 2 )
      list2.insertAtBack( i );

   list2.print();

   merge( list1, list2, result );
   
   cout <<  "The merged list is:\n";
   result.print();
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
