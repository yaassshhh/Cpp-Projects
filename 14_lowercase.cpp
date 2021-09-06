/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -13  “Write a Program to Input a character and check whether it is in uppercase, lowercase, digit or
symbol and convert it to uppercase to lower case and lowercase to uppercase” */

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character in : ";
    cin >> ch;
   
     if (ch >= 40 && ch <= 57)
     {
         cout<<"Entered Charateris Digit"<<endl;
     }
     else if (ch >= 33 && ch <= 47 || ch >= 58 && ch <= 64 )
     { 
         cout<<"Entered Charater is symbol"<<endl;
     }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "character is in upper case" << endl;
        ch = ch + 32;
        cout << "Entered character in lowercase = " << ch;
    }
    else 
    {
        cout << "character is in lower case" << endl;
        ch = ch - 32;
        cout << "Entered character in uppercase = " << ch;
    }
    return 0;
}
