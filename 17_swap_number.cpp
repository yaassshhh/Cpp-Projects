/* 
program -17 “A Program for Swapping of two numbers with and without temporary variable” */


#include <iostream>
using namespace std;

void swap(int &a, int &b)
{ // using temp veriable
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap2(int &a, int &b)
{ // swapping without temp
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int a, b, x, y;
    cout << "Enter two number to swap using temp variable" << endl;
    cout << "A := ";
    cin >> a;
    cout << "B := ";
    cin >> b;
    cout << "Swapping of variables using temp variable" << endl;
    swap(a, b);
    cout << "value of A after swapping = " << a << endl;
    cout << "value of B after swapping = " << b << endl;
    cout << "\n \n \n";
    // swapping without temp
    cout << "Enter two number to swap without temp variable" << endl;
    cout << "X := ";
    cin >> x;
    cout << "Y := ";
    cin >> y;
    cout << "Swapping of variables without temp variable" << endl;
    swap2(x, y);
    cout << "value of X after swapping = " << x << endl;
    cout << "value of Y after swapping = " << y << endl;

    return 0;
}
