#include<iostream>
#include<vector> // Add this line to include the vector header file
using namespace std;
void merge(vector<int>&a, int start, int end, int mid)
{
    int lenLeft  = mid - start + 1;
    int lenRight = end - mid;

    //create two temporary arrays
    int *left = new int[lenLeft];
    int * right = new int[lenRight];


    //copy the elements from the main array to the temporary arrays
    for(int i = 0; i<lenLeft; i++){
        left[i] = a[start + i];
    }

    //copy the elements from the main array to the temporary arrays
    for(int i = 0; i< lenRight; i++){
        right[i] = a[mid + 1 + i];
    }

    //merge the two arrays
    int i = 0, j = 0, k = start;
    while(i<lenLeft && j < lenRight){
        if(left[i] <= right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
            
    }
    delete[] left;
    delete[] right;
}
void merge_sort(vector<int>&a, int start, int end)
{
    //base case
    if(start>end){
        return;
    }
    if(start==end){
        return;
    }


    int mid = (start + end) / 2;//break the array into two halves

    //call recursion on left half
    merge_sort(a, start, mid);//left half
    //call recursion on right half
    merge_sort(a, mid + 1, end);//right half

    //merge the two halves
    merge(a,start, end, mid);
}
int main()
{
    vector<int>a = {1, 3, 5, 7, 9};
    int n = a.size();
    int start = 0;
    int end = n - 1;

    merge_sort(a, start, end);


    
    return 0;
}