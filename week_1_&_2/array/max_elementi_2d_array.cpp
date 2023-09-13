#include<iostream>
#include<limits.h>
using namespace std; 

int maxElement(int arr[][4],int row, int col){
    int max1 =INT_MIN;
    for (int i=0 ;i <row; ++i){
        for(int j = 0; j<col; j++){
            if(arr[i][j]>max1){
                max1 = arr[i][j];
            }
        }
    }
    return max1;
}
int main()
{
    int arr[3][4]= {
        {1,2,3,4},
        {4,5,6,7},
        {8,9,10,11}
    };
    int row = 3;
    int col = 4;
    int asn = maxElement(arr,row,col);
    cout<<asn;


    return 0;
}