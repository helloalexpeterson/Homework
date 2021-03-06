/*
 * CIS 276 Introduction to C/C++ Programming
 * Chuck Nelson, Professor
 *
 * Student Information (please complete ? below)
 *    Name:    Alex Peterson
 *    Email:   s0362809@student.rockvalleycollege.edu
 * Class Information
 *    Section: D010
 * Assignment Information
 *    Project Name:  U01_BelowTargetReport
 *    Source  Name:  U01_BelowTargetReport.cpp
 *---------------------------------------------------------------------
 */



// preprocessor directives----
#include <iostream>                    // for program input & output
#include <string>                      // for string class data
#include <iomanip>                     // for formatting output
using namespace std;

string programmers_name = "Alex Peterson";
string project_name = "U01_BelowTargetReport";
/* Function: main() *************************************************
 *
 * application entry point
 */

// STUDENT CODE BEGINS
int main()
{

   /* declarations ***********************************************
      declare program data
   */
   string choice;    
   string contributors_name; 
   int target_contribution;
   int actual_contribution;
   int difference; 


   /* statements *************************************************
      code program instructions
   */

   //
   // display program headings
   //
   cout << "Project/program name: " << project_name << endl;
   cout << "by" << endl;
   cout << programmers_name << endl;
   cout << endl;

   // enter program loop (do while)
   do
   {
      //
      // Step #1: input
      //
      cout << "Enter contributor's name: ";
      cin.ignore();                                // Required for getline() to work
      getline(cin, contributors_name);
      cout << "Enter target contribution: ";
      cin >> target_contribution; 
      cout << "Enter actual contribution: ";
      cin >> actual_contribution; 

      //
      // Step #2: processing
      //
      difference = actual_contribution - target_contribution;

      //
      // Step #3: output
      //

      // display the report column headings
      // format & print column heading row
      cout << endl;
      
      cout << left;                       
      cout << setw(18);                   
      cout << "Name";

      cout << right;                       
      cout << setw(6);                   
      cout << "Target";

      cout << right;                       
      cout << setw(10);                   
      cout << "Actual";

      cout << right;                       
      cout << setw(14);                   
      cout << "Difference";
      cout << endl << 
         "------------------------------------------------" << endl ;

      // display the report detail line
      // 1 - format & display user name
      cout << left;                       // justification
      cout << setw(18);                   // width for column data
      cout << contributors_name;

      // 2 - format & display target contribution
      cout << right;                       
      cout << setw(6);                   
      cout << target_contribution;

      // 3 - format & display actual contribution
      cout << right;                       
      cout << setw(10);                   
      cout << actual_contribution;

      // 4 - format & display difference
      // note: positive number means target met
      cout << right;                       
      cout << setw(14);                   
      cout << difference;
      
      // see if the user wants to continue or to exit the program
      cout << endl << endl << "More contributions to process? (y/n): ";
      cin >> choice;
      cout << endl << "..........................." << endl;
   } while (choice == "y" || choice == "Y" );                        // The while loop loops the program again, allowing the user to input new information without using the same data that was stored in RAM

   //
   // program termination
   //


    /* main() program termination (required in all programs)
     * -the main() function of all programs will always end with
     *   1) cin.get()
     *   2) return 0;
     *   3) }        // ending curly brace
     *
     * cin.ignore() is sometimes not needed
     * cin.get() is always needed
     */
    cin.ignore();
    cin.get();

   return 0;
}
// end of main() function ----------------------------------------

// STUDENT CODE ENDS



//-------------------------------------------------------------------
// General Functions
//-------------------------------------------------------------------

// <none>

//-------------------------------------------------------------------
// Utility Functions
//-------------------------------------------------------------------

// <none>

