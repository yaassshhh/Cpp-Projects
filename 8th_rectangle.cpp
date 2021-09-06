#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float l, b, h;
    cout << "Enter length of Rectangle : ";
    cin >> l;
    cout << endl;
    cout << "Enter breath of Rectangle : ";
    cin >> b;
    cout << endl;
    cout << "Enter height of Rectangle : ";
    cin >> h;
    cout << endl;

    cout << "Area of rectangle : " << l * b * h << endl;
    cout << "Perimeter of rectangle : " << 2 * (l + h) << endl;
    cout << "Diagonal of rectangle : " << sqrt(pow(l, 2) + pow(b, 2)) << endl;

    return 0;
}
