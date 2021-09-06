/* 

program -18 “A program for finding the given number is odd or even and first number is divisible by second using
Switch Case Statement” */

#include <iostream>
using namespace std;

int main()
{
    int choice;
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "Enter your choice " << endl;
    cout << " press 1 to check number is even or odd" << endl;
    cout << " press 2 to check it first number is divisible by second number or not" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        if(num1%2==0)
        cout<<"Entered number 1 is even"<<endl;
        else
        cout<<"Entered number 1 is odd"<<endl;
          if(num2%2==0)
        cout<<"Entered number 2 is even"<<endl;
        else
        cout<<"Entered number 2 is odd"<<endl;
        break;
    case 2:
          if(num1%num2==0)
        cout<<"Entered number is divisible by num1"<<endl;
        else
        cout<<"Entered number is not divisible by num1"<<endl;
        break;
      
    default:
        cout << "Invalid ";
        
    }
    return 0;
}


