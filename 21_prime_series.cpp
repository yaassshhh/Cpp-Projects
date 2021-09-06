/* 

program -21  “A Program for generate prime number series””  */

#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    for (int i = 0; i < 10; i++)
    {        
        cin>>n;
            for (i = 2; i <= n / 2; ++i)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
                else
                    cout << n;
            }
        }
        return 0;
    }
