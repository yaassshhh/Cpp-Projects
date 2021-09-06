/* 
program -20 ““A Program for given number is prime or not”” */

#include <iostream>
using namespace std;

int main() {
    int i, n;
    int flag = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        flag == 1;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
               flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
