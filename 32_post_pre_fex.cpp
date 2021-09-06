/* 
program -32  ““Program to demonstrate the unary operators, prefix and postfix modes.”” */

#include <iostream>

using namespace std;

int main() {
   int a = 5, b = 5;

   // 5 is displayed
   // Then, var1 is increased to 6.
   cout << a++ << endl;

   // var2 is increased to 6
   // Then, it is displayed.
   cout << ++b << endl;

   return 0;
}
