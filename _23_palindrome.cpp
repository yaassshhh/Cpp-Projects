/*
program -23 “Program for Display Reverse of a number and show a reverse number is palindrome or not”*/

#include<iostream>
using namespace std ;

int main()
{
     int N,num,rev=0;
     cout<<"Enter number to reverse and to check weather it is palindome or not... ";
     cin>>N;
      num = N;
     while(N!=0)
     {   int a;
         a = N%10;
            rev = (rev * 10) + a;
         N = N/10;

     } cout<<"Reverse of entered number is = "<<rev<<endl;
     if(num==rev)
     cout<<"Entered number is palindrome ";
     else
     cout<<"Entered  number is not palindrome ";

    return 0;
}
