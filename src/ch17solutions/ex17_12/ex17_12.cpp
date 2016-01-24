// Exercise 17.12 Solution: ex17_12.cpp
#include <iostream> 
#include <iomanip> 
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Tool.h"
using namespace std;

// function prototypes
void initializeFile( fstream & );
void inputData( fstream & );
void listTools( fstream & );
void updateRecord( fstream & );
void insertRecord( fstream & );
void deleteRecord( fstream & );
int instructions( void );

int main()
{
   int choice; 
   char response;

   // file stream used for input and output 
   fstream file( "hardware.dat", ios::in | ios::out );
   void ( *f[] )( fstream & ) =  
      { listTools, updateRecord, insertRecord, deleteRecord };
   
   // terminate program if file cannot be opened
   if ( !file ) 
   {
      cerr << "File could not be opened.\n";
      exit( 1 );
   } // end if

   // ask user if new file should be made
   cout << "Should the file be initialized (Y or N): ";
   cin >> response;  
   response = toupper( response );

   // test if user's response was valid
   while ( ( response != 'Y' ) && ( response != 'N' ) ) 
   {
      cout << "Invalid response. Enter Y or N: ";
      cin >> response;
      response = toupper( response );
   } // end while

   // initialize file if user says to
   if ( response == 'Y' ) 
   {
      initializeFile( file );
      inputData( file );
   } // end if

   // perform user instructions until 5 is entered
   while ( ( choice = instructions() ) != 5 ) 
   {
      ( *f[ choice - 1 ] )( file );
      file.clear(); // reset eof indicator
   } // end while
} // end main

// function to clear file
void initializeFile( fstream &fRef )
{
   Tool blankItem; // empty Tool object

   // fill file with blank records
   for ( int i = 0; i < 100; i++ )
      fRef.write( 
         reinterpret_cast< char * >( &blankItem ), sizeof( Tool ) );
} // end function initializeFile

// function that receives input
void inputData( fstream &fRef )
{
   Tool temp; // temporary Tool object

   // temporary variables used to hold user input
   int number;
   string name;
   double price;
   int stock;

   // ask user for and set partNumber
   cout << "Enter the part number (0 - 99, -1 to end input): ";
   cin >> number;

   // set Tool members until -1 is entered
   while ( number != -1 ) 
   {
      cout << "Enter the tool name: "; // ask user for tool name
      cin.ignore(); // ignore the newline on the input stream
      getline( cin, name ); // store tool name in variable name
      temp.setToolName( name ); // set tool member name
      temp.setPartNumber( number ); // set part number

      // ask user for quantity and price
      cout << "Enter quantity and price: "; 
      cin >> stock >> price; // store input in temporary variables
      temp.setInStock( stock ); // set inStock
      temp.setUnitPrice( price ); // set unitPrice
      
      // place file position pointer at next write location
      fRef.seekp( temp.getPartNumber() * sizeof( Tool ) );

      // write data to file
      fRef.write( reinterpret_cast< char * >( &temp ), sizeof( Tool ) );

      // ask user for next part number
      cout << "Enter the part number (0 - 99, -1 to end input): ";
      cin >> number;
   } // end while
} // end inputData

// function that decides what choice user selected
int instructions()
{
   int choice;

   // ask user to enter a choice
   cout << "\nEnter a choice:\n1  List all tools."
      << "\n2  Update record.\n3  Insert record."
      << "\n4  Delete record.\n5  End program.\n";

   // ask user for choice until a valid choice is entered
   do 
   {
      cout << "? ";
      cin >> choice;
   } while ( choice < 1 || choice > 5 );

   return choice; // return user choice
} // end function instructions

// function that lists tools in file
void listTools( fstream &fRef )
{
   Tool temp;

   // display column headings
   cout << setw( 7 ) << "Record#" << "    " << left 
      << setw( 30 ) << "Tool name" << left 
      << setw( 13 ) << "Quantity" << left << setw( 10 ) << "Cost" << endl;

   // continue until 100 tools are displayed or end of file reached
   for ( int count = 0; count < 100 && !fRef.eof(); count++ ) 
   {
      // set file position pointer and begin reading
      fRef.seekg( count * sizeof( Tool ) );      
      fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Tool ) );

      // if part number is valid, display Tool information
      if ( temp.getPartNumber() >= 0 && temp.getPartNumber() < 100 ) 
      {
         cout << fixed << showpoint;
         cout << left << setw( 7 ) << temp.getPartNumber() << "    " 
            << left << setw( 30 ) << temp.getToolName() << left 
            << setw( 13 ) << temp.getInStock() << setprecision( 2 )
            << left << setw( 10 ) << temp.getUnitPrice() << '\n';
      } // end if
   } // end for
} // end function listTools

// function to update a tool's information
void updateRecord( fstream &fRef )
{
   Tool temp;
   int part;
   string name;
   int stock;
   double price;

   // ask user what part to update
   cout << "Enter the part number for update: ";
   cin >> part;

   // set file position pointer to correct tool
   fRef.seekg( part * sizeof( Tool ) );

   // read tool information
   fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Tool ) );

   // display tool information if partNumber is not -1
   if ( temp.getPartNumber() != -1 ) 
   {
      cout << setw( 7 ) << "Record#" << "    " << left 
         << setw( 30 ) << "Tool name" << left
         << setw( 13 ) << "Quantity" << setw( 10 ) << "Cost" << endl;

      cout << fixed << showpoint;
      cout << setw( 7 ) << temp.getPartNumber() << "    " 
         << left << setw( 30 ) << temp.getToolName() 
         << left << setw( 13 ) << temp.getInStock() 
         << setprecision( 2 ) << setw( 10 ) << temp.getUnitPrice() << '\n'
         << "Enter the tool name: "; // ask user for new name

      cin.ignore(); // ignore the newline on the input stream
      getline( cin, name ); // set new name
      temp.setToolName( name );  

      cout << "Enter quantity and price: "; // ask for price and quantity
      cin >> stock >> price;
      temp.setInStock( stock ); // set new quantity
      temp.setUnitPrice( price ); // get new price

      // set file position pointer and write information to file
      fRef.seekp( temp.getPartNumber() * sizeof( Tool ) );
      fRef.write( reinterpret_cast< char * > ( &temp ), sizeof( Tool ) );
   } // end if
   else
      cerr << "Cannot update. The record is empty.\n";
} // end function updateRecord

// function to insert a new record
void insertRecord( fstream &fRef )
{
   Tool temp;
   int part;
   string name;
   int stock;
   double price;

   // ask user for part number
   cout << "Enter the part number for insertion: ";
   cin >> part;

   // set file position pointer and read data from file
   fRef.seekg( part * sizeof( Tool ) );
   fRef.read( reinterpret_cast< char * > ( &temp ), sizeof( Tool ) );

   // as long as record is empty get information from user
   if ( temp.getPartNumber() == -1 ) 
   {
      temp.setPartNumber( part ); // set partNumber
      cout << "Enter the tool name: "; // ask user for tool name
      cin.ignore(); // ignore the newline on the input stream
      getline( cin, name ); 
      temp.setToolName( name ); // set toolName

      // ask user for new quantity and price
      cout << "Enter quantity and price: "; 
      cin >> stock >> price; 
      temp.setInStock( stock ); // set quantity
      temp.setUnitPrice( price ); // set price

      // set file position pointer and write information to file
      fRef.seekp( temp.getPartNumber() * sizeof( Tool ) );
      fRef.write( reinterpret_cast< char * >( &temp ), sizeof( Tool ) );
   } // end if
   else
      cerr << "Cannot insert. The record contains information.\n";
} // end function insertRecord

// function to delete a record
void deleteRecord( fstream &fRef )
{
   Tool blankItem;
   Tool temp;
   int part;

   // get tool user wants to delete
   cout << "Enter the part number for deletion: ";
   cin >> part;

   // set file position pointer and read information from file
   fRef.seekg( part * sizeof( Tool ) );
   fRef.read( reinterpret_cast< char * >( &temp ), sizeof( Tool ) );

   // if record contains data, set record to an empty Tool object
   if ( temp.getPartNumber() != -1 ) 
   {
      fRef.seekp( part * sizeof( Tool ) );
      fRef.write( 
         reinterpret_cast< char * >( &blankItem ), sizeof( Tool ) );
      cout << "Record deleted.\n";
   } // end if
   else
      cerr << "Cannot delete. The record is empty.\n";
} // end function deleteRecord



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
