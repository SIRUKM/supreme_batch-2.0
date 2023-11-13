#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "a = " << a << endl;

    int *ptr = &a;

    cout << &a << endl;

    cout << "ptr: " << ptr << endl;

    cout << "Accessing: " << *ptr << endl;
    return 0;
}