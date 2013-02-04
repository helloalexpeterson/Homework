/*
 * CIS 276 Introduction to C/C++ Programming
 * Chuck Nelson, Professor
 *
 * Student Information (please complete ? below)
 *    Name:    Alex Peterson
 *    Email:   s???????@student.rockvalleycollege.edu
 * Class Information
 *    Section:      ?
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
   string name;
   string choice;    
   string contributors_name; 
   string target_contribution;
   string actual_contribution;



   /* statements *************************************************
      code program instructions
   */

   //
   // display program headings
   //
   ////Project/program name: U01_BelowTargetReport
   //   by
   //   Joe Blough
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
      cin >> contributors_name; 
      cout << "Enter target contribution: ";
      cin >> target_contribution; 
      cout << "Enter actul contribution: ";
      cin >> actual_contribution; 




      //
      // Step #2: processing
      //





      //
      // Step #3: output
      //



      // display the report column headings
      // format & print column heading row



      // display the report detail line
      // 1 - format & display user name
      cout << left;                       // justification
      cout << setw(18);                   // width for column data
      cout << name;

      // 2 - format & display target contribution




      // 3 - format & display actual contribution





      // 4 - format & display difference
      // note: positive number means target met





      // see if the user wants to continue or to exit the program

      cout << "More contributions to process? (y/n): ";
      cin >> choice;
   } while (choice == "y" || choice == "Y" ); 






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

