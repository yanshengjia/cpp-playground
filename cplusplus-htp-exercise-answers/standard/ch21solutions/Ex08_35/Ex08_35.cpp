// Exercise 8.35 Solution: Ex08_35.cpp
#include <iostream> 
#include <cstring> 
using namespace std;

int main()
{
   const int SIZE1 = 20;
   const int SIZE2 = 10;
   
   char p[ SIZE1 ];
   char phoneNumber[ SIZE2 ] = { '\0' };
   
   char *tokenPtr; // store temporary token
   char *areaCode; // store area code
   char *phone; // store the phone number
   
   cout << "Enter a phone number in the form (555) 555-5555:\n";
   cin.getline( p, SIZE1 );
   
   // pick apart the area code from the entire string
   areaCode = strtok( p, "()" );
   
   // function strtok to take the next token in the string
   tokenPtr = strtok( 0, "-" );

   // copies the result from the second call to strtok into phoneNumber
   strcpy( phoneNumber, tokenPtr );

   // the last call to strtok to take the last 4 digits
   tokenPtr = strtok( 0, "" );

   // concatenate the result with the current phoneNumber
   strcat( phoneNumber, tokenPtr );

   phone = phoneNumber;
   
   cout << "\nThe area code is " << areaCode 
      << "\nThe phone number is " << phone << endl;
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
