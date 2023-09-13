#include<iostream>
using namespace std;
void shift_Negative_one_Side(int arr[],int n){
    int j = 0;
    for (int i=0 ;i<n;++i) {
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {23,-7,12,-10,-11,40,60};
    int size = sizeof(arr)/sizeof(int);
    // int i = 0;
    // int j = i+1;
    // while(i<size && j<size){
    //     if (arr[j]<0 && arr[i]>0){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j++;
    //     }
    //     else{
    //         j++;
    //     }
    // }

    shift_Negative_one_Side(arr,size);
    

    for (int i=0 ;i<size;++i) {
        cout<<arr[i]<<" ";
    }
    return 0;
}