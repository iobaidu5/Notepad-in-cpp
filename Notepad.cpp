#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <strings.h>
#include <windows.h>
#include "notepad.h"
int last();                                    //Declaration Of Introduction Function  Last();

   using namespace std;

   int main()
{
    char a;
	char ch;
    Notepad o1;                                   // Declaration of the Object (o1 )


    do
    {

       system("cls");                                               // For clear screen
       system ("color FC");                                        // For Background And Text Color
      cout <<"\t\t\t-------------------"<<endl;                 
      cout << "\t\t\t''''''Notepad''''''"<<endl;                  // Menu For Choosing Option
      cout <<"\t\t\t-------------------"<<endl;

      cout <<"\n   New";
      cout <<"\t\tOpen";
      cout <<"\t\tFind";
      cout <<"\t\tPrint";
      cout <<"\t\tExit\n";
      a = getch();                                        

    	switch(a)                                             // Switching The Char a to Access The required Function
    	{


    		case 'n': 
    		     	o1.New();
    			    break;

    		case 'o':
    				o1.open();
    				break;

    		case 'f':
    				o1.Find();
    				break;
    					
    		case 'p':
    				o1.print();
    				break;
    					
            case 'e':
                goto EXIT;

            default:
                cout<<"Invalid Input";


    		}

    	       	cout << "\nPress Any Key To Back To Main Menu OR E To Exit " << endl;
    	       	a=getch();

    }

	  	while(a!='e');                                                        // Terminating Loop Condition
	  	EXIT:                                                                // Goto Path For Last Option
	  	o1.last();                                                          // Calling function


	  	return 0;

}

