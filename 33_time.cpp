/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program - 35 “Program for convert seconds into minutes and hours. ”  */


#include<iostream>
using namespace std ;
      
int main()
{
      int sec, h, m, s;
	cout<<"Input seconds: ";
	cin>>sec;
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	cout<< " H : M : S = "<<h<<" : "<<m<<" : "<<s; 
    return 0 ;
}