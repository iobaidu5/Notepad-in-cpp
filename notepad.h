#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <strings.h>
#include <cmath>
#include <windows.h>

  using namespace std;

  class Notepad
  {
  protected:
          string s,size;
          int found , i,a;
	      string word;
          string str3,str4, filename;



  public:

  	 int New();

     int open();

     int Find();

     int print();

     int last();

  };



  

  /////////////////////////////////// NEW File OPTION //////////////////////////////////

    int Notepad::New()
     {
     	
     	           
     	           system ("color B0");   
					system("cls");           

			   	   cout<<"Enter New File name"<<endl;
			   	   cin>>str3;
			   	   ofstream outfile;


			   	   filename = str3 + ".txt";

			   	  outfile.open(filename.c_str(), ios::out | ios::binary);
			   	   
			   	   
			   	   system ("color F1");
			   	   system("cls");
			   	   
			   	   cout<<"\t\tSTART HERE"<<endl;
			   	   s = cin.get();
			   	   getline(cin,s);
			   	   outfile<<s;
			   	   outfile.close();
			   	   
			   	   system("cls");

                  cout<<"Loading  .";
                  Sleep(700);
                  cout<<" .";
                  Sleep(700);
                  cout<<" .";
                  Sleep(500);


     	         cout<<"\n\tYour File Saved Successfully"<<endl;
     	         
			     return 0;


     }
 

 ////////////////////////////// OPEN File Option ////////////////////////


     	int Notepad::open()
     	{
     		    system("cls");
     		    system ("color B0");


     	    	ifstream infile;
     		    cout<<"Enter File name to Open "<<endl;
		        cin>>str4;

			 filename = str4 + ".txt";

			 infile.open(filename.c_str(), ios::out | ios::binary);

			   	  system("cls");

     		if(!infile)
     		{
     			cerr << "Couldn't find open file";
     			return 1;
			 }


			   char ch;
			   ch = infile.get();

			 while(!infile.eof())
			 {
			 	cout<<ch;
			 	 ch = infile.get();
			 	
			 }
     	
     		size = s;
     		cout<<"\n\n\n\n\n\n\n\n\n\n\t\n\t\t\t\t\t No Of Words is  "<<size.size()<<"\n\n\n\n\n\n";
     		infile.close();
     		return 0;
     	}
     	
     	
     	///////////////////////// Print ///////////////////
     	 int Notepad::print()
       {
       	
       	           char print;
       	           char x ;
       	           system("cls");
     	           system ("color B4");              

			   	   cout<<"Enter New File name"<<endl;
			   	   cin>>str3;
			   	   ofstream outprint;


			   	   filename = str3 + ".txt";

			   	  outprint.open(filename.c_str(), ios::out | ios::binary);
			   	   
			   	   system("cls");
			   	   
			  
                   ifstream inprint;
                   if( !inprint )                                                          //check for errors
                   {
                   cerr << "\nCan’t open " << endl;
                   exit(-1);
                 }   
                 
                 
                 while( inprint.get(print) != 0 )                                        //read a character
                 outprint.put(print);                                                  //write character to printer
                 outprint.put('\x0C');                                                  //formfeed to eject page
                 system("cls");
                 
                 
                 do
                 { 
                    system("cls");
                    cout << "\n\t\tPRINTING";
                 	   Sleep(500);
                 	   cout << ". ";
                 	   Sleep(500);
                 	   cout << ". ";
                 	   Sleep(500);
                 	   cout <<". ";
                 	   Sleep(500);
                 	   cout <<". ";
                 	   x = getch();
				 }
				     
	                 
				    while(x!='\r');
                 cout <<"\n\n\n";
                 return 0;
}

        

/////////////////////////////// To Find the Postion of Character Or Word /////////////////////////////////////////////

             int Notepad::Find()
			   {
			   	 found = 0;
			   	 i = 0;

			   	system("cls");
			   	system ("color E0");

			   	string str2;

			   	cout<<"Enter Word/Character To Find Its Position"<<endl;
			   	cin>>str2;



			   	while(found!=-1)
			   	{ 
			   	       
			   					
			   		  found = s.find(str2, i);
			   		  if(found < 0)
			   		  {                                             
			   		  	     continue;
					  }

			   		  cout<<"\n\t\tFound At Position "<<found+1<<endl;
			   		  i = found+1;
			   	      

				   }
				
				   
				 return 0;
			}

       //////////////////////// Project Members Data //////////////////////////////

                int Notepad::last()
    {

    system("cls");
    system ("color D0");
    cout<<"\n\n\n\n\n";
    cout<<"\t /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/**/*/*/*/*/*/*\n";
    cout<<"Project Made BY:   Obaid Ullah\t M.Asad Khan\t Kainat Naeem\t Shadab Anwar \n";
    cout<<"\nRegistration NO:   16MDSWEO642\t 16MDSWE0640\t 16MDSWE0650\t 16MDSWE0657 \n ";
    cout<<"\n\t\t Department:        Computer Software Engineering\n";
    cout<<"\n\t\t Semester:          \t\t2nd\n";
    cout<<"\n\t\t Section:           \t\tB\n\n";
    cout<<"\n\t        UNIVERSITY OF ENGINEERING & TECHNOLOGY (MARDAN CAMPUS) \n";
    cout<<"\n\t/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/**/*/*/*/*/*/*";
    cout<<"\n\n\n \t\t\t\t\t\t Press any key to exit ^_^";
    getch();
    return 0;
}



