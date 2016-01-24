// Exercise 18.28 Solution: Ex18_28.cpp
// Converts a recipe to use healthier ingredients.
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// function prototypes
double readAmount( string );
void splitLine( string, double &, string &, string & );
string formatOutput( double, string, string );
string convert( string, bool, bool );

int main()
{
   string line;
   bool weightLoss = true, cholesterol = true;

   cout << "Do substitutions for weight loss (Y/n)? ";
   getline( cin, line );

   if ( line == "n" || line == "N" )
      weightLoss = false;

   cout << "Do substitutions for cholesterol (Y/n)? ";
   getline( cin, line );

   if ( line == "n" || line == "N" )
      cholesterol = false;

   cout << "Enter recipe\nEnter end-of-file (ctrl-D or ctrl-Z) to stop\n";

   // read until end of file
   while ( getline( cin, line ) )
      cout << convert( line, weightLoss, cholesterol ) << endl;
} // end main

// convert single recipe item
string convert( string line, bool weightLoss, bool cholesterol )
{
   // split out quantity, unit, and item
   string unit, item;
   double amount;
   splitLine( line, amount, unit, item );

   // do all necessary conversions
   // eggs don't have a unit, so type is parsed as unit
   if ( ( unit == "egg" || unit == "eggs" ) && cholesterol )
      return formatOutput( amount * 2, "egg", "whites" );
   else if ( item == "milk" && cholesterol )
      return formatOutput( amount, unit, "soy milk" );
   else if ( item == "sugar" && weightLoss )
      return formatOutput( amount, unit, "molasses" );
   else if ( item == "butter" && cholesterol )
      return formatOutput( amount, unit, "margarine" );
   else if ( item == "flour" )
      return formatOutput( amount, unit, "rye flour" );
   else if ( item == "mayonnaise" && cholesterol )
      return formatOutput( amount, unit, "cottage cheese" );
   else if ( item == "oil" && weightLoss )
      return formatOutput( amount, unit, "applesauce" );
   else if ( item ==  "lemon juice" )
      return formatOutput( amount / 2, unit, "vinegar" );
   else if ( item == "sour cream" && cholesterol )
      return formatOutput( amount, unit, "yogurt" );
   else
      return line; // no conversion; use original item
} // end function convert

// split a line into amount, unit, and type
void splitLine( string line, double &amount, string &unit, string &item )
{
   istringstream tokens( line ); // use istringstream to split tokens
   string temp;

   tokens >> temp >> unit; // read amount and unit
   amount = readAmount( temp ); // convert from string to double
   tokens >> ws; // remove whitespace from stream
   getline( tokens, item ); // read rest of line into item
} // end function splitLine

// handle fractions and decimals
double readAmount( string amount )
{
   istringstream in( amount );
   double value;

   // attempt simple case first
   in >> value;

   if ( in.eof() )
      return value; // if end of string, was not a fraction

   // deal with fractions
   in.get(); // discard slash
   double denominator;
   in >> denominator;
   return value / denominator;
} // end function readAmount

// combine recipe fields into one string
string formatOutput( double amount, string unit, string item )
{
   ostringstream out;
   out << amount; // print amount
   out << ' ' << unit; // print unit
   out << ' ' << item; // print item
   return out.str(); // return formatted string
} // end function formatOutput


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
