/* 

program -20 ““Program to calculate the  of an integer”” */


#include <iostream>
using namespace std;


int fabonacii(int n)
{
    if (n < 2)

    {
        return 1;
    }

    return fabonacii(n - 2) + fabonacii(n - 1);
}

int main()
{
    int a;
    cout << "enter the number to calculate fabonacii " << endl;
    cin >> a;
    cout << "fabonacci of\t" << a << " is " << fabonacii(a) << endl;

    return 0;
}
