#include<iostream>
#include<math.h>
using namespace std;

float Simple_Intrest(int p ,float r , int t)
{
       return (p*r*t)/100 ;  
}

float Compound_intrest(int p ,float r , int t)
{
    return  p* (pow((1 + r / 100), t));
}

int main()
{
     int p,t;
     float r;
     cout<<"Enter principle , Rate and Time to calculate "<<endl;
     cin>>p>>r>>t;
     cout<<"Simple Intrest   : "<<Simple_Intrest(p ,r , t)<<endl;
     cout<<"Compound Intrest : "<< Compound_intrest(p ,r ,t);

    return 0;
}
