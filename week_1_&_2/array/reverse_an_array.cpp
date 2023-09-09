#include <iostream>
using namespace std;
void reverse_arr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[(n - 1) - i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {3, 4, 6, 1, 2, 8};
    int n = 6;
    reverse_arr(arr, n);
}