/* 

program -31  “A program to calculating the total amount of money earned in n day.” */

#include <iostream>

using namespace std;

int main()

{

    int n;

    int total, rate = 20;

    cout << "Enter number of days worked: ";

    cin >> n;

    total = n * rate;

    cout << "For " << n << " days of work, you have earned RS : ";

    cout << total << endl;

    return 0;
}
