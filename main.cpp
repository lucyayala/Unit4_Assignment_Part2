/* 
Lucy Ayala COSC: 1436-57002
Date: 02/06/2020 IDE: Repl.it tool 
Unit 4 Assignment Loops Part 2
Comments:  This program uses a for loop to display ordinals followed by the word Hello. 
*/


#include <iostream>
#include "Input_Validation_Extended.h" //input validation
using namespace std;

int main() 
{

//Declare and initialize variables
int Max_number = 0;


//Ask the user to enter a number they would like to end at
cout << "Please enter a number you would like to end your Hello's: " << endl;
Max_number = validateInt (Max_number);

//Loops Min_number by adding one
for( int Min_number = 1; Min_number < Max_number; Min_number++)
//Calcualte when to add ordinals and display output
  { if (Min_number % 100 ==11 || Min_number % 100 ==12 || Min_number % 100 == 13 || Min_number % 10 ==4||Min_number % 10== 5 ||Min_number % 10 ==6 ||Min_number % 10 ==7 ||Min_number % 10 ==8||Min_number % 10 ==9 || Min_number % 10 == 0)
        {
          cout << Min_number << "th hello" << endl;
        } 
    else
       {
        if (Min_number%10 == 1 && Min_number <100)
          {
            cout << Min_number << "st hello" << endl;
          }
        if (Min_number%10 ==2 && Min_number < 100)
          {
          cout << Min_number << "nd hello" << endl;
          }
        if (Min_number %10 == 3 && Min_number < 100)
          {
          cout << Min_number << "rd hello" << endl;
          }
        if (Min_number > 100)
        {
          cout << Min_number << "th hello" << endl;
        }
       }  
      
  
       
  }
  return 0;
}