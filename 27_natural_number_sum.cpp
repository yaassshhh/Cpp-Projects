/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program - 27 “A Program to find the sum of the first 100 natural numbers”  */

#include<iostream>
using namespace std ;
      
int main()
{
     int sum = 0;
     for(int i = 1 ; i <= 100; i ++)
       {
          sum = sum +i;
       }
       cout<<sum;
    return 0 ;
}