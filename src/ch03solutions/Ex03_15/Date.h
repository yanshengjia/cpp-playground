// Exercise 3.15 Solution: Date.h
// Definition of class Date.

// class Date definition
class Date 
{
public:
   Date( int, int, int ); // constructor initializes data members
   void setMonth( int ); // set month
   int getMonth(); // return month
   void setDay( int ); // set day
   int getDay(); // return day
   void setYear( int ); // set year
   int getYear(); // return year
   void displayDate(); // displays date in mm/dd/yyyy format
private:
   int month; // the month of the date
   int day; // the day of the date
   int year; // the year of the date
}; // end class Date

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
