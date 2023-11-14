#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;

    int **ptr2 = &ptr; // pointer to pointer banane ke liye multilple stars use karte hia

    int ***ptr3 = &ptr2;

    cout << ptr << "    " << ptr2 << "  " << ptr3;
    return 0;
}