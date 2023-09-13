#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,
                 0,
                 2,
                 1,
                 1,
                 0};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else
            i++;
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}