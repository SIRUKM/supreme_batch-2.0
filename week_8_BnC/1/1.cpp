#include<iostream>
using namespace std;

void merge(int *arr,int s, int e ){
    int mid = (s+e)/2;
    int leftsize = mid - s + 1;
    int rightsize = e - mid; 
    int *left = new int[leftsize];
    int *right = new int[rightsize];

    int k = s; // Declare and assign the value of "s" to "k"
    for(int i = 0; i<leftsize; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1; // Assign the value of "mid+1" to "k"
    for(int i = 0 ; i<rightsize; i++){
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < leftsize && rightIndex < rightsize){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }else{
            arr[mainArrayIndex] = right[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }

    }
    
}
void mergersort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    if(s==e){
        return;
    }

    int mid = (s+e)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);


}
int main()
{
    int arr[6] = {87,71, 2, 3, 0, 5};
    int size = 6;
    int s = 0;
    int e = size - 1;
    mergesort(arr,s,e);

    return 0;
}