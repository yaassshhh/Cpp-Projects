/* 

program -1 “Write a Program for Calculate Area and Perimeter of the Circle” */

#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    int r;
    cout << "Enter the radious of circle :" << endl;
    cin >> r;
    cout << "Area of circle of Radious " << r << " is " << (PI * r * r);

    return 0;
}
