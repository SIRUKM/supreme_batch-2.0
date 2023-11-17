#include<iostream>
using namespace std;
int binaarySearch(int *arr, int s, int e, int target){
    if(s>e){
        return -1;
    }

    int mid = s + (e-s)/2;

    if(arr[mid]==target){
        return mid;
    }

    if(arr[mid]<target){
        binaarySearch(arr, mid + 1, e, target);
    }
    else{
        binaarySearch(arr,s, mid - 1, target);
    }

    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int s = 0;
    int e = size -1;
    int target = 80;
    int ans = binaarySearch(arr, s, e, target);
    if(ans !=-1){
        cout<<"found :";
    }
    else{
        cout<<"not found :";
    }

    return 0;
}