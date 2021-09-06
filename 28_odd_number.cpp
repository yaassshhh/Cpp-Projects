/* 
program -28 “A Program to display the first 100 odd numbers using the while loop”  */

#include <iostream>
using namespace std;

int main()
{
    int n=0;
    while (n < 200)
    {
        if (n % 2 != 0)
        {
            cout << n << endl;
          
        }  n++;
    }
    return 0;
}
