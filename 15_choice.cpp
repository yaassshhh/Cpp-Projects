/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -15 ““Program for choice ‘+’, ‘-’, ‘*’, ‘/’, ‘%’ -&gt; Addition, Subtraction, Multiplication, Division,
 Remainder”” */

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2;
    int n1,n2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "Enter your choice " << endl;
    cout << " press 1 for add" << endl;
    cout << " press 2 for sub" << endl;
    cout << " press 3 for mul" << endl;
    cout << " press 4 for div" << endl;
    cout << " press 5 for Remainder" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case 2:
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case 3:
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        
    case 4:
        if (num2 == 0)
        {
            cout << num1 << " / " << num2 << " = "
                 << "not defined";
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;
    case 5:
         cout<<"choose again two number for modules"<<endl;
         cin>>n1>>n2;
        cout << num1 << " % " << num2 << " = " <<  n1 %  n2;
        break;
    default:
        cout << "Invalid ";
        
    }
    return 0;
}


