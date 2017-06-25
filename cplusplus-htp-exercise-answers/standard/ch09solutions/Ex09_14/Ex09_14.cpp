// Exercise 9.14 Solution: Ex09_14.cpp
// HugeInteger test program.
#include <iostream>
#include "HugeInteger.h" // include definition of class HugeInteger
using namespace std;

int main()
{
   HugeInteger n1( 7654321 ); // HugeInteger object n1
   HugeInteger n2( "100000000000000" ); // HugeInteger object n2
   HugeInteger n3; // HugeInteger object n3
   HugeInteger n4( 5 ); // HugeInteger object n4
   HugeInteger n5; // HugeInteger object n5   
   
   // outputs the sum of n1 and n2
   n5 = n1.add( n2 );  
   n1.output();               
   cout << " + ";         
   n2.output(); 
   cout << " = "; 
   n5.output();
   cout << "\n\n";   

   // assigns the difference of n2 and n4 to n5 then outputs n5
   n5 = n2.subtract( n4 );
   n2.output();
   cout<< " - ";
   n4.output();
   cout << " = ";
   n5.output();
   cout << "\n\n";
    
   // checks for equality between n2 and n2 
   if ( n2.isEqualTo( n2 ) == true )
   { 
      n2.output(); 
      cout << " is equal to ";
      n2.output(); 
      cout << "\n\n"; 
   } // end if 

   // checks for inequality between n1 and n2
   if ( n1.isNotEqualTo( n2 ) == true )
   {
      n1.output(); 
      cout << " is not equal to ";
      n2.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for greater number between n2 and n1 
   if ( n2.isGreaterThan( n1 ) == true )
   {
      n2.output(); 
      cout << " is greater than ";
      n1.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for smaller number between n4 and n2
   if ( n4.isLessThan( n2 ) == true )
   {
      n4.output(); 
      cout << " is less than ";
      n2.output(); 
      cout << "\n\n";  
   } // end if 
    
   // tests for smaller or equal number between n4 and n4
   if ( n4.isLessThanOrEqualTo( n4 ) == true )
   {
      n4.output(); 
      cout << " is less than or equal to ";
      n4.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for smaller or equal number between n4 and n2
   if ( n4.isLessThanOrEqualTo( n2 ) == true )
   {
      n4.output(); 
      cout << " is less than or equal to ";
      n2.output(); 
      cout << "\n\n";  
   } // end if 

   // tests for greater or equal number between n3 and n3
   if ( n3.isGreaterThanOrEqualTo( n3 ) == true )
   {
      n3.output(); 
      cout << " is greater than or equal to ";
      n3.output(); 
      cout << "\n\n";  
   } // end if 
    
   // tests for greater or equal number between n2 and n3
   if ( n2.isGreaterThanOrEqualTo( n3 ) == true )
   {
      n2.output(); 
      cout << " is greater than or equal to ";
      n3.output(); 
      cout << "\n\n";  
   } // end if 
    
   // tests for zero at n3
   if ( n3.isZero() == true )
   {
      cout << "n3 contains ";
      n3.output();
      cout << "\n\n";  
   } // end if statement
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


