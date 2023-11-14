#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 30, 40, 50, 60};
    cout << arr << " " << &arr << " " << &arr[0] << endl; // sara base address he print karega
    int *ptr = arr;
    cout<<"ptr: "<<ptr<<endl;
    cout << "defrence :" << *arr << endl;

    char ch[50] = "Love";
    char *cptr = ch;

    cout<<cptr;


    return 0;
}