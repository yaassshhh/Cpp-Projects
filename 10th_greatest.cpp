/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -10th “Program for input three number and find the greatest element using Simple if, Nested
if………else, if…..else if……..if Statement*/

#include<iostream>
using namespace std;


int main()
{
     int num1 ,num2 ,num3 ,greatest;
     cout<<"Enter three number to find greatest among them : ";
     cin>>num1>>num2>>num3;
       if(num1>num2 && num1>num3)
       { 
           greatest= num1;
       }
       else if(num2>num1&&num2>num3)
       {
           greatest = num2;
       } 
       else 
       { greatest = num3;
       }
        cout<<"Greatest among three number is : "<< greatest ;

     return 0 ;
} 