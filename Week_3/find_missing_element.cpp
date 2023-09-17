#include<iostream>
using namespace std;
int find_missing_element(int arr[],int n){
    int s= 0;
    int e =n-1;

    int ans =-1;

    while(s<=e){
        int mid = s +(e-s)/2;
        int diff = arr[mid] - mid;

        if(diff==1){
            s = mid + 1;
        }

        else{
            
            ans = mid;
            e = mid -1;

        }
    }
    return ans + 1;
}
int main()
{
    int arr[] = {1,2,3,4,6,7,8};
    int n = sizeof(arr)/sizeof(int);

    int ans = find_missing_element(arr, n);
    cout<<ans;

    return 0;
}