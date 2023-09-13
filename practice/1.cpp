#include <iostream>
using namespace std;
// bool function1(int x,int y )
// {
// bool bit = x&(1<<y);
// return bit;
// }
int main()
{

    int arr[7] = {1, 1, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}