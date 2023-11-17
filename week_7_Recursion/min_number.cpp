#include<iostream>
using namespace std;
void findMin(int *arr, int size, int index, int &mini){
    if(index>=size){
        return;
    }

    mini = min(mini, arr[index]);
    findMin( arr, size, index+1, mini);
    


}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    findMin(arr, size, index, mini);
    cout<<mini;

    return 0;
}