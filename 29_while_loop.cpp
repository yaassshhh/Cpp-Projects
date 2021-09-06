/* 
program -29 “A Program to find the sum and average of the given numbers using the while loop”  */

#include<iostream>
using namespace std ;
      
int main()
{
     int  n = 0 ,a[5] = {1,5,3,5,6} , sum = 0, avg;
     while(n<5)
     {
        sum = sum + a[n];
        n++;
     } 
     avg = sum/n;
     
     cout<<"Sum of given number is : "<<sum <<endl;
     cout<<"avg of given number is : "<<avg ;

    return 0 ;
}
