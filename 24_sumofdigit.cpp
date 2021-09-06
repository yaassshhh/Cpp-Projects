/* 
program -24 “*/

#include<iostream>
using namespace std;

int main()
{
     int num , a,b=0,sum=0;
     cout<<"Enter the number to calculate sum of their digits ";
     cin>> num;
     while(num!=0)
     {
         a = num%10;
        sum = sum+ (a*a*a);
        num = num/10;
         b+=1;
     }
     cout<<"sum of digites of given number is : "<<sum<<endl;
     cout<<"Number of digits in given number is "<<b;

    return 0;
}
