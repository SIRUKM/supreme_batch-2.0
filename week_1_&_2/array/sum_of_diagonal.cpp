#include<iostream>
using namespace std;
void sum_of_diagonal(int arr[3][4],int row , int col){
    int sum = 0;
    for (int i=0 ;i<row;++i) {
        sum+=arr[i][i];
        
    }
    cout<<sum;
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
    sum_of_diagonal(arr,row , col);

    return 0;
}