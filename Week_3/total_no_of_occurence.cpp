#include<iostream>
using namespace std;
int left_occ(int arr[], int n, int target){
    int s =0;
    int e = n-1;

    int ans = -1;

    while(s<=e){
        int mid = s +(e-s)/2;

        if(arr[mid]==target){
            ans = mid;
            e = mid -1;
        }

        else if(arr[mid]<target){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

    }

    return ans;
    
}

int right_occ(int arr[], int n, int target){
    int s =0;
    int e = n-1;

    int ans = -1;

    while(s<=e){
        int mid = s +(e-s)/2;

        if(arr[mid]==target){
            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid]<target){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

    }

    return ans;
    
} 

int findTotalOccurence(int arr[], int n, int target){
    int left_index = left_occ(arr, n, target);
    int right_index = right_occ(arr, n, target);
    int total_occ = right_index - left_index + 1;
    return total_occ;
}
int main()
{
    int arr[] = {1,2,2,2,2,2,2,3,6,7};
    int n = sizeof(arr)/sizeof(int);
    int target = 2;

    int ans = findTotalOccurence(arr,n,target);
    cout<<ans<<endl;

    

    return 0;
}