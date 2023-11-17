#include<iostream>
using namespace std;
bool findTarget(int arr[], int size , int index,int target){
    if(index >= size){
        return false;
    }

    if(arr[index] == target)
    {
        return true;
    }

    bool ans = findTarget(arr,size,index+1,target);
    return ans;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 50;
    cout<<findTarget(arr,size,index,target);


    return 0;
}