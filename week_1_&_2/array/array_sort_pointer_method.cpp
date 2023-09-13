#include <iostream>
using namespace std;
// pointer method to swap
int main()
{
    int arr[] = {1, 1, 1, 1, 0, 0, 1};
    int start = 0;
    int end = ((sizeof(arr) / sizeof(int)) - 1);
    int size = sizeof(arr) / sizeof(int);
    while (start < end)
    {

        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end++;
        }
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}