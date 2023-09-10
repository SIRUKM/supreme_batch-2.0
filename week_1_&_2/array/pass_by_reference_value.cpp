#include <iostream>
using namespace std;
void solve(int arr[], int n)//function ke aandar jub v array pass hota hai wo hamesha he pass by refrence hota hai 
{
    //n pass by value hua hai
    arr[0] = 100;
}
int main()
{
    int arr[3] = {1, 2, 3};
    int n = 3;

    solve(arr, n); // array by default pass by refrence hota hai
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}