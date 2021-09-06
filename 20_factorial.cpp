/* 
program -20 ““Program to calculate the factorial of an integer”” */

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * factorial(n - 1);
}

int main()

{

    int n;
    cout<<"Enter the number to calculate the factorial ";
    cin >> n;
    cout <<"Fsctorail of given number is : "<< factorial(n) << endl;
    return 0;
}
