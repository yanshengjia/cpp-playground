// Exercise 8.19 Solution: ex08_19.cpp
// Simpletron Simulator.
#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std;

const int SIZE = 100;
const int MAX_WORD = 9999;
const int MIN_WORD = -9999;
const long SENTINEL = -99999;
enum Commands { READ = 10, WRITE, LOAD = 20, STORE, ADD = 30, SUBTRACT,
   DIVIDE, MULTIPLY, BRANCH = 40, BRANCHNEG, BRANCHZERO, HALT };

// prototypes
void load( int * const );
void execute( int * const, int * const, int * const, int * const, 
   int * const, int * const);
void dump( const int * const, int, int, int, int, int );
bool validWord( int );
void output( string, int, int, bool );

int main()
{
   int memory[ SIZE ] = { 0 };
   int accumulator = 0;
   int instructionCounter = 0;
   int operationCode = 0;
   int operand = 0;
   int instructionRegister = 0;

   load( memory );
   execute( memory, &accumulator, &instructionCounter, 
      &instructionRegister, &operationCode, &operand );
   dump( memory, accumulator, instructionCounter, instructionRegister,
        operationCode, operand );
} // end main

// load instructions
void load( int * const loadMemory )
{
   long instruction;
   int i = 0;        // indexing variable

   cout << "***           Welcome to Simpletron           ***\n" 
        << "*** Please enter your program one instruction ***\n" 
        << "*** (or data word) at a time. I will type the ***\n" 
        << "*** location number and a question mark (?).  ***\n" 
        << "*** You then type the word for that location. ***\n" 
        << "*** Type the sentinel -99999 to stop entering ***\n" 
        << "*** your program.                             ***\n" 
        << "00 ? ";
   cin >> instruction;
   
   while ( instruction != SENTINEL ) 
   {   
      if ( !validWord( instruction ) )
         cout << "Number out of range. Please enter again.\n";
      else
         loadMemory[ i++ ] = instruction;

      // function setfill sets the padding character for unused
      // field widths. 
      cout << setw( 2 ) << setfill( '0' ) << i << " ? ";
      cin >> instruction;
   } // end while
} // end function load

// carry out the commands
void execute( int * const memory, int * const acPtr, int * const icPtr, 
   int * const irPtr, int * const opCodePtr, int * const opPtr )
{
   bool fatal = false;
   int temp;
   string messages[] = { "Accumulator overflow          ***",
                          "Attempt to divide by zero     ***",
                          "Invalid opcode detected       ***" };
   string termString = 
      "\n*** Simpletron execution abnormally terminated ***";
   string fatalString = "*** FATAL ERROR: ";

   cout << "\n************START SIMPLETRON EXECUTION************\n\n";

   do 
   {
      *irPtr = memory[ *icPtr ];
      *opCodePtr = *irPtr / 100;
      *opPtr = *irPtr % 100;
      
      // switch to determine appropriate action
      switch ( *opCodePtr ) 
      {
         case READ:
            cout << "Enter an integer: ";
            cin >> temp;
            
            while ( !validWord( temp ) ) 
            {
               cout << "Number out of range. Please enter again: ";
               cin >> temp;
            }
            
            memory[ *opPtr ] = temp;
            ++( *icPtr );
            break;
         case WRITE:
            cout << "Contents of " << setw( 2 ) << setfill( '0' ) 
                 << *opPtr << ": " << memory[ *opPtr ] << '\n';
            ++( *icPtr );
            break;
         case LOAD:
            *acPtr = memory[ *opPtr ];
            ++( *icPtr );
            break;
         case STORE:
            memory[ *opPtr ] = *acPtr;
            ++( *icPtr );
            break;
         case ADD:
            temp = *acPtr + memory[ *opPtr ];
            
            if ( !validWord( temp ) )
            {
               cout << fatalString << messages[ 0 ] << termString << '\n';
               fatal = true;
            }
            else 
            {
               *acPtr = temp;
               ++( *icPtr );
            }
               
            break;
         case SUBTRACT:
            temp = *acPtr - memory[ *opPtr ];
            
            if ( !validWord( temp ) ) 
            {
               cout << fatalString << messages[ 0 ] << termString << '\n';
               fatal = true;
            }
            else 
            {
               *acPtr = temp;
               ++( *icPtr );
            }
               
            break;
         case DIVIDE:
            if ( memory[ *opPtr ] == 0 ) 
            {
               cout << fatalString << messages[ 1 ] << termString << '\n';
               fatal = true;
            }
            else 
            {
               *acPtr /= memory[ *opPtr ];
               ++( *icPtr );
            }
            
            break;
         case MULTIPLY:
            temp = *acPtr * memory[ *opPtr ];
            
            if ( !validWord( temp ) ) 
            {
               cout << fatalString << messages[ 0 ] << termString << '\n';
               fatal = true;
            }
            else 
            {
               *acPtr = temp;
               ++( *icPtr );
            }
            break;
         case BRANCH:
            *icPtr = *opPtr;
            break;
         case BRANCHNEG:
            *acPtr < 0 ? *icPtr = *opPtr : ++( *icPtr );
            break;
         case BRANCHZERO:
            *acPtr == 0 ? *icPtr = *opPtr : ++( *icPtr );
            break;
         case HALT:
            cout << "*** Simpletron execution terminated ***\n";
            break;
         default:
            cout << fatalString << messages[ 2 ] << termString << '\n';
            fatal = true;     
            break;
      } // end switch   
   } while ( *opCodePtr != HALT && !fatal );
   
   cout << "\n*************END SIMPLETRON EXECUTION*************\n";
} // end function execute

// print out name and content of each register and memory
void dump( const int * const memory, int accumulator, 
   int instructionCounter, int instructionRegister, int operationCode, 
   int operand )
{
   cout << "\nREGISTERS:\n";
   output( "accumulator", 5, accumulator, true );
   output( "instructionCounter", 2, instructionCounter, false );
   output( "instructionRegister", 5, instructionRegister, true );
   output( "operationCode", 2, operationCode, false );
   output( "operand", 2, operand, false );
   cout << "\n\nMEMORY:\n";

   cout << setfill( ' ' ) << setw( 3 ) << ' ';

   // print header
   for ( int i = 0; i <= 9; ++i )
      cout << setw( 5 ) << i << ' ';
      
   for ( int i = 0; i < SIZE; ++i ) 
   {
      if ( i % 10 == 0 )
         cout << '\n' << setw( 2 ) << i << ' ';

      cout << internal << setw( 5 ) << setfill( '0' ) 
         << memory[ i ] << ' ' << internal;
   } // end for
   
   cout << endl;
} // end function dump

// validate 
bool validWord( int word )
{
   return word >= MIN_WORD && word <= MAX_WORD;
} // end function validWord

// display result
void output( string label, int width, int value, bool sign )
{        
   // format of "accumulator", etc.
   cout << setfill( ' ' ) << left << setw( 20 )
        << label << ' ';
   
   // is a +/- sign needed?
   if ( sign )
      cout << showpos << internal;

   // setup for displaying accumulator value, etc.
   cout << left << setfill( '0' );

   // determine the field widths and display value
   if ( width == 5 )
      cout << setw( width ) << value << '\n';
   else  // width is 2
      cout << setfill( ' ' ) << setw( 3 ) << ' ' << setw( width )
           << setfill( '0' ) << value << '\n';

   // disable sign if it was set
   if ( sign )
      cout << showpos << internal;
} // end function output

/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
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
 *************************************************************************/