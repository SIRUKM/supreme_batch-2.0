#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 3;

    // Using Temp

    // int temp = b;
    // b = a;
    // a = temp;

    // Using Arthematic Opetation

    // a = a+b;
    // b = a-b;
    // a = a-b;

    // Using XOR Operation

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;
    return 0;
}