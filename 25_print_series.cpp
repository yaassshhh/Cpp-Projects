/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -24 “A program for print the series in the following format”
                                        54321
                                        4321
                                        321
                                        21
                                        1"*/

#include <iostream>
using namespace std;

int main()

{
    for (int i = 5; i >0; i--)
    {
        for (int j = i; j >0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}