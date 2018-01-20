// --------------------------------------------------------------------
// File name:   calculator.cpp
// Assign ID:   PROG6
//
// Due Date:    2/16/17 by 11:00 pm
//
// Purpose:     Biuld Integer Calculator.
//
// Author:      dgrant De'Shon Grant
// --------------------------------------------------------------------
    
#include <iostream>
#include <iomanip>
using namespace std;
    
int main()
{
    //----------------------------------------------------------------------
    // Declare variables for program.
    //----------------------------------------------------------------------
    char Choice;   // Menu choice entered by user.
    int Left;      // Left operand.
    int Right;     // Right operand.
    int Answer;    // Result of the calculator operation.
    
    //-| --------------------------------------------------
    //-| Print the copyright notice declaring authorship.
    //-| --------------------------------------------------
    cout << endl << "(c) 2017, dgrant De'Shon Grant  " << endl << endl;
    

    //-| --------------------------------------------------------------
    //-| Repeat until user enters 'Q' or 'q':
    //-|     1. Display the menu.
    //-|     2. Read user's selection.
    //-|     3. Perform the selected operation.
    //-| --------------------------------------------------------------
    do
    {
     cout << "+=============================================+" << endl;
     cout << "| *************  MY CALCULATOR  ************* |" << endl;
     cout << "| ------------------------------------------- |" << endl;
     cout << "|   A) Add                                    |" << endl;
     cout << "|   S) Subtract                               |" << endl;
     cout << "|   M) Multiply                               |" << endl;
     cout << "|   D) Divide                                 |" << endl;
     cout << "|   R) Remainder (Mod)                        |" << endl;
     cout << "|   Q) QUIT (turn off)                        |" << endl;
     cout << "|                                             |" << endl;
     cout << "| ------------------------------------------- |" << endl;
     cout << "| (c) 2017, dgrant De'Shon Grant              |" << endl;
     cout << "+=============================================+" << endl;
          
     cout << endl;
        
       cout << "Enter Menu Choice: ";
       cin >> Choice;
              
     cout << endl;
        
        cout << endl << Choice << ": ";
         
        switch (Choice)
        {
            case 'A':   cout << endl << Choice << ": "
                        << "Enter left operand: ";
                        cin >> Left; 
        
                        cout << endl << Choice << ": "
                        << "Enter right operand: ";
                        cin >> Right;
                
                Answer = Left + Right;
                cout << endl << Left << " + " << Right << " = " << Answer << endl; 
                break;
            case 'S':   cout << endl << Choice << ": "
                        << "Enter left operand: ";
                        cin >> Left; 
        
                        cout << endl << Choice << ": "
                        << "Enter right operand: ";
                        cin >> Right;
                Answer = Left - Right;
                cout << endl << Left << " - " << Right << " = " << Answer << endl; 
                break;
            case 'M':   cout << endl << Choice << ": "
                        << "Enter Multiplicand: ";
                        cin >> Left; 
        
                        cout << endl << Choice << ": "
                        << "Enter Multiplier: ";
                        cin >> Right;
                Answer = Left * Right;
                cout << endl << Left << " x " << Right << " = " << Answer << endl; 
                break;
            case 'D':   cout << endl << Choice << ": "
                        << "Enter Dividend: ";
                        cin >> Left; 
        
                        cout << endl << Choice << ": "
                        << "Enter Divisor: ";
                        cin >> Right;
                        if(Right == 0)
                        {
                            cout << Left << "UNABLE to Divide: Divisor is ZERO." << endl;
                        }else
                        {
                            Answer = Left / Right;
                            cout << endl << Left << " / " << Right << " = " << Answer << endl;     
                        } 
                        break;
            case 'R':   cout << endl << Choice << ": "
                        << "Enter left operand: ";
                        cin >> Left; 
        
                        cout << endl << Choice << ": "
                        << "Enter right operand: ";
                        cin >> Right;
                        if(Right == 0)
                        {
                            cout << Left << " MOD " << Right << " NOT DEFINED." << endl;
                        }else
                        {
                            Answer = Left % Right;
                            cout << endl << Left << " % " << Right << " = " << Answer << endl;     
                        } 
                        break;
            case 'Q':
                cout << endl << Choice << " POWERING DOWN ..." << endl;
                break;
                
            default: cout << "BAD MENU CHOICE.\n";
            break;

        }
          
        
        
    }
    while (toupper(Choice) != 'Q'); 
    
    //-| --------------------------------------------------
    //-| Print the copyright notice declaring authorship.
    //-| --------------------------------------------------
    cout << endl << endl << "(c) 2017, dgrant De'Shon Grant " << endl;
    
    
    return 0;
}//main
